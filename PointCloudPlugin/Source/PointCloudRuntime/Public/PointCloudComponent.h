// Copyright 2018 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "PointCloudComponent.generated.h"

class FPointCloudSceneProxy;
class UPointCloud;

/** Component that allows you to render specified point cloud section */
UCLASS(ClassGroup=Rendering, hidecategories = (Object, LOD, Physics, Collision, Materials), meta = (BlueprintSpawnableComponent))
class POINTCLOUDRUNTIME_API UPointCloudComponent : public UMeshComponent
{
	GENERATED_UCLASS_BODY()
		
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Point Cloud", meta = (AllowPrivateAccess = "true"))
	UPointCloud *PointCloud;

public:
	UFUNCTION(BlueprintPure, Category = "Components|PointCloud")
	UPointCloud* GetPointCloud() const { return PointCloud; }

	UFUNCTION(BlueprintCallable, Category = "Components|PointCloud")
	void SetPointCloud(UPointCloud *InPointCloud);

	// Begin UObject Interface.
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
	// End UObject Interface.

#if WITH_EDITOR
	virtual void PostLoad() override;

	virtual void PreEditChange(UProperty* PropertyThatWillChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	// Begin UPrimitiveComponent Interface
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	virtual int32 GetNumMaterials() const override;
	virtual UMaterialInterface* GetMaterial(int32 ElementIndex) const override;
	// End UMeshComponent Interface

	// Begin USceneComponent Interface
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
	// End USceneComponent Interface

	void AttachPointCloudListener();
	void RemovePointCloudListener();
	void OnPointCloudRebuilt();

	friend class FPointCloudSceneProxy;
};


