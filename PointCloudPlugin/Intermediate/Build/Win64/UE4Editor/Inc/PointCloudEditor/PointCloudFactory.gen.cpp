// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/PointCloudFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudFactory() {}
// Cross Module References
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudFactory_NoRegister();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudImportSettings_NoRegister();
// End Cross Module References
	void UPointCloudFactory::StaticRegisterNativesUPointCloudFactory()
	{
	}
	UClass* Z_Construct_UClass_UPointCloudFactory_NoRegister()
	{
		return UPointCloudFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointCloudFactory.h" },
		{ "ModuleRelativePath", "Private/PointCloudFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudFactory_Statics::NewProp_ImportSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/PointCloudFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloudFactory_Statics::NewProp_ImportSettings = { UE4CodeGen_Private::EPropertyClass::Object, "ImportSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPointCloudFactory, ImportSettings), Z_Construct_UClass_UPointCloudImportSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloudFactory_Statics::NewProp_ImportSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudFactory_Statics::NewProp_ImportSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudFactory_Statics::NewProp_ImportSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudFactory_Statics::ClassParams = {
		&UPointCloudFactory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPointCloudFactory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPointCloudFactory_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudFactory, 738392216);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudFactory(Z_Construct_UClass_UPointCloudFactory, &UPointCloudFactory::StaticClass, TEXT("/Script/PointCloudEditor"), TEXT("UPointCloudFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
