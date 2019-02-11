#include "PointCloudStatics.h"
#include "PointCloud.h"
#include "Misc/FileHelper.h"
#include "PointCloudHelper.h"
#include "Misc/Paths.h"

UPointCloud* UPointCloudStatics::LoadPointCloudFromFile(FString Filename, int32 FirstLine, int32 LastLine, FVector2D RGBRange, FPointCloudImportSettingsColumns Columns)
{
	UPointCloudImportSettings *ImportSettings = NewObject<UPointCloudImportSettings>();
	ImportSettings->LoadFileHeader(Filename);
	ImportSettings->FileHeader.LineRange = FPointCloudImportSettingsLineRange(FirstLine, LastLine);
	ImportSettings->FileHeader.RGBRange = RGBRange;
	ImportSettings->FileHeader.SelectedColumns = { FMath::Max(-1, Columns.LocationX), FMath::Max(-1, Columns.LocationY), FMath::Max(-1, Columns.LocationZ), FMath::Max(-1, Columns.Red), FMath::Max(-1, Columns.Green), FMath::Max(-1, Columns.Blue), FMath::Max(-1, Columns.Alpha) };

	return LoadPointCloudFromFile_Full(Filename, ImportSettings, (UObject*)GetTransientPackage(), NAME_None, RF_NoFlags);
}

class UPointCloud* UPointCloudStatics::LoadPointCloudFromFile_Full(FString Filename, UPointCloudImportSettings *ImportSettings, UObject* InParent, FName InName, EObjectFlags Flags)
{
	TArray<FPointCloudPoint> Points;
	EPointCloudColorMode ColorMode = EPointCloudColorMode::None;
	
	UPointCloud *PC = NULL;

	if (FPointCloudHelper::ImportAuto(Filename, Points, ColorMode, ImportSettings))
	{
			PC = NewObject<UPointCloud>(InParent, InName, Flags);
			PC->SetSettings((UPointCloudSettings*)ImportSettings);
			PC->SetColorMode(ColorMode);
			PC->SetPointCloudData(Points);
			PC->SetNewSourcePath(Filename, false);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Parsing Failed"));
	}

	return PC;
}

FPointCloudPoint UPointCloudStatics::MakePointCloudPoint(FVector Location, FColor Color, bool bEnabled)
{
	return FPointCloudPoint(Location, Color, bEnabled);
}

UPointCloud* UPointCloudStatics::MakeEmptyPointCloud(UObject* WorldContextObject)
{
	return NewObject<UPointCloud>(WorldContextObject);
}