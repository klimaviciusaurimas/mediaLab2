// Copyright 2018 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PointCloudShared.generated.h"

#define BOOL2STR(v) (v ? TEXT("True") : TEXT("False"))
#define PC_LOG(Format, ...) UE_LOG(LogTemp, Warning, TEXT(Format), __VA_ARGS__)
#define PC_ERROR(Format, ...) UE_LOG(LogTemp, Error, TEXT(Format), __VA_ARGS__)

UENUM(BlueprintType)
enum class EPointCloudOffset : uint8
{
	None,
	Center,
	FirstPoint
};

UENUM(BlueprintType)
enum class EPointCloudColorMode : uint8
{
	None,
	Intensity,
	RGB
};

/** To be removed and replaced by something more optimized, as this one potentially wastes a lot of memory. #temporary internal data storage struct. */
USTRUCT(BlueprintType)
struct POINTCLOUDRUNTIME_API FPointCloudPoint
{
	GENERATED_BODY()

	FVector OriginalLocation;
	FVector Location;
	FColor Color;

	/** Enabled | 7x Unused */
	uint8 Flags;

	/** Holds the vertex index of this point */
	uint32 VertexIndex;

	FPointCloudPoint() {}
	FPointCloudPoint(FVector Location, FColor Color, bool bEnabled)
		: OriginalLocation(Location)
		, Location(Location)
		, Color(FLinearColor(Color).ToFColor(true))
		, Flags(0x00000000)
	{
		SetEnabled(bEnabled);
	}
	FPointCloudPoint(float &X, float &Y, float &Z)
		: Flags(0x00000001)
	{
		Location.X = X;
		Location.Y = Y;
		Location.Z = Z;
		Color = FColor::White;
		OriginalLocation = Location;
	}
	FPointCloudPoint(float &X, float &Y, float &Z, float &I)
		: FPointCloudPoint(X, Y, Z)
	{
		Color.R = FMath::FloorToInt(FMath::Clamp(I, 0.0f, 1.0f) * 255.999f);
	}
	FPointCloudPoint(float &X, float &Y, float &Z, float &R, float &G, float &B, float &A)
		: FPointCloudPoint(X, Y, Z)
	{
		Color = FLinearColor(R, G, B, A).ToFColor(false);
	}

	FORCEINLINE bool IsEnabled() const { return (Flags & 0x00000001) == 0x00000001; }
	FORCEINLINE void SetEnabled(bool NewEnabled) { Flags = NewEnabled ? (Flags | 0x00000001) : (Flags & 0x11111110); }

	FORCEINLINE float GridDistance(FPointCloudPoint *point) const { return (point->Location - Location).GetAbsMax(); }
	FORCEINLINE void AddColor(FLinearColor InColor) { Color = InColor.ToFColor(false); }

	FORCEINLINE FString ToString() const { return FString::Printf(TEXT("E: %s, OL: %s, L: %s, C: %s"), BOOL2STR(IsEnabled()), *OriginalLocation.ToString(), *Location.ToString(), *Color.ToString()); }
};

USTRUCT(BlueprintType)
struct POINTCLOUDRUNTIME_API FPointCloudImportSettingsLineRange
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 First;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Last;

public:
	FPointCloudImportSettingsLineRange() : First(0), Last(0) {}
	FPointCloudImportSettingsLineRange(int32 First, int32 Last) : First(First), Last(Last) {}

	FString ToString() { return FString::Printf(TEXT("(First=%d, Last=%d)"), First, Last); }
};

/** Used for importing text-based files. */
USTRUCT(BlueprintType)
struct POINTCLOUDRUNTIME_API FPointCloudFileHeader
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	bool bEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	FString Filename;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	int32 LinesToSkip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	bool bHasDescriptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	int32 EstimatedPointCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	FString Delimiter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	TArray<FString> Columns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	TArray<int32> SelectedColumns;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	FVector2D RGBRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FileHeader")
	FPointCloudImportSettingsLineRange LineRange;

public:
	FPointCloudFileHeader() : RGBRange(FVector2D::ZeroVector), bEnabled(false), LinesToSkip(0) {}
};

USTRUCT(BlueprintType)
struct POINTCLOUDRUNTIME_API FPointCloudImportSettingsColumns
{
	GENERATED_BODY()

public:
	/** Index of a column containing Location X data */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 LocationX;

	/** Index of a column containing Location Y data */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 LocationY;

	/** Index of a column containing Location Z data */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 LocationZ;

	/**
	 * Index of a column containing Red channel or Intensity data.
	 * Set to -1 if neither is available
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Red;

	/** Index of a column containing Green channel. Set to -1 if not available */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Green;

	/** Index of a column containing Blue channel. Set to -1 if not available */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Blue;

	/** Index of a column containing Alpha channel. Set to -1 if not available */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Alpha;

public:
	FPointCloudImportSettingsColumns()
	{
		LocationX = 0;
		LocationY = 1;
		LocationZ = 2;
		Red = 3;
		Green = 4;
		Blue = 5;
		Alpha = -1;
	}
};

struct FBenchmarkTimer
{
	static void Reset()
	{
		Time = FPlatformTime::Seconds();
	}
	static double Split()
	{
		double Now = FPlatformTime::Seconds();
		double Delta = Now - Time;
		Time = Now;

		return FMath::RoundToDouble(Delta * 100) * 0.01;
	}
	static void Log(FString Text)
	{
		PC_LOG("%s: %f", *Text, Split());
	}

private:
	static double Time;
};
