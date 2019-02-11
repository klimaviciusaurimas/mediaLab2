// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/ActorFactoryPointCloud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryPointCloud() {}
// Cross Module References
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UActorFactoryPointCloud_NoRegister();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UActorFactoryPointCloud();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	void UActorFactoryPointCloud::StaticRegisterNativesUActorFactoryPointCloud()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryPointCloud_NoRegister()
	{
		return UActorFactoryPointCloud::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryPointCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryPointCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryPointCloud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryPointCloud.h" },
		{ "ModuleRelativePath", "Private/ActorFactoryPointCloud.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryPointCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryPointCloud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryPointCloud_Statics::ClassParams = {
		&UActorFactoryPointCloud::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000830ACu,
		nullptr, 0,
		nullptr, 0,
		"Editor",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryPointCloud_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryPointCloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryPointCloud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryPointCloud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryPointCloud, 1736517933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryPointCloud(Z_Construct_UClass_UActorFactoryPointCloud, &UActorFactoryPointCloud::StaticClass, TEXT("/Script/PointCloudEditor"), TEXT("UActorFactoryPointCloud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryPointCloud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
