// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloudShared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudShared() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudFileHeader();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint();
// End Cross Module References
	static UEnum* EPointCloudColorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudColorMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudColorMode(EPointCloudColorMode_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudColorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode_CRC() { return 92027114U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudColorMode"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudColorMode::None", (int64)EPointCloudColorMode::None },
				{ "EPointCloudColorMode::Intensity", (int64)EPointCloudColorMode::Intensity },
				{ "EPointCloudColorMode::RGB", (int64)EPointCloudColorMode::RGB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloudShared.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPointCloudColorMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPointCloudColorMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPointCloudOffset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudOffset"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudOffset(EPointCloudOffset_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudOffset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset_CRC() { return 492426517U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudOffset"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudOffset::None", (int64)EPointCloudOffset::None },
				{ "EPointCloudOffset::Center", (int64)EPointCloudOffset::Center },
				{ "EPointCloudOffset::FirstPoint", (int64)EPointCloudOffset::FirstPoint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloudShared.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPointCloudOffset",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPointCloudOffset",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPointCloudImportSettingsColumns::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POINTCLOUDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("PointCloudImportSettingsColumns"), sizeof(FPointCloudImportSettingsColumns), Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointCloudImportSettingsColumns(FPointCloudImportSettingsColumns::StaticStruct, TEXT("/Script/PointCloudRuntime"), TEXT("PointCloudImportSettingsColumns"), false, nullptr, nullptr);
static struct FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettingsColumns
{
	FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettingsColumns()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointCloudImportSettingsColumns")),new UScriptStruct::TCppStructOps<FPointCloudImportSettingsColumns>);
	}
} ScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettingsColumns;
	struct Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Blue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Green;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Red;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudImportSettingsColumns>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "Index of a column containing Alpha channel. Set to -1 if not available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Int, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsColumns, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Blue_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "Index of a column containing Blue channel. Set to -1 if not available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Blue = { UE4CodeGen_Private::EPropertyClass::Int, "Blue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsColumns, Blue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Blue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Blue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Green_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "Index of a column containing Green channel. Set to -1 if not available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Green = { UE4CodeGen_Private::EPropertyClass::Int, "Green", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsColumns, Green), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Green_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Green_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Red_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "Index of a column containing Red channel or Intensity data.\nSet to -1 if neither is available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Red = { UE4CodeGen_Private::EPropertyClass::Int, "Red", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsColumns, Red), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Red_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Red_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationZ_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "Index of a column containing Location Z data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationZ = { UE4CodeGen_Private::EPropertyClass::Int, "LocationZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsColumns, LocationZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationY_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "Index of a column containing Location Y data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationY = { UE4CodeGen_Private::EPropertyClass::Int, "LocationY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsColumns, LocationY), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationX_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "Index of a column containing Location X data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationX = { UE4CodeGen_Private::EPropertyClass::Int, "LocationX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsColumns, LocationX), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::NewProp_LocationX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
		nullptr,
		&NewStructOps,
		"PointCloudImportSettingsColumns",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPointCloudImportSettingsColumns),
		alignof(FPointCloudImportSettingsColumns),
		Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointCloudImportSettingsColumns"), sizeof(FPointCloudImportSettingsColumns), Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsColumns_CRC() { return 1365956985U; }
class UScriptStruct* FPointCloudFileHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POINTCLOUDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPointCloudFileHeader_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudFileHeader, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("PointCloudFileHeader"), sizeof(FPointCloudFileHeader), Get_Z_Construct_UScriptStruct_FPointCloudFileHeader_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointCloudFileHeader(FPointCloudFileHeader::StaticStruct, TEXT("/Script/PointCloudRuntime"), TEXT("PointCloudFileHeader"), false, nullptr, nullptr);
static struct FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudFileHeader
{
	FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudFileHeader()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointCloudFileHeader")),new UScriptStruct::TCppStructOps<FPointCloudFileHeader>);
	}
} ScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudFileHeader;
	struct Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RGBRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RGBRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedColumns;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedColumns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Columns;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Columns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delimiter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Delimiter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedPointCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EstimatedPointCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDescriptions_MetaData[];
#endif
		static void NewProp_bHasDescriptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDescriptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinesToSkip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LinesToSkip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "Used for importing text-based files." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudFileHeader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LineRange_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LineRange = { UE4CodeGen_Private::EPropertyClass::Struct, "LineRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudFileHeader, LineRange), Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LineRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LineRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_RGBRange_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_RGBRange = { UE4CodeGen_Private::EPropertyClass::Struct, "RGBRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudFileHeader, RGBRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_RGBRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_RGBRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_SelectedColumns_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_SelectedColumns = { UE4CodeGen_Private::EPropertyClass::Array, "SelectedColumns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudFileHeader, SelectedColumns), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_SelectedColumns_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_SelectedColumns_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_SelectedColumns_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedColumns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Columns_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Columns = { UE4CodeGen_Private::EPropertyClass::Array, "Columns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudFileHeader, Columns), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Columns_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Columns_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Columns_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Columns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Delimiter_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Delimiter = { UE4CodeGen_Private::EPropertyClass::Str, "Delimiter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudFileHeader, Delimiter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Delimiter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Delimiter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_EstimatedPointCount_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_EstimatedPointCount = { UE4CodeGen_Private::EPropertyClass::Int, "EstimatedPointCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudFileHeader, EstimatedPointCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_EstimatedPointCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_EstimatedPointCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bHasDescriptions_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bHasDescriptions_SetBit(void* Obj)
	{
		((FPointCloudFileHeader*)Obj)->bHasDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bHasDescriptions = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasDescriptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPointCloudFileHeader), &Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bHasDescriptions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bHasDescriptions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bHasDescriptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LinesToSkip_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LinesToSkip = { UE4CodeGen_Private::EPropertyClass::Int, "LinesToSkip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudFileHeader, LinesToSkip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LinesToSkip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LinesToSkip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudFileHeader, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "FileHeader" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPointCloudFileHeader*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPointCloudFileHeader), &Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LineRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_RGBRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_SelectedColumns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_SelectedColumns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Columns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Columns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Delimiter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_EstimatedPointCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bHasDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_LinesToSkip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
		nullptr,
		&NewStructOps,
		"PointCloudFileHeader",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPointCloudFileHeader),
		alignof(FPointCloudFileHeader),
		Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudFileHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointCloudFileHeader_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointCloudFileHeader"), sizeof(FPointCloudFileHeader), Get_Z_Construct_UScriptStruct_FPointCloudFileHeader_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointCloudFileHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointCloudFileHeader_CRC() { return 1133635431U; }
class UScriptStruct* FPointCloudImportSettingsLineRange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POINTCLOUDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("PointCloudImportSettingsLineRange"), sizeof(FPointCloudImportSettingsLineRange), Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointCloudImportSettingsLineRange(FPointCloudImportSettingsLineRange::StaticStruct, TEXT("/Script/PointCloudRuntime"), TEXT("PointCloudImportSettingsLineRange"), false, nullptr, nullptr);
static struct FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettingsLineRange
{
	FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettingsLineRange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointCloudImportSettingsLineRange")),new UScriptStruct::TCppStructOps<FPointCloudImportSettingsLineRange>);
	}
} ScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettingsLineRange;
	struct Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Last_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Last;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_First_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_First;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudImportSettingsLineRange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_Last_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_Last = { UE4CodeGen_Private::EPropertyClass::Int, "Last", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsLineRange, Last), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_Last_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_Last_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_First_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_First = { UE4CodeGen_Private::EPropertyClass::Int, "First", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPointCloudImportSettingsLineRange, First), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_First_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_First_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_Last,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::NewProp_First,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
		nullptr,
		&NewStructOps,
		"PointCloudImportSettingsLineRange",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPointCloudImportSettingsLineRange),
		alignof(FPointCloudImportSettingsLineRange),
		Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointCloudImportSettingsLineRange"), sizeof(FPointCloudImportSettingsLineRange), Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettingsLineRange_CRC() { return 3572961068U; }
class UScriptStruct* FPointCloudPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POINTCLOUDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPointCloudPoint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudPoint, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("PointCloudPoint"), sizeof(FPointCloudPoint), Get_Z_Construct_UScriptStruct_FPointCloudPoint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointCloudPoint(FPointCloudPoint::StaticStruct, TEXT("/Script/PointCloudRuntime"), TEXT("PointCloudPoint"), false, nullptr, nullptr);
static struct FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudPoint
{
	FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointCloudPoint")),new UScriptStruct::TCppStructOps<FPointCloudPoint>);
	}
} ScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudPoint;
	struct Z_Construct_UScriptStruct_FPointCloudPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "To be removed and replaced by something more optimized, as this one potentially wastes a lot of memory. #temporary internal data storage struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudPoint>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
		nullptr,
		&NewStructOps,
		"PointCloudPoint",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPointCloudPoint),
		alignof(FPointCloudPoint),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointCloudPoint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointCloudPoint"), sizeof(FPointCloudPoint), Get_Z_Construct_UScriptStruct_FPointCloudPoint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointCloudPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointCloudPoint_CRC() { return 3740395119U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
