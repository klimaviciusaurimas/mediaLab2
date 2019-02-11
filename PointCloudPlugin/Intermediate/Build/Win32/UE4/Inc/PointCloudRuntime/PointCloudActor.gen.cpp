// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloudActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudActor() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_APointCloudActor_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_APointCloudActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudComponent_NoRegister();
// End Cross Module References
	void APointCloudActor::StaticRegisterNativesAPointCloudActor()
	{
	}
	UClass* Z_Construct_UClass_APointCloudActor_NoRegister()
	{
		return APointCloudActor::StaticClass();
	}
	struct Z_Construct_UClass_APointCloudActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointCloudComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointCloudComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointCloudActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Materials" },
		{ "IncludePath", "PointCloudActor.h" },
		{ "ModuleRelativePath", "Public/PointCloudActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudActor_Statics::NewProp_PointCloudComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PointCloudActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Rendering,Components|PointCloud" },
		{ "ModuleRelativePath", "Public/PointCloudActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointCloudActor_Statics::NewProp_PointCloudComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PointCloudComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APointCloudActor, PointCloudComponent), Z_Construct_UClass_UPointCloudComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointCloudActor_Statics::NewProp_PointCloudComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APointCloudActor_Statics::NewProp_PointCloudComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointCloudActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudActor_Statics::NewProp_PointCloudComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointCloudActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointCloudActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APointCloudActor_Statics::ClassParams = {
		&APointCloudActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APointCloudActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APointCloudActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APointCloudActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APointCloudActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointCloudActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APointCloudActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APointCloudActor, 4015247494);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APointCloudActor(Z_Construct_UClass_APointCloudActor, &APointCloudActor::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("APointCloudActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointCloudActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
