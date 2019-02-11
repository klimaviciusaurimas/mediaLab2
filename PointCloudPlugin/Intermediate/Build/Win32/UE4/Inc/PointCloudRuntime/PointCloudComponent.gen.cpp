// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloudComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudComponent() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudComponent_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudComponent_GetPointCloud();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudComponent_SetPointCloud();
// End Cross Module References
	void UPointCloudComponent::StaticRegisterNativesUPointCloudComponent()
	{
		UClass* Class = UPointCloudComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPointCloud", &UPointCloudComponent::execGetPointCloud },
			{ "SetPointCloud", &UPointCloudComponent::execSetPointCloud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics
	{
		struct PointCloudComponent_eventGetPointCloud_Parms
		{
			UPointCloud* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloudComponent_eventGetPointCloud_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PointCloud" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, "GetPointCloud", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PointCloudComponent_eventGetPointCloud_Parms), Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics
	{
		struct PointCloudComponent_eventSetPointCloud_Parms
		{
			UPointCloud* InPointCloud;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPointCloud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_InPointCloud = { UE4CodeGen_Private::EPropertyClass::Object, "InPointCloud", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudComponent_eventSetPointCloud_Parms, InPointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_InPointCloud,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PointCloud" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, "SetPointCloud", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointCloudComponent_eventSetPointCloud_Parms), Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_SetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointCloudComponent_NoRegister()
	{
		return UPointCloudComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointCloud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointCloud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudComponent_GetPointCloud, "GetPointCloud" }, // 1139929964
		{ &Z_Construct_UFunction_UPointCloudComponent_SetPointCloud, "SetPointCloud" }, // 2183330261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object LOD Physics Collision Materials Mobility Trigger" },
		{ "IncludePath", "PointCloudComponent.h" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Component that allows you to render specified point cloud section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud = { UE4CodeGen_Private::EPropertyClass::Object, "PointCloud", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(UPointCloudComponent, PointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudComponent_Statics::ClassParams = {
		&UPointCloudComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPointCloudComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudComponent, 4164025268);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudComponent(Z_Construct_UClass_UPointCloudComponent, &UPointCloudComponent::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
