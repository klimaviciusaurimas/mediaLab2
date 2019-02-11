// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloudStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudStatics() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudStatics_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_GetColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_GetLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_IsEnabled();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_SetColor();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_SetEnabled();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation();
// End Cross Module References
	void UPointCloudStatics::StaticRegisterNativesUPointCloudStatics()
	{
		UClass* Class = UPointCloudStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UPointCloudStatics::execGetColor },
			{ "GetLocation", &UPointCloudStatics::execGetLocation },
			{ "GetOriginalLocation", &UPointCloudStatics::execGetOriginalLocation },
			{ "IsEnabled", &UPointCloudStatics::execIsEnabled },
			{ "LoadPointCloudFromFile", &UPointCloudStatics::execLoadPointCloudFromFile },
			{ "MakeEmptyPointCloud", &UPointCloudStatics::execMakeEmptyPointCloud },
			{ "MakePointCloudPoint", &UPointCloudStatics::execMakePointCloudPoint },
			{ "SetColor", &UPointCloudStatics::execSetColor },
			{ "SetEnabled", &UPointCloudStatics::execSetEnabled },
			{ "SetOriginalLocation", &UPointCloudStatics::execSetOriginalLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics
	{
		struct PointCloudStatics_eventGetColor_Parms
		{
			FPointCloudPoint InPoint;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::NewProp_InPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "InPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventGetColor_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "GetColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(PointCloudStatics_eventGetColor_Parms), Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics
	{
		struct PointCloudStatics_eventGetLocation_Parms
		{
			FPointCloudPoint InPoint;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventGetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::NewProp_InPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "InPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventGetLocation_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Location after transformation applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "GetLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(PointCloudStatics_eventGetLocation_Parms), Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_GetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics
	{
		struct PointCloudStatics_eventGetOriginalLocation_Parms
		{
			FPointCloudPoint InPoint;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventGetOriginalLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::NewProp_InPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "InPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventGetOriginalLocation_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Location prior to transformation applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "GetOriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(PointCloudStatics_eventGetOriginalLocation_Parms), Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics
	{
		struct PointCloudStatics_eventIsEnabled_Parms
		{
			FPointCloudPoint InPoint;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloudStatics_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloudStatics_eventIsEnabled_Parms), &Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_InPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "InPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventIsEnabled_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(PointCloudStatics_eventIsEnabled_Parms), Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics
	{
		struct PointCloudStatics_eventLoadPointCloudFromFile_Parms
		{
			FString Filename;
			int32 FirstLine;
			int32 LastLine;
			FVector2D RGBRange;
			FPointCloudImportSettingsColumns Columns;
			UPointCloud* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Columns;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RGBRange;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastLine;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstLine;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventLoadPointCloudFromFile_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_Columns = { UE4CodeGen_Private::EPropertyClass::Struct, "Columns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventLoadPointCloudFromFile_Parms, Columns), Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_RGBRange = { UE4CodeGen_Private::EPropertyClass::Struct, "RGBRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventLoadPointCloudFromFile_Parms, RGBRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_LastLine = { UE4CodeGen_Private::EPropertyClass::Int, "LastLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventLoadPointCloudFromFile_Parms, LastLine), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_FirstLine = { UE4CodeGen_Private::EPropertyClass::Int, "FirstLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventLoadPointCloudFromFile_Parms, FirstLine), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventLoadPointCloudFromFile_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_Columns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_RGBRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_LastLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_FirstLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "LoadPointCloudFromFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(PointCloudStatics_eventLoadPointCloudFromFile_Parms), Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics
	{
		struct PointCloudStatics_eventMakeEmptyPointCloud_Parms
		{
			UObject* WorldContextObject;
			UPointCloud* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventMakeEmptyPointCloud_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventMakeEmptyPointCloud_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "MakeEmptyPointCloud", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(PointCloudStatics_eventMakeEmptyPointCloud_Parms), Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics
	{
		struct PointCloudStatics_eventMakePointCloudPoint_Parms
		{
			FVector Location;
			FColor Color;
			bool bEnabled;
			FPointCloudPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventMakePointCloudPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PointCloudStatics_eventMakePointCloudPoint_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloudStatics_eventMakePointCloudPoint_Parms), &Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventMakePointCloudPoint_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventMakePointCloudPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "MakePointCloudPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(PointCloudStatics_eventMakePointCloudPoint_Parms), Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics
	{
		struct PointCloudStatics_eventSetColor_Parms
		{
			FPointCloudPoint InPoint;
			FColor NewColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::NewProp_NewColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::NewProp_InPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "InPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventSetColor_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::NewProp_NewColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "SetColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(PointCloudStatics_eventSetColor_Parms), Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics
	{
		struct PointCloudStatics_eventSetEnabled_Parms
		{
			FPointCloudPoint InPoint;
			bool NewEnabled;
		};
		static void NewProp_NewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewEnabled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_NewEnabled_SetBit(void* Obj)
	{
		((PointCloudStatics_eventSetEnabled_Parms*)Obj)->NewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_NewEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "NewEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PointCloudStatics_eventSetEnabled_Parms), &Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_NewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_InPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "InPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventSetEnabled_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_NewEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "SetEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(PointCloudStatics_eventSetEnabled_Parms), Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics
	{
		struct PointCloudStatics_eventSetOriginalLocation_Parms
		{
			FPointCloudPoint InPoint;
			FVector NewOriginalLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewOriginalLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::NewProp_NewOriginalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewOriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventSetOriginalLocation_Parms, NewOriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::NewProp_InPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "InPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(PointCloudStatics_eventSetOriginalLocation_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::NewProp_NewOriginalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Location prior to transformation applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, "SetOriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(PointCloudStatics_eventSetOriginalLocation_Parms), Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointCloudStatics_NoRegister()
	{
		return UPointCloudStatics::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudStatics_GetColor, "GetColor" }, // 3158847496
		{ &Z_Construct_UFunction_UPointCloudStatics_GetLocation, "GetLocation" }, // 1798880488
		{ &Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation, "GetOriginalLocation" }, // 3346433270
		{ &Z_Construct_UFunction_UPointCloudStatics_IsEnabled, "IsEnabled" }, // 2281445670
		{ &Z_Construct_UFunction_UPointCloudStatics_LoadPointCloudFromFile, "LoadPointCloudFromFile" }, // 4907315
		{ &Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud, "MakeEmptyPointCloud" }, // 3675057290
		{ &Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint, "MakePointCloudPoint" }, // 3982425218
		{ &Z_Construct_UFunction_UPointCloudStatics_SetColor, "SetColor" }, // 3179304257
		{ &Z_Construct_UFunction_UPointCloudStatics_SetEnabled, "SetEnabled" }, // 2934438554
		{ &Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation, "SetOriginalLocation" }, // 449741451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointCloudStatics.h" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Provides convenient set of Blueprint exposed functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudStatics_Statics::ClassParams = {
		&UPointCloudStatics::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudStatics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudStatics, 2628943799);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudStatics(Z_Construct_UClass_UPointCloudStatics, &UPointCloudStatics::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
