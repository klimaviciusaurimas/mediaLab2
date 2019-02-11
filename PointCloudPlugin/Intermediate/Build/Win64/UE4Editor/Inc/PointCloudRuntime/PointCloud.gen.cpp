// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloud.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloud() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudSettings_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudFileHeader();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudImportSettings_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudImportSettings();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_Bake();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetColorMode();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetLODCount();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetNumMaterials();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetPointCloudData();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetPointCount();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_IsDirty();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_Rebuild();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_Reimport();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetCustomMaterial();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetLODColoration();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetNewSourcePath();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetPointCloudData();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetRenderingMethod();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_UsesLit();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_UsesLowPrecision();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_UsesRGB();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_UsesSprites();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	static UEnum* EPointCloudSpriteMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudSpriteMask"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudSpriteMask(EPointCloudSpriteMask_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudSpriteMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask_CRC() { return 2674733891U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudSpriteMask"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudSpriteMask::None", (int64)EPointCloudSpriteMask::None },
				{ "EPointCloudSpriteMask::Circle", (int64)EPointCloudSpriteMask::Circle },
				{ "EPointCloudSpriteMask::Texture", (int64)EPointCloudSpriteMask::Texture },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloud.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPointCloudSpriteMask",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPointCloudSpriteMask",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPointCloudColorOverride_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudColorOverride"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudColorOverride(EPointCloudColorOverride_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudColorOverride"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride_CRC() { return 1062211886U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudColorOverride"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudColorOverride::None", (int64)EPointCloudColorOverride::None },
				{ "EPointCloudColorOverride::Height", (int64)EPointCloudColorOverride::Height },
				{ "EPointCloudColorOverride::Position", (int64)EPointCloudColorOverride::Position },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloud.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPointCloudColorOverride",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPointCloudColorOverride",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPointCloudRenderMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudRenderMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudRenderMethod(EPointCloudRenderMethod_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudRenderMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod_CRC() { return 1792861267U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudRenderMethod"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudRenderMethod::Point_Unlit", (int64)EPointCloudRenderMethod::Point_Unlit },
				{ "EPointCloudRenderMethod::Point_Unlit_RGB", (int64)EPointCloudRenderMethod::Point_Unlit_RGB },
				{ "EPointCloudRenderMethod::Point_Lit", (int64)EPointCloudRenderMethod::Point_Lit },
				{ "EPointCloudRenderMethod::Point_Lit_RGB", (int64)EPointCloudRenderMethod::Point_Lit_RGB },
				{ "EPointCloudRenderMethod::Sprite_Unlit", (int64)EPointCloudRenderMethod::Sprite_Unlit },
				{ "EPointCloudRenderMethod::Sprite_Unlit_RGB", (int64)EPointCloudRenderMethod::Sprite_Unlit_RGB },
				{ "EPointCloudRenderMethod::Sprite_Lit", (int64)EPointCloudRenderMethod::Sprite_Lit },
				{ "EPointCloudRenderMethod::Sprite_Lit_RGB", (int64)EPointCloudRenderMethod::Sprite_Lit_RGB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloud.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPointCloudRenderMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPointCloudRenderMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPointCloudSettings::StaticRegisterNativesUPointCloudSettings()
	{
	}
	UClass* Z_Construct_UClass_UPointCloudSettings_NoRegister()
	{
		return UPointCloudSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseReductionDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NoiseReductionDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseReductionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseReductionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityReductionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityReductionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVertexBufferPreloading_MetaData[];
#endif
		static void NewProp_bVertexBufferPreloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVertexBufferPreloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLowPrecision_MetaData[];
#endif
		static void NewProp_bUseLowPrecision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLowPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Offset_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileHeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointCloud.h" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDensity_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Minimum amount of neighbors within the NoiseReductionDistance range of the point, for it to not be considered stray.\nOptimal value will depend on the density of the cloud and sizes of the artifacts. 5 seems to generally give good results without visible data loss.\nSetting this value too high will cause quality degradation and cloud coverage loss." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDensity = { UE4CodeGen_Private::EPropertyClass::Int, "NoiseReductionDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloudSettings, NoiseReductionDensity), METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDistance_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Points which are further away than this value will be removed.\nUseful to remove singular points and small clusters scattered around the area.\nOptimal value will depend on the density of the cloud and the value of DensityReductionDistance.\nSetting this value too low will cause quality degradation and cloud coverage loss.\nValues higher than 0 will enable the reduction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "NoiseReductionDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloudSettings, NoiseReductionDistance), METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_DensityReductionDistance_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Points which are closer than this value will be removed.\nHigher number will result in lower cloud resolution.\nValues higher than 0 will enable the reduction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_DensityReductionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DensityReductionDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloudSettings, DensityReductionDistance), METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_DensityReductionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_DensityReductionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bVertexBufferPreloading_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "If enabled, Vertex Buffer is built and sent to the GPU as soon as the cloud is loaded, and released only when the level changes.\nThis may reduce loading times at the cost of fixed VRAM pre-allocation.\nRecommended when you often switch cloud's visibility." },
	};
#endif
	void Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bVertexBufferPreloading_SetBit(void* Obj)
	{
		((UPointCloudSettings*)Obj)->bVertexBufferPreloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bVertexBufferPreloading = { UE4CodeGen_Private::EPropertyClass::Bool, "bVertexBufferPreloading", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPointCloudSettings), &Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bVertexBufferPreloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bVertexBufferPreloading_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bVertexBufferPreloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bUseLowPrecision_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Uses 16-bit precision for Location and 16-bit RGB color but significantly reduces VRAM requirements." },
	};
#endif
	void Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bUseLowPrecision_SetBit(void* Obj)
	{
		((UPointCloudSettings*)Obj)->bUseLowPrecision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bUseLowPrecision = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLowPrecision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPointCloudSettings), &Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bUseLowPrecision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bUseLowPrecision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bUseLowPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Scale to apply to each point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloudSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Offset to add to each point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloudSettings, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "How should the point cloud be repositioned:\nNone: no change to coordinates\nCenter: moves center of the cloud to 0,0,0\nFirst Point: moves first point to 0,0,0" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Enum, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloudSettings, Offset), Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset, METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Offset_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_FileHeader_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_FileHeader = { UE4CodeGen_Private::EPropertyClass::Struct, "FileHeader", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloudSettings, FileHeader), Z_Construct_UScriptStruct_FPointCloudFileHeader, METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_FileHeader_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_FileHeader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_NoiseReductionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_DensityReductionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bVertexBufferPreloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_bUseLowPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_Offset_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSettings_Statics::NewProp_FileHeader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudSettings_Statics::ClassParams = {
		&UPointCloudSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPointCloudSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudSettings, 4055075392);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudSettings(Z_Construct_UClass_UPointCloudSettings, &UPointCloudSettings::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudSettings);
	void UPointCloudImportSettings::StaticRegisterNativesUPointCloudImportSettings()
	{
	}
	UClass* Z_Construct_UClass_UPointCloudImportSettings_NoRegister()
	{
		return UPointCloudImportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudImportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudImportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudImportSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointCloud.h" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudImportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudImportSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudImportSettings_Statics::ClassParams = {
		&UPointCloudImportSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudImportSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudImportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudImportSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudImportSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudImportSettings, 1295466614);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudImportSettings(Z_Construct_UClass_UPointCloudImportSettings, &UPointCloudImportSettings::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudImportSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudImportSettings);
	void UPointCloud::StaticRegisterNativesUPointCloud()
	{
		UClass* Class = UPointCloud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyRenderingParameters", &UPointCloud::execApplyRenderingParameters },
			{ "Bake", &UPointCloud::execBake },
			{ "GetBounds", &UPointCloud::execGetBounds },
			{ "GetColorMode", &UPointCloud::execGetColorMode },
			{ "GetLODCount", &UPointCloud::execGetLODCount },
			{ "GetMaterial", &UPointCloud::execGetMaterial },
			{ "GetNumMaterials", &UPointCloud::execGetNumMaterials },
			{ "GetPointCloudData", &UPointCloud::execGetPointCloudData },
			{ "GetPointCount", &UPointCloud::execGetPointCount },
			{ "IsDirty", &UPointCloud::execIsDirty },
			{ "Rebuild", &UPointCloud::execRebuild },
			{ "Reimport", &UPointCloud::execReimport },
			{ "SetCustomMaterial", &UPointCloud::execSetCustomMaterial },
			{ "SetLODColoration", &UPointCloud::execSetLODColoration },
			{ "SetNewSourcePath", &UPointCloud::execSetNewSourcePath },
			{ "SetPointCloudData", &UPointCloud::execSetPointCloudData },
			{ "SetRenderingMethod", &UPointCloud::execSetRenderingMethod },
			{ "UsesLit", &UPointCloud::execUsesLit },
			{ "UsesLowPrecision", &UPointCloud::execUsesLowPrecision },
			{ "UsesRGB", &UPointCloud::execUsesRGB },
			{ "UsesSprites", &UPointCloud::execUsesSprites },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Applies specified rendering parameters (Brightness, Saturation, etc) to the selected material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "ApplyRenderingParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_Bake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_Bake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Permanently strips all disabled points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_Bake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "Bake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_Bake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Bake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_Bake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_Bake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetBounds_Statics
	{
		struct PointCloud_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_GetBounds_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloud_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "GetBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PointCloud_eventGetBounds_Parms), Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetColorMode_Statics
	{
		struct PointCloud_eventGetColorMode_Parms
		{
			EPointCloudColorMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloud_eventGetColorMode_Parms, ReturnValue), Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Returns the type of color information contained within the cloud." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "GetColorMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PointCloud_eventGetColorMode_Parms), Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetColorMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetLODCount_Statics
	{
		struct PointCloud_eventGetLODCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloud_eventGetLODCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "GetLODCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(PointCloud_eventGetLODCount_Parms), Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetLODCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetMaterial_Statics
	{
		struct PointCloud_eventGetMaterial_Parms
		{
			int32 LOD;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloud_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::NewProp_LOD = { UE4CodeGen_Private::EPropertyClass::Int, "LOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloud_eventGetMaterial_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::NewProp_LOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "GetMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PointCloud_eventGetMaterial_Parms), Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics
	{
		struct PointCloud_eventGetNumMaterials_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloud_eventGetNumMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "GetNumMaterials", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PointCloud_eventGetNumMaterials_Parms), Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetNumMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics
	{
		struct PointCloud_eventGetPointCloudData_Parms
		{
			TArray<FPointCloudPoint> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloud_eventGetPointCloudData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Return Points Data as reference to array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "GetPointCloudData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(PointCloud_eventGetPointCloudData_Parms), Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetPointCloudData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetPointCount_Statics
	{
		struct PointCloud_eventGetPointCount_Parms
		{
			bool bCountOnlyEnabled;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bCountOnlyEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCountOnlyEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloud_eventGetPointCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_bCountOnlyEnabled_SetBit(void* Obj)
	{
		((PointCloud_eventGetPointCount_Parms*)Obj)->bCountOnlyEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_bCountOnlyEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bCountOnlyEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventGetPointCount_Parms), &Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_bCountOnlyEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_bCountOnlyEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "GetPointCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PointCloud_eventGetPointCount_Parms), Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetPointCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_IsDirty_Statics
	{
		struct PointCloud_eventIsDirty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_IsDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventIsDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_IsDirty_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventIsDirty_Parms), &Z_Construct_UFunction_UPointCloud_IsDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_IsDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_IsDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_IsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_IsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "IsDirty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(PointCloud_eventIsDirty_Parms), Z_Construct_UFunction_UPointCloud_IsDirty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_IsDirty_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_IsDirty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_IsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_IsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_IsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_Rebuild_Statics
	{
		struct PointCloud_eventRebuild_Parms
		{
			bool bForced;
		};
		static void NewProp_bForced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_Rebuild_Statics::NewProp_bForced_SetBit(void* Obj)
	{
		((PointCloud_eventRebuild_Parms*)Obj)->bForced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_Rebuild_Statics::NewProp_bForced = { UE4CodeGen_Private::EPropertyClass::Bool, "bForced", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventRebuild_Parms), &Z_Construct_UFunction_UPointCloud_Rebuild_Statics::NewProp_bForced_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_Rebuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_Rebuild_Statics::NewProp_bForced,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_Rebuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bForced", "false" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Rebuilds the cloud using current settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_Rebuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "Rebuild", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointCloud_eventRebuild_Parms), Z_Construct_UFunction_UPointCloud_Rebuild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Rebuild_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_Rebuild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Rebuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_Rebuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_Rebuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_Reimport_Statics
	{
		struct PointCloud_eventReimport_Parms
		{
			bool bRebuild;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuild;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventReimport_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventReimport_Parms), &Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_bRebuild_SetBit(void* Obj)
	{
		((PointCloud_eventReimport_Parms*)Obj)->bRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_bRebuild = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventReimport_Parms), &Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_bRebuild_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_bRebuild,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bRebuild", "true" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Reimports the cloud from it's original source file, overwriting any current point information.\nOptionally rebuilds the cloud if successfully reimported.\nReturns true if successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "Reimport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointCloud_eventReimport_Parms), Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_Reimport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_Reimport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics
	{
		struct PointCloud_eventSetCustomMaterial_Parms
		{
			UMaterialInterface* InCustomMaterial;
			bool bRebuild;
		};
		static void NewProp_bRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuild;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCustomMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_bRebuild_SetBit(void* Obj)
	{
		((PointCloud_eventSetCustomMaterial_Parms*)Obj)->bRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_bRebuild = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventSetCustomMaterial_Parms), &Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_bRebuild_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_InCustomMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "InCustomMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloud_eventSetCustomMaterial_Parms, InCustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_bRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_InCustomMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bRebuild", "false" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Sets Custom Material and optionally rebuilds the cloud." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "SetCustomMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointCloud_eventSetCustomMaterial_Parms), Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetCustomMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics
	{
		struct PointCloud_eventSetLODColoration_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((PointCloud_eventSetLODColoration_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventSetLODColoration_Parms), &Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Sets the LOD Coloration flag for the material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "SetLODColoration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointCloud_eventSetLODColoration_Parms), Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetLODColoration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics
	{
		struct PointCloud_eventSetNewSourcePath_Parms
		{
			FString NewSourcePath;
			bool bProcess;
		};
		static void NewProp_bProcess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcess;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewSourcePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_bProcess_SetBit(void* Obj)
	{
		((PointCloud_eventSetNewSourcePath_Parms*)Obj)->bProcess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_bProcess = { UE4CodeGen_Private::EPropertyClass::Bool, "bProcess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventSetNewSourcePath_Parms), &Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_bProcess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_NewSourcePath = { UE4CodeGen_Private::EPropertyClass::Str, "NewSourcePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloud_eventSetNewSourcePath_Parms, NewSourcePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_bProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_NewSourcePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bProcess", "true" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Sets new source for the file and optionally runs all necessary processing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "SetNewSourcePath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointCloud_eventSetNewSourcePath_Parms), Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetNewSourcePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics
	{
		struct PointCloud_eventSetPointCloudData_Parms
		{
			TArray<FPointCloudPoint> InPoints;
			bool bRebuildCloud;
		};
		static void NewProp_bRebuildCloud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildCloud;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_bRebuildCloud_SetBit(void* Obj)
	{
		((PointCloud_eventSetPointCloudData_Parms*)Obj)->bRebuildCloud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_bRebuildCloud = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildCloud", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventSetPointCloudData_Parms), &Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_bRebuildCloud_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_InPoints = { UE4CodeGen_Private::EPropertyClass::Array, "InPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(PointCloud_eventSetPointCloudData_Parms, InPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_InPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_bRebuildCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_InPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_InPoints_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bRebuildCloud", "true" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Replaces the original data with the set provided.\nOptionally rebuilds using current settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "SetPointCloudData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(PointCloud_eventSetPointCloudData_Parms), Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetPointCloudData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics
	{
		struct PointCloud_eventSetRenderingMethod_Parms
		{
			EPointCloudRenderMethod NewRenderMethod;
			bool bRebuild;
		};
		static void NewProp_bRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuild;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewRenderMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewRenderMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_bRebuild_SetBit(void* Obj)
	{
		((PointCloud_eventSetRenderingMethod_Parms*)Obj)->bRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_bRebuild = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventSetRenderingMethod_Parms), &Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_bRebuild_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_NewRenderMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "NewRenderMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloud_eventSetRenderingMethod_Parms, NewRenderMethod), Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_NewRenderMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_bRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_NewRenderMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_NewRenderMethod_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bRebuild", "false" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Sets new Rendering Method." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "SetRenderingMethod", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointCloud_eventSetRenderingMethod_Parms), Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetRenderingMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_UsesLit_Statics
	{
		struct PointCloud_eventUsesLit_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_UsesLit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventUsesLit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_UsesLit_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventUsesLit_Parms), &Z_Construct_UFunction_UPointCloud_UsesLit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_UsesLit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_UsesLit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_UsesLit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Returns true if the chosen Render Method uses lit lighting model." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_UsesLit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "UsesLit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PointCloud_eventUsesLit_Parms), Z_Construct_UFunction_UPointCloud_UsesLit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesLit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_UsesLit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesLit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_UsesLit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_UsesLit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics
	{
		struct PointCloud_eventUsesLowPrecision_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventUsesLowPrecision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventUsesLowPrecision_Parms), &Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "UsesLowPrecision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(PointCloud_eventUsesLowPrecision_Parms), Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_UsesLowPrecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_UsesRGB_Statics
	{
		struct PointCloud_eventUsesRGB_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventUsesRGB_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventUsesRGB_Parms), &Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Returns true if the chosen Render Method requires RGB color data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "UsesRGB", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PointCloud_eventUsesRGB_Parms), Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_UsesRGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_UsesSprites_Statics
	{
		struct PointCloud_eventUsesSprites_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventUsesSprites_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloud_eventUsesSprites_Parms), &Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, "UsesSprites", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PointCloud_eventUsesSprites_Parms), Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_UsesSprites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointCloud_NoRegister()
	{
		return UPointCloud::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugLOD_MetaData[];
#endif
		static void NewProp_bDebugLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpriteMask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpriteMask_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SinglePolyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SinglePolyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLerpSpriteSize_MetaData[];
#endif
		static void NewProp_bLerpSpriteSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLerpSpriteSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteSizeBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpriteSizeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Saturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorOverride;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorOverride_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredNodeSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreferredNodeSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLOD_MetaData[];
#endif
		static void NewProp_bEnableLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumNodePointCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumNodePointCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SinglePolySpriteMinimumLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SinglePolySpriteMinimumLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters, "ApplyRenderingParameters" }, // 3559791538
		{ &Z_Construct_UFunction_UPointCloud_Bake, "Bake" }, // 1422841856
		{ &Z_Construct_UFunction_UPointCloud_GetBounds, "GetBounds" }, // 1380064722
		{ &Z_Construct_UFunction_UPointCloud_GetColorMode, "GetColorMode" }, // 2016574397
		{ &Z_Construct_UFunction_UPointCloud_GetLODCount, "GetLODCount" }, // 167598338
		{ &Z_Construct_UFunction_UPointCloud_GetMaterial, "GetMaterial" }, // 4183959701
		{ &Z_Construct_UFunction_UPointCloud_GetNumMaterials, "GetNumMaterials" }, // 1757456473
		{ &Z_Construct_UFunction_UPointCloud_GetPointCloudData, "GetPointCloudData" }, // 2653344922
		{ &Z_Construct_UFunction_UPointCloud_GetPointCount, "GetPointCount" }, // 2308455295
		{ &Z_Construct_UFunction_UPointCloud_IsDirty, "IsDirty" }, // 3571121866
		{ &Z_Construct_UFunction_UPointCloud_Rebuild, "Rebuild" }, // 2502157150
		{ &Z_Construct_UFunction_UPointCloud_Reimport, "Reimport" }, // 549898462
		{ &Z_Construct_UFunction_UPointCloud_SetCustomMaterial, "SetCustomMaterial" }, // 574212955
		{ &Z_Construct_UFunction_UPointCloud_SetLODColoration, "SetLODColoration" }, // 3837695718
		{ &Z_Construct_UFunction_UPointCloud_SetNewSourcePath, "SetNewSourcePath" }, // 3243939212
		{ &Z_Construct_UFunction_UPointCloud_SetPointCloudData, "SetPointCloudData" }, // 3538044036
		{ &Z_Construct_UFunction_UPointCloud_SetRenderingMethod, "SetRenderingMethod" }, // 2592443245
		{ &Z_Construct_UFunction_UPointCloud_UsesLit, "UsesLit" }, // 31790773
		{ &Z_Construct_UFunction_UPointCloud_UsesLowPrecision, "UsesLowPrecision" }, // 2681849111
		{ &Z_Construct_UFunction_UPointCloud_UsesRGB, "UsesRGB" }, // 4063923440
		{ &Z_Construct_UFunction_UPointCloud_UsesSprites, "UsesSprites" }, // 1539770619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Import Settings" },
		{ "AutoExpandCategories", "Performance Rendering|Sprite" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "PointCloud.h" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Stores material for each LOD" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials = { UE4CodeGen_Private::EPropertyClass::Array, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UPointCloud, Materials), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "MasterMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UPointCloud, MasterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Freezes LOD processing. Useful for debugging out of screen rendering." },
	};
#endif
	void Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_SetBit(void* Obj)
	{
		((UPointCloud*)Obj)->bDebugLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPointCloud), &Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Setting this will automatically replace the default material.\nTo access the properties selected via the panel, use MF_PointCloudParameters node.\nNOTE: if used in conjunction with Sprite rendering mode, make sure to assign WorldPositionOffset\nvia MF_PointCloud_SpriteTransform node (or some other way), otherwise nothing will be visible." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "CustomMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, CustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Affects the shape of sprites.\nNone - Standard, square shape. Fastest.\nCircle - Simple circle, medium speed.\nTexture - Alpha channel of the sprite texture. Slowest." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask = { UE4CodeGen_Private::EPropertyClass::Enum, "SpriteMask", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, SpriteMask), Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Texture to use with sprites." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, SpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Allows applying custom scale to single poly sprites. Useful when minimizing gaps.\nTop, Right, Bottom, Left\nWarning: setting it too high will result in performance degradation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale = { UE4CodeGen_Private::EPropertyClass::Struct, "SinglePolyScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, SinglePolyScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Enabling it will attempt to make the sprite size transition smoother." },
	};
#endif
	void Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_SetBit(void* Obj)
	{
		((UPointCloud*)Obj)->bLerpSpriteSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bLerpSpriteSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPointCloud), &Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Allows fine-tuning of the sprite size auto-adjustment.\nSetting it too high may result in unnecessarily large sprites, degrading quality,\nwhile setting it too low will result in visible gaps between individual sprites." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias = { UE4CodeGen_Private::EPropertyClass::Float, "SpriteSizeBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, SpriteSizeBias), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Minimum and Maximum sizes of the sprite" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize = { UE4CodeGen_Private::EPropertyClass::Struct, "SpriteSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, SpriteSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Multiplies the color output by the given value.\nUseful in combination with Unlit render mode to create Bloom and light bleed effects." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, Intensity), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Specifies the tint to apply to the points." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma = { UE4CodeGen_Private::EPropertyClass::Float, "Gamma", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, Gamma), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Ignored if non-RGB rendering mode is selected" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation = { UE4CodeGen_Private::EPropertyClass::Float, "Saturation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, Saturation), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast = { UE4CodeGen_Private::EPropertyClass::Float, "Contrast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, Contrast), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Applied additively, 0 being neutral." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness = { UE4CodeGen_Private::EPropertyClass::Float, "Brightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, Brightness), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "None - no effect\nHeight - The cloud color will be overridden with height-based color\nPosition - The cloud color will be overridden with position-based color" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride = { UE4CodeGen_Private::EPropertyClass::Enum, "ColorOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, ColorOverride), Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "RenderMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, RenderMethod), Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "LOD Reduction Factor" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Specifies the percentage of points to remove in each LOD step.\nRequires range of 0 - 1. Higher numbers will result in faster quality degradation.\nFor example, setting it to 0.5 will generate LOD0: 100%, LOD1: 50%, LOD2: 25%, LOD3: 12.5% etc." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction = { UE4CodeGen_Private::EPropertyClass::Float, "LODReduction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, LODReduction), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Affects the number of LODs to generate\nSmaller numbers will result in longer build times for the cloud.\nSetting it too low may consume excessively large CPU time at runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize = { UE4CodeGen_Private::EPropertyClass::Float, "PreferredNodeSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, PreferredNodeSize), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1" },
		{ "DisplayName", "LOD Distribution" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Controls the transition distance between consecutive LODs.\nHigher values will result in better quality but worse performance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution = { UE4CodeGen_Private::EPropertyClass::Float, "LODDistribution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, LODDistribution), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Affects the distance at which the LOD switches to max quality, measured in UU from camera position.\nHigher values will result in better quality but may degrade performance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance = { UE4CodeGen_Private::EPropertyClass::Float, "ViewDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, ViewDistance), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Enables usage of the auto-LOD system. May be beneficial to disable for very small clouds." },
	};
#endif
	void Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_SetBit(void* Obj)
	{
		((UPointCloud*)Obj)->bEnableLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPointCloud), &Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Minimum amount of points for the node to be rendered. This can save CPU time by skipping stray, inconsequential nodes (usually noise)\nbut setting it too high may result in visible artifacts. Less dense clouds should generally have this value lowered." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumNodePointCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, MinimumNodePointCount), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Single Poly Minimum LOD" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Minimum LOD at which to switch to single triangle per sprite. Ignored if using point rendering.\nUse SinglePolyScale property to help mitigate potential gaps between triangles.\n0                       Always uses single poly sprites\n1 - MaxLOD   Switches to single triangles at given LOD\n> MAXLOD     Disabled" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD = { UE4CodeGen_Private::EPropertyClass::Int, "SinglePolySpriteMinimumLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, SinglePolySpriteMinimumLOD), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Stores the path to the original source file. Empty if dynamically created." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPointCloud, SourcePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloud_Statics::ClassParams = {
		&UPointCloud::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPointCloud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloud, 3655229556);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloud(Z_Construct_UClass_UPointCloud, &UPointCloud::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloud);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPointCloud)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
