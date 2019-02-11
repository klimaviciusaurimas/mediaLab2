// Copyright 2018 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/SWindow.h"
#include "PointCloud.h"
#include "PointCloudShared.h"

class SPointCloudOptionWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPointCloudOptionWindow)
		: _ImportUI(NULL)
		, _bUseTextImporter(false)
		, _WidgetWindow()
		, _FullPath()
		, _MaxWindowHeight(0.0f)
		, _MaxWindowWidth(0.0f)
	{}

	SLATE_ARGUMENT(UPointCloudImportSettings*, ImportUI)
	SLATE_ARGUMENT(bool, bUseTextImporter)
	SLATE_ARGUMENT(TSharedPtr<SWindow>, WidgetWindow)
	SLATE_ARGUMENT(FText, FullPath)
	SLATE_ARGUMENT(float, MaxWindowHeight)
	SLATE_ARGUMENT(float, MaxWindowWidth)
	SLATE_END_ARGS()

public:
	bool bCancelled;

private:
	bool bUseTextImporter;
	bool bImportAll;
	UPointCloudImportSettings* ImportUI;
	TSharedPtr<class IDetailsView> DetailsView;
	TWeakPtr<SWindow> WidgetWindow;
	TSharedPtr<SButton> ImportButton;
	TSharedPtr<SButton> ImportAllButton;

public:
	SPointCloudOptionWindow() : ImportUI(NULL), bCancelled(true), bImportAll(false) {}

	void Construct(const FArguments& InArgs);
	virtual bool SupportsKeyboardFocus() const override { return true; }

	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) override
	{
		if (InKeyEvent.GetKey() == EKeys::Escape)
		{
			return OnCancel();
		}

		return FReply::Unhandled();
	}

	FReply OnImport()
	{
		bCancelled = false;
		if (WidgetWindow.IsValid())
		{
			WidgetWindow.Pin()->RequestDestroyWindow();
		}
		return FReply::Handled();
	}

	FReply OnImportAll()
	{
		bImportAll = true;
		return OnImport();
	}

	FReply OnCancel()
	{
		bImportAll = false;
		if (WidgetWindow.IsValid())
		{
			WidgetWindow.Pin()->RequestDestroyWindow();
		}
		return FReply::Handled();
	}

	bool ShouldImportAll() { return bImportAll; }

private:
	bool CanImport() const { return true; };
};

class FPointCloudImportUI
{
public:
	static UPointCloudImportSettings * ShowImportDialog(bool bTextImporter, const FString& Filename);
};