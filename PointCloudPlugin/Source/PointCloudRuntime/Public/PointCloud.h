// Copyright 2018 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialInterface.h"
#include "Curves/CurveFloat.h"
#include "PointCloudShared.h"
#include "PointCloudOctree.h"
#include "PointCloud.generated.h"

class UMaterialInstanceDynamic;

enum class EVBReleaseMode : uint8
{
	/**
	 * Doesn't actually remove the data, simply marks the buffer as empty.
	 * This is much quicker and safe, as the data will be overwritten later
	 */
	None,

	// Releases the contained data from memory but doesn't remove the buffer itself
	Free,

	// Releases the data, and fully removes and nulls the buffer
	Full
};

UENUM(BlueprintType)
enum class EPointCloudRenderMethod : uint8
{
	Point_Unlit,
	Point_Unlit_RGB,
	Point_Lit,
	Point_Lit_RGB,
	Sprite_Unlit,
	Sprite_Unlit_RGB,
	Sprite_Lit,
	Sprite_Lit_RGB
};

UENUM(BlueprintType)
enum class EPointCloudColorOverride : uint8
{
	None,
	Height,
	Position
};

UENUM(BlueprintType)
enum class EPointCloudSpriteMask : uint8
{
	None,
	Circle,
	Texture
};

UCLASS()
class POINTCLOUDRUNTIME_API UPointCloudSettings : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	FPointCloudFileHeader FileHeader;

	/**
	 * How should the point cloud be repositioned:
	 * None: no change to coordinates
	 * Center: moves center of the cloud to 0,0,0
	 * First Point: moves first point to 0,0,0
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation")
	EPointCloudOffset Offset;

	/** Offset to add to each point */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation")
	FVector Translation;

	/** Scale to apply to each point */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transformation")
	FVector Scale;

	/** Uses 16-bit precision for Location and 16-bit RGB color but significantly reduces VRAM requirements. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Performance")
	bool bUseLowPrecision;

	/**
	 * If enabled, Vertex Buffer is built and sent to the GPU as soon as the cloud is loaded, and released only when the level changes.
	 * This may reduce loading times at the cost of fixed VRAM pre-allocation.
	 * Recommended when you often switch cloud's visibility.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Performance")
	bool bVertexBufferPreloading;

	/**
	 * Points which are closer than this value will be removed.
	 * Higher number will result in lower cloud resolution.
	 * Values higher than 0 will enable the reduction.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Processing")
	float DensityReductionDistance;
	
	/**
	 * Points which are further away than this value will be removed.
	 * Useful to remove singular points and small clusters scattered around the area.
	 * Optimal value will depend on the density of the cloud and the value of DensityReductionDistance.
	 * Setting this value too low will cause quality degradation and cloud coverage loss.
	 * Values higher than 0 will enable the reduction.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Processing")
	float NoiseReductionDistance;

	/**
	 * Minimum amount of neighbors within the NoiseReductionDistance range of the point, for it to not be considered stray.
	 * Optimal value will depend on the density of the cloud and sizes of the artifacts. 5 seems to generally give good results without visible data loss.
	 * Setting this value too high will cause quality degradation and cloud coverage loss.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Processing")
	int32 NoiseReductionDensity;

public:
	void LoadFileHeader(const FString& Filename);

#if WITH_EDITOR
	virtual bool CanEditChange(const UProperty* InProperty) const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent) override;
#endif
};

UCLASS()
class POINTCLOUDRUNTIME_API UPointCloudImportSettings : public UPointCloudSettings
{
	GENERATED_UCLASS_BODY()

public:
	bool bImportAll;
};

UCLASS(BlueprintType, AutoExpandCategories=("Performance", "Rendering|Sprite"), AutoCollapseCategories=("Import Settings"))
class POINTCLOUDRUNTIME_API UPointCloud : public UPointCloudSettings
{
	GENERATED_UCLASS_BODY()

public:
	/** Stores the path to the original source file. Empty if dynamically created. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	FFilePath SourcePath;

	/**
	 * Minimum LOD at which to switch to single triangle per sprite. Ignored if using point rendering.
	 * Use SinglePolyScale property to help mitigate potential gaps between triangles.
	 * 0			   Always uses single poly sprites
	 * 1 - MaxLOD	Switches to single triangles at given LOD
	 * > MAXLOD	Disabled
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance", meta = (DisplayName = "Single Poly Minimum LOD", ClampMin = "0"))
	int32 SinglePolySpriteMinimumLOD;

	/**
	 * Minimum amount of points for the node to be rendered. This can save CPU time by skipping stray, inconsequential nodes (usually noise)
	 * but setting it too high may result in visible artifacts. Less dense clouds should generally have this value lowered.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance", meta = (ClampMin = "1"))
	int32 MinimumNodePointCount;

	/** Enables usage of the auto-LOD system. May be beneficial to disable for very small clouds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance")
	bool bEnableLOD;

	/**
	 * Affects the distance at which the LOD switches to max quality, measured in UU from camera position.
	 * Higher values will result in better quality but may degrade performance.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance", meta = (ClampMin = "1.0"))
	float ViewDistance;

	/**
	 * Controls the transition distance between consecutive LODs.
	 * Higher values will result in better quality but worse performance.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Performance", meta = (DisplayName = "LOD Distribution", ClampMin = "1"))
	float LODDistribution;

	/**
	 * Affects the number of LODs to generate
	 * Smaller numbers will result in longer build times for the cloud.
	 * Setting it too low may consume excessively large CPU time at runtime
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Performance", meta = (ClampMin = "1"))
	float PreferredNodeSize;

	/**
	 * Specifies the percentage of points to remove in each LOD step.
	 * Requires range of 0 - 1. Higher numbers will result in faster quality degradation.
	 * For example, setting it to 0.5 will generate LOD0: 100%, LOD1: 50%, LOD2: 25%, LOD3: 12.5% etc.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Performance", meta = (DisplayName = "LOD Reduction Factor", ClampMin = "0.0", ClampMax = "1.0"))
	float LODReduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
	EPointCloudRenderMethod RenderMethod;

	/**
	 * None - no effect
	 * Height - The cloud color will be overridden with height-based color
	 * Position - The cloud color will be overridden with position-based color
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
	EPointCloudColorOverride ColorOverride;

	/** Applied additively, 0 being neutral. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Color Adjustment")
	float Brightness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Color Adjustment")
	float Contrast;

	/** Ignored if non-RGB rendering mode is selected */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Color Adjustment")
	float Saturation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Color Adjustment")
	float Gamma;

	/** Specifies the tint to apply to the points. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Color Adjustment")
	FLinearColor Color;

	/**
	 * Multiplies the color output by the given value.
	 * Useful in combination with Unlit render mode to create Bloom and light bleed effects.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Color Adjustment")
	float Intensity;

	/** Minimum and Maximum sizes of the sprite */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Sprite")
	FVector2D SpriteSize;

	/**
	 * Allows fine-tuning of the sprite size auto-adjustment.
	 * Setting it too high may result in unnecessarily large sprites, degrading quality,
	 * while setting it too low will result in visible gaps between individual sprites.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Sprite", meta = (ClampMin = "0"))
	float SpriteSizeBias;

	/** Enabling it will attempt to make the sprite size transition smoother. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Sprite")
	bool bLerpSpriteSize;

	/**
	 * Allows applying custom scale to single poly sprites. Useful when minimizing gaps.
	 * Top, Right, Bottom, Left
	 * Warning: setting it too high will result in performance degradation.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Sprite")
	FVector4 SinglePolyScale;

	/** Texture to use with sprites. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Sprite")
	class UTexture2D *SpriteTexture;

	/**
	 * Affects the shape of sprites.
	 * None - Standard, square shape. Fastest.
	 * Circle - Simple circle, medium speed.
	 * Texture - Alpha channel of the sprite texture. Slowest.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering|Sprite")
	EPointCloudSpriteMask SpriteMask;

	/**
	 * Setting this will automatically replace the default material.
	 * To access the properties selected via the panel, use MF_PointCloudParameters node.
	 * NOTE: if used in conjunction with Sprite rendering mode, make sure to assign WorldPositionOffset
	 * via MF_PointCloud_SpriteTransform node (or some other way), otherwise nothing will be visible.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Rendering")
	UMaterialInterface *CustomMaterial;

	/** Freezes LOD processing. Useful for debugging out of screen rendering. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Rendering")
	bool bDebugLOD;

	FPointCloudOctree Octree;

	/**
	 * Used to store rendering information of the Point Cloud.
	 * Only vertex buffer is shared, as indices are built based on the current LOD
	 */
	struct FPointCloudRenderData
	{
		// NOTE: Destruction happes via UPointCloud::BeginDestroy

		FPointCloudRenderData();

		UPointCloud *PointCloud;
		uint32 VertexCount;

		class FPointCloudVertexBuffer *VertexBuffer;
		class FPointCloudVertexFactory *VertexFactory;
		
		void BuildVertexBuffer();

		/** Convenience methods */
		void InitResources();
		void ReleaseResources(EVBReleaseMode VBReleaseMode);
		
		bool HasData() const;
		FORCEINLINE bool HasRegisteredProxies() const { return ProxyCount > 0; }

		/** Registers proxy for use with the data and initializes it if necessary */
		void AddProxy();

		/** Unregisters proxy and releases data it if no other users are registered */
		void RemoveProxy();

	private:
		/** Used to keep track of how many instances uses this data */
		int32 ProxyCount;
	} RenderData;

private:
	/** Specifies what color information is contained inside the data */
	EPointCloudColorMode ColorMode;

	bool bUsesSprites;
	bool bUsesSpritesCached;
	bool bUseLODColoration;
	int32 SinglePolySpriteMinimumLODCached;
	float LODReductionCached;

	uint8 LODCountCached;

	TArray<float> DistanceThresholds;

	FBoxSphereBounds LocalBounds;

	/** Used for caching the asset registry tag data. */
	struct FPointCloudAssetRegistryCache
	{
		FString PointCountTotal;
		FString PointCountEnabled;
		FString ApproxSize;
		FString Usage;
	};
	FPointCloudAssetRegistryCache PointCloudAssetRegistryCache;

	/** Flags that the point cloud settings have been modified but not rebuilt yet.  */
	bool bDirty;

	/** Flags that the Transform parameters have changed and will re-run it during next Rebuild. */
	bool bTransformDirty;

	/** Flags that the Density or Noise Reduction parameters have changed and will re-run them during next Rebuild. */
	bool bReductionDirty;

	/** Flags the Render Data for rebuilding. */
	bool bRenderDataDirty;

	/** Flags the Octree for rebuilding. */
	bool bTreeDirty;

	/** Flags Materials for rebuilding. */
	bool bMaterialDirty;

	/** Stores the data */
	TArray<FPointCloudPoint> Points;

	UPROPERTY(Transient)
	UMaterialInterface *MasterMaterial;

	/** Stores material for each LOD */
	UPROPERTY(Transient)
	TArray<UMaterialInterface*> Materials;

	/** A fence which is used to keep track of the rendering thread releasing the resources. */
	FRenderCommandFence ReleaseResourcesFence;

	/** Used to prevent the warnings showing with every rebuild. */
	bool bWarningScale;
	bool bWarningColor;

public:
	DECLARE_EVENT(UPointCloud, FOnPointCloudChanged);

	~UPointCloud();

	// Begin UObject Interface.
	virtual void Serialize(FArchive& Ar) override;
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	virtual void PostLoad() override;
	virtual void BeginDestroy() override;
	virtual bool IsReadyForFinishDestroy() override;

#if WITH_EDITOR
	virtual bool CanEditChange(const UProperty* InProperty) const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent) override;
	// End UObject Interface.
#endif

	virtual FOnPointCloudChanged& OnPointCloudChanged() { return OnPointCloudChangedEvent; }
	virtual FOnPointCloudChanged& OnPointCloudSourceChanged() { return OnPointCloudSourceChangedEvent; }
	virtual FOnPointCloudChanged& OnPointCloudRebuilt() { return OnPointCloudRebuiltEvent; }

	UFUNCTION(BlueprintPure, Category = "Rendering")
	FORCEINLINE bool UsesSprites() const { return bUsesSpritesCached; }

	/** Returns true if the chosen Render Method requires RGB color data. */
	UFUNCTION(BlueprintPure, Category = "Rendering")
	FORCEINLINE bool UsesRGB() const { return RenderMethod == EPointCloudRenderMethod::Point_Unlit_RGB || RenderMethod == EPointCloudRenderMethod::Sprite_Unlit_RGB || RenderMethod == EPointCloudRenderMethod::Point_Lit_RGB || RenderMethod == EPointCloudRenderMethod::Sprite_Lit_RGB; }

	/** Returns true if the chosen Render Method uses lit lighting model. */
	UFUNCTION(BlueprintPure, Category = "Rendering")
	FORCEINLINE bool UsesLit() const { return RenderMethod == EPointCloudRenderMethod::Point_Lit || RenderMethod == EPointCloudRenderMethod::Sprite_Lit || RenderMethod == EPointCloudRenderMethod::Point_Lit_RGB || RenderMethod == EPointCloudRenderMethod::Sprite_Lit_RGB; }

	UFUNCTION(BlueprintPure, Category = "Rendering")
	FORCEINLINE UMaterialInterface* GetMaterial(int32 LOD) const { return LOD >= 0 && LOD < Materials.Num() ? Materials[LOD] : nullptr; }

	UFUNCTION(BlueprintPure, Category = "Rendering")
	FORCEINLINE int32 GetNumMaterials() const { return Materials.Num(); }

	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	FORCEINLINE bool UsesLowPrecision() { return bUseLowPrecision; }

	/** Returns the type of color information contained within the cloud. */
	UFUNCTION(BlueprintPure, Category = "Rendering")
	FORCEINLINE EPointCloudColorMode GetColorMode() const { return ColorMode; }

	/** Applies specified rendering parameters (Brightness, Saturation, etc) to the selected material */
	UFUNCTION(BlueprintCallable, Category = "Rendering")
	void ApplyRenderingParameters();

	/** Sets the LOD Coloration flag for the material */
	UFUNCTION(BlueprintCallable, Category = "Rendering")
	void SetLODColoration(bool bEnable);

	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	FORCEINLINE bool IsDirty() { return bDirty; }

	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	FORCEINLINE int32 GetLODCount() { return LODCountCached; }

	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	FBoxSphereBounds GetBounds() const { return LocalBounds; }

	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	int32 GetPointCount(bool bCountOnlyEnabled) const;

	/** Rebuilds the cloud using current settings */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	void Rebuild(bool bForced = false);

	/** Permanently strips all disabled points */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	void Bake();

	/**
	 * Reimports the cloud from it's original source file, overwriting any current point information.
	 * Optionally rebuilds the cloud if successfully reimported.
	 * Returns true if successful.
	 */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	bool Reimport(bool bRebuild = true);

	/** Sets new source for the file and optionally runs all necessary processing. */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	void SetNewSourcePath(FString NewSourcePath, bool bProcess = true);

	/** Sets new Rendering Method. */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	void SetRenderingMethod(EPointCloudRenderMethod NewRenderMethod, bool bRebuild = false);

	/** Sets Custom Material and optionally rebuilds the cloud. */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	void SetCustomMaterial(UMaterialInterface *InCustomMaterial, bool bRebuild = false);

	/** Return Points Data as reference to array */
	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	FORCEINLINE TArray<FPointCloudPoint>& GetPointCloudData() { return Points; }

	/**
	 * Replaces the original data with the set provided.
	 * Optionally rebuilds using current settings.
	 */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	void SetPointCloudData(UPARAM(ref) TArray<FPointCloudPoint> &InPoints, bool bRebuildCloud = true);

	/** Bulk sets the new settings from the ones provided */
	void SetSettings(UPointCloudSettings *Settings);

	void SetColorMode(EPointCloudColorMode NewMode);

	FORCEINLINE float GetDistanceThreshold(uint8 LOD) { return DistanceThresholds[LOD]; }

private:
	void CalculateDistanceThresholds();
	void CacheAssetRegistryTags();
	void DetermineSpriteUsage();
	void BuildRenderData();

	/** Adjusts the RenderMethod if it currently requires RGB but the data doesn't provide it */
	void AdjustColorMode();

	/** Adjusts performance related settings based on current cloud properties. */
	void AdjustPerformanceSettings();

	void ProcessWarningMessages();

	FOnPointCloudChanged OnPointCloudChangedEvent;
	FOnPointCloudChanged OnPointCloudSourceChangedEvent;
	FOnPointCloudChanged OnPointCloudRebuiltEvent;
};