// Copyright 2018 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IPropertyTypeCustomization.h"
#include "Widgets/Input/SComboBox.h"

class FPointCloudFileHeaderCustomization : public IPropertyTypeCustomization
{
public:
	FPointCloudFileHeaderCustomization();
	~FPointCloudFileHeaderCustomization();

	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	/** IPropertyTypeCustomization interface */
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

private:
	TArray<TSharedPtr<FString>> Options;
	TArray<int32> *SelectedColumns;
	FString Filename;
	UPointCloud *OwningPointCloud;

	TSharedPtr<SComboBox<TSharedPtr<FString>>> ComboBoxX;
	TSharedPtr<SComboBox<TSharedPtr<FString>>> ComboBoxY;
	TSharedPtr<SComboBox<TSharedPtr<FString>>> ComboBoxZ;
	TSharedPtr<SComboBox<TSharedPtr<FString>>> ComboBoxR;
	TSharedPtr<SComboBox<TSharedPtr<FString>>> ComboBoxG;
	TSharedPtr<SComboBox<TSharedPtr<FString>>> ComboBoxB;
	TSharedPtr<SComboBox<TSharedPtr<FString>>> ComboBoxA;
	
	TSharedPtr<SBox> RGBContainer;
	TSharedPtr<SBox> LineRangeContainer;
	TSharedPtr<IPropertyHandle> RGBRange;
	TSharedPtr<IPropertyHandle> LineRange;

	TSharedPtr<IPropertyUtilities> PropertyUtilities;

private:
	TSharedRef<SWidget> HandleGenerateWidget(TSharedPtr<FString> Item) const;
	TSharedRef<SWidget> HandleGenerateWidget(FString Item) const;
	FReply OnGetRange();
	FReply OnGetRangeMatch();

	void OnHeaderChanged();
};

class FPointCloudLineRangeCustomization : public IPropertyTypeCustomization
{
public:
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	/** IPropertyTypeCustomization interface */
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override {}

private:
	TSharedPtr<IPropertyHandle> First;
	TSharedPtr<IPropertyHandle> Last;
};