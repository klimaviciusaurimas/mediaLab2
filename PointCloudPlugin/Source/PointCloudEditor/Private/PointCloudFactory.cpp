// Copyright 2018 Michal Cieciura. All Rights Reserved.

#include "PointCloudFactory.h"
#include "PointCloudHelper.h"
#include "PointCloudShared.h"
#include "PointCloudImportUI.h"
#include "PointCloudEditor.h"
#include "PointCloudStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogFactory, Log, All);

#define LOCTEXT_NAMESPACE "PointCloud"

FText FAssetTypeActions_PointCloud::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "FAssetTypeActions_PointCloud", "Point Cloud");
}

void FAssetTypeActions_PointCloud::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor /*= TSharedPtr<IToolkitHost>()*/)
{
	const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (UPointCloud* PointCloud = Cast<UPointCloud>(*ObjIt))
		{
			TSharedRef<FPointCloudEditor> NewPointCloudEditor(new FPointCloudEditor());
			NewPointCloudEditor->InitPointCloudEditor(Mode, EditWithinLevelEditor, PointCloud);
		}
	}
}

UPointCloudFactory::UPointCloudFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bImportingAll = false;
	bCreateNew = false;
	bEditorImport = true;
	Formats.Add(TEXT("xyz;Point Cloud"));
	Formats.Add(TEXT("txt;Point Cloud"));
	SupportedClass = UPointCloud::StaticClass();
}

UObject* UPointCloudFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UObject *OutObject = NULL;

	FEditorDelegates::OnAssetPreImport.Broadcast(this, InClass, InParent, InName, *FPaths::GetExtension(Filename));

	// Check if the headers differ between files. Log occurrence and prompt the user for interaction if necessary
	if (bImportingAll && ImportSettings)
	{
		FPointCloudFileHeader NewHeader = FPointCloudHelper::ReadFileHeader(Filename);

		bool bInconsistentHeader = (ImportSettings->FileHeader.LinesToSkip != NewHeader.LinesToSkip) || (ImportSettings->FileHeader.Columns.Num() != NewHeader.Columns.Num());

		if (bInconsistentHeader)
		{
			PC_LOG("Inconsistent header information between files - batch import cancelled.");
			bImportingAll = false;
		}
	}

	if (!bImportingAll)
	{
		ImportSettings = FPointCloudImportUI::ShowImportDialog(IsTextFile(Filename), Filename);
		bImportingAll = ImportSettings && ImportSettings->bImportAll;
	}

	if (ImportSettings == NULL)
	{
		bOutOperationCanceled = true;
	}
	else
	{
		Warn->BeginSlowTask(NSLOCTEXT("PointCloudFactory", "BeginImportingPointCloudTask", "Importing Point Cloud"), true);

		OutObject = UPointCloudStatics::LoadPointCloudFromFile_Full(Filename, ImportSettings, InParent, InName, Flags);
		
		Warn->EndSlowTask();
	}

	FEditorDelegates::OnAssetPostImport.Broadcast(this, OutObject);

	return OutObject;
}

bool UPointCloudFactory::DoesSupportClass(UClass* Class) { return Class == UPointCloud::StaticClass(); }

bool UPointCloudFactory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{	
	UPointCloud* PC = Cast<UPointCloud>(Obj);
	if (PC)
	{
		OutFilenames.Add(*PC->SourcePath.FilePath);
		return true;
	}
	return false;
}

void UPointCloudFactory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
	UPointCloud *PC = Cast<UPointCloud>(Obj);
	if (PC && NewReimportPaths.Num())
	{
		PC->SetNewSourcePath(NewReimportPaths[0]);
	}
}

EReimportResult::Type UPointCloudFactory::Reimport(UObject* Obj)
{
	UPointCloud *PC = Cast<UPointCloud>(Obj);	
	return PC && PC->Reimport() ? EReimportResult::Succeeded : EReimportResult::Failed;
}

#undef LOCTEXT_NAMESPACE