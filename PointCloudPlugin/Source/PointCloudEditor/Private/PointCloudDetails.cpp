// Copyright 2018 Michal Cieciura. All Rights Reserved.

#include "PointCloudDetails.h"
#include "PointCloudShared.h"
#include "PointCloudHelper.h"
#include "PropertyHandle.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SComboBox.h"
#include "IDetailChildrenBuilder.h"
#include "Widgets/Input/SButton.h"
#include "IPropertyUtilities.h"
#include "PointCloud.h"

#define LOCTEXT_NAMESPACE "PointCloudDetails"

////////////////////////////////////////////////////////////
// FPointCloudFileHeaderCustomization

FPointCloudFileHeaderCustomization::FPointCloudFileHeaderCustomization()
{
	Options.Add(MakeShareable<FString>(new FString("- NONE -")));
}

FPointCloudFileHeaderCustomization::~FPointCloudFileHeaderCustomization()
{
	if (OwningPointCloud)
	{
		OwningPointCloud->OnPointCloudSourceChanged().RemoveAll(this);
	}
}

TSharedRef<IPropertyTypeCustomization> FPointCloudFileHeaderCustomization::MakeInstance()
{
	return MakeShareable(new FPointCloudFileHeaderCustomization());
}

void FPointCloudFileHeaderCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	// Attach itself to listen to OnChanged event from the owning Point Cloud
	{
		TArray<UObject*> OuterObjects;
		StructPropertyHandle->GetOuterObjects(OuterObjects);
		if(OuterObjects.Num() && OuterObjects[0])
		{
			OwningPointCloud = Cast<UPointCloud>(OuterObjects[0]);
			if (OwningPointCloud)
			{
				OwningPointCloud->OnPointCloudSourceChanged().AddSP(this, &FPointCloudFileHeaderCustomization::OnHeaderChanged);
			}
		}
	}

	PropertyUtilities = StructCustomizationUtils.GetPropertyUtilities();

	bool bEnabled = false;
	bool bHasDescriptions = false;
	int32 LinesToSkip = 0;
	int32 EstimatedPointCount = 0;

	uint32 NumChildren;
	StructPropertyHandle->GetNumChildren(NumChildren);
	for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
	{
		const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(ChildIndex).ToSharedRef();

		if (ChildHandle->GetProperty()->GetName() == TEXT("bEnabled"))
		{
			ChildHandle->GetValue(bEnabled);
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("EstimatedPointCount"))
		{
			ChildHandle->GetValue(EstimatedPointCount);
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("LinesToSkip"))
		{
			ChildHandle->GetValue(LinesToSkip);
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("bHasDescriptions"))
		{
			ChildHandle->GetValue(bHasDescriptions);
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("RGBRange"))
		{
			RGBRange = ChildHandle;
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("LineRange"))
		{
			LineRange = ChildHandle;
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("Filename"))
		{
			ChildHandle->GetValue(Filename);
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("SelectedColumns"))
		{
			TArray<void*> rawData;
			ChildHandle->AccessRawData(rawData);
			ensure(rawData.Num() == 1);
			SelectedColumns = reinterpret_cast<TArray<int32>*>(rawData[0]);
			TArray<int32> DefaultValues = { -1, -1, -1, -1, -1, -1, -1 };

			// If selected columns already contain information, we should retain it
			if (SelectedColumns->Num())
			{
				DefaultValues = *SelectedColumns;
			}
			else
			{
				*SelectedColumns = { -1, -1, -1, -1, -1, -1, -1 };

				// Attempt to assign defaults
				for (int32 i = 0; i < Options.Num() - 1; i++)
				{
					if (bHasDescriptions)
					{
						FString ColName = *Options[i + 1]; // Account for NONE

														   // Clean the name
						ColName = ColName.Replace(TEXT("\\"), TEXT("")).Replace(TEXT("/"), TEXT(""));

						if (ColName.Equals("x", ESearchCase::IgnoreCase))
						{
							DefaultValues[0] = (*SelectedColumns)[0] = i;
						}
						else if (ColName.Equals("y", ESearchCase::IgnoreCase))
						{
							DefaultValues[1] = (*SelectedColumns)[1] = i;
						}
						else if (ColName.Equals("z", ESearchCase::IgnoreCase))
						{
							DefaultValues[2] = (*SelectedColumns)[2] = i;
						}
						else if (ColName.Equals("intensity", ESearchCase::IgnoreCase))
						{
							DefaultValues[3] = (*SelectedColumns)[3] = i;
						}
						else if (ColName.Contains("red"))
						{
							DefaultValues[3] = (*SelectedColumns)[3] = i;
						}
						else if (ColName.Contains("green"))
						{
							DefaultValues[4] = (*SelectedColumns)[4] = i;
						}
						else if (ColName.Contains("blue"))
						{
							DefaultValues[5] = (*SelectedColumns)[5] = i;
						}
						else if (ColName.Contains("alpha"))
						{
							DefaultValues[6] = (*SelectedColumns)[6] = i;
						}
					}
					else
					{
						if (i < SelectedColumns->Num())
						{
							DefaultValues[i] = (*SelectedColumns)[i] = i;

							// Set alpha as None by default
							DefaultValues[6] = -1;
						}
					}
				}
			}

			ComboBoxX->SetSelectedItem(Options[DefaultValues[0] + 1]);
			ComboBoxY->SetSelectedItem(Options[DefaultValues[1] + 1]);
			ComboBoxZ->SetSelectedItem(Options[DefaultValues[2] + 1]);
			ComboBoxR->SetSelectedItem(Options[DefaultValues[3] + 1]);
			ComboBoxG->SetSelectedItem(Options[DefaultValues[4] + 1]);
			ComboBoxB->SetSelectedItem(Options[DefaultValues[5] + 1]);
			ComboBoxA->SetSelectedItem(Options[DefaultValues[6] + 1]);
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("Columns"))
		{
			const TSharedPtr<IPropertyHandleArray> Columns = ChildHandle->AsArray();

			uint32 NumColumns;
			Columns->GetNumElements(NumColumns);
			for (uint32 i = 0; i < NumColumns; i++)
			{
				FString ColName;

				// Text based column headers
				if (bHasDescriptions)
				{
					Columns->GetElement(i)->GetValue(ColName);
				}
				else
				{
					ColName = FString("Column ");
					ColName.AppendInt(i);
				}

				Options.Add(MakeShareable<FString>(new FString(*ColName)));
			}

			ComboBoxX = SNew(SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&Options)
				.OnSelectionChanged_Lambda([=](TSharedPtr<FString> NewItem, ESelectInfo::Type SelectInfo)
				{
					(*SelectedColumns)[0] = Options.IndexOfByKey(NewItem) - 1;
				})
				.OnGenerateWidget(this, &FPointCloudFileHeaderCustomization::HandleGenerateWidget)
				[
					HandleGenerateWidget("Loc X")
				];

			ComboBoxY = SNew(SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&Options)
				.OnSelectionChanged_Lambda([=](TSharedPtr<FString> NewItem, ESelectInfo::Type SelectInfo)
				{
					(*SelectedColumns)[1] = Options.IndexOfByKey(NewItem) - 1;
				})
				.OnGenerateWidget(this, &FPointCloudFileHeaderCustomization::HandleGenerateWidget)
				[
					HandleGenerateWidget("Loc Y")
				];

			ComboBoxZ = SNew(SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&Options)
				.OnSelectionChanged_Lambda([=](TSharedPtr<FString> NewItem, ESelectInfo::Type SelectInfo)
				{
					(*SelectedColumns)[2] = Options.IndexOfByKey(NewItem) - 1;
				})
				.OnGenerateWidget(this, &FPointCloudFileHeaderCustomization::HandleGenerateWidget)
				[
					HandleGenerateWidget("Loc Z")
				];

			ComboBoxR = SNew(SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&Options)
				.OnSelectionChanged_Lambda([=](TSharedPtr<FString> NewItem, ESelectInfo::Type SelectInfo)
				{
					(*SelectedColumns)[3] = Options.IndexOfByKey(NewItem) - 1;
				})
				.OnGenerateWidget(this, &FPointCloudFileHeaderCustomization::HandleGenerateWidget)
				[
					HandleGenerateWidget("Red")
				];

			ComboBoxG = SNew(SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&Options)
				.OnSelectionChanged_Lambda([=](TSharedPtr<FString> NewItem, ESelectInfo::Type SelectInfo)
				{
					(*SelectedColumns)[4] = Options.IndexOfByKey(NewItem) - 1;
				})
				.OnGenerateWidget(this, &FPointCloudFileHeaderCustomization::HandleGenerateWidget)
				[
					HandleGenerateWidget("Green")
				];

			ComboBoxB = SNew(SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&Options)
				.OnSelectionChanged_Lambda([=](TSharedPtr<FString> NewItem, ESelectInfo::Type SelectInfo)
				{
					(*SelectedColumns)[5] = Options.IndexOfByKey(NewItem) - 1;
				})
				.OnGenerateWidget(this, &FPointCloudFileHeaderCustomization::HandleGenerateWidget)
				[
					HandleGenerateWidget("Blue")
				];

			ComboBoxA = SNew(SComboBox<TSharedPtr<FString>>)
				.OptionsSource(&Options)
				.OnSelectionChanged_Lambda([=](TSharedPtr<FString> NewItem, ESelectInfo::Type SelectInfo)
				{
					(*SelectedColumns)[6] = Options.IndexOfByKey(NewItem) - 1;
				})
				.OnGenerateWidget(this, &FPointCloudFileHeaderCustomization::HandleGenerateWidget)
				[
					HandleGenerateWidget("Alpha")
				];
		}
	}

	if (bEnabled)
	{
		HeaderRow.WholeRowContent()
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(2)
				[
					SNew(STextBlock).Text(FText::Format(LOCTEXT("PointCount", "Estimated Point Count: {0}"), FText::AsNumber(EstimatedPointCount))).Font(IDetailLayoutBuilder::GetDetailFont())
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(2)
				[
					SNew(STextBlock).Text(LOCTEXT("AssignColumns", "Specify data source for each property.\nIf only one color is assigned, intensity mode will be assumed.")).Font(IDetailLayoutBuilder::GetDetailFont())
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						ComboBoxX.ToSharedRef()
					]
					+ SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						ComboBoxY.ToSharedRef()
					]
					+ SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						ComboBoxZ.ToSharedRef()
					]
					+ SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						ComboBoxR.ToSharedRef()
					]
					+ SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						ComboBoxG.ToSharedRef()
					]
					+ SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						ComboBoxB.ToSharedRef()
					]					
					+ SHorizontalBox::Slot()
					.Padding(2)
					.AutoWidth()
					[
						ComboBoxA.ToSharedRef()
					]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(2)
				[
					SNew(STextBlock).Text(LOCTEXT("RGBRange", "Specify color range to use for normalization.")).Font(IDetailLayoutBuilder::GetDetailFont())
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(2)
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.FillWidth(0.65f)
					[
						SAssignNew(RGBContainer, SBox).ToolTipText(LOCTEXT("PointCloudImportSettings_RGBRange_ToolTip", "Values outside the specified range will be clamped between 0 and 1.\nLeaving both values at 0 will auto-determine the range."))
					]
					+ SHorizontalBox::Slot()
					.FillWidth(0.125f)
					.Padding(2)
					[
						SNew(SButton)
						.HAlign(HAlign_Center)
						.Text(LOCTEXT("GetMinMaxScal", "Scan"))
						.ToolTipText(LOCTEXT("GetMinMaxScan_ToolTip", "This will scan through the file to determine the min and max values."))
						.OnClicked(this, &FPointCloudFileHeaderCustomization::OnGetRange)
					]
					+ SHorizontalBox::Slot()
					.FillWidth(0.225f)
					.Padding(2)
					[
						SNew(SButton)
						.HAlign(HAlign_Center)
						.Text(LOCTEXT("GetMinMaxMatch", "Scan & Match"))
						.ToolTipText(LOCTEXT("GetMinMaxMatch_ToolTip", "This will scan through the file to determine the min and max values. Best matching range will be chosen."))
						.OnClicked(this, &FPointCloudFileHeaderCustomization::OnGetRangeMatch)
					]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(2)
				[
					SAssignNew(LineRangeContainer, SBox)
				]
			];
	}
}

void FPointCloudFileHeaderCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	if (RGBContainer.Get() && RGBRange.Get())
	{
		RGBContainer->SetContent(StructBuilder.GenerateStructValueWidget(RGBRange.ToSharedRef()));
	}

	if (LineRangeContainer.Get() && LineRange.Get())
	{
		LineRangeContainer->SetContent(StructBuilder.GenerateStructValueWidget(LineRange.ToSharedRef()));
	}
}

TSharedRef<SWidget> FPointCloudFileHeaderCustomization::HandleGenerateWidget(TSharedPtr<FString> Item) const
{
	return HandleGenerateWidget(*Item);
}
TSharedRef<SWidget> FPointCloudFileHeaderCustomization::HandleGenerateWidget(FString Item) const
{
	TSharedPtr<STextBlock> NewItem = SNew(STextBlock).Text(FText::FromString(Item)).Font(IDetailLayoutBuilder::GetDetailFont());
	NewItem->SetMargin(FMargin(2));
	return NewItem.ToSharedRef();
}

FReply FPointCloudFileHeaderCustomization::OnGetRange()
{
	RGBRange->SetValue(FPointCloudHelper::ReadFileMinMaxColumns(Filename, { (*SelectedColumns)[3], (*SelectedColumns)[4], (*SelectedColumns)[5], (*SelectedColumns)[6] }, false));
	return FReply::Handled();
}

FReply FPointCloudFileHeaderCustomization::OnGetRangeMatch()
{
	RGBRange->SetValue(FPointCloudHelper::ReadFileMinMaxColumns(Filename, { (*SelectedColumns)[3], (*SelectedColumns)[4], (*SelectedColumns)[5], (*SelectedColumns)[6] }, true));
	return FReply::Handled();
}

void FPointCloudFileHeaderCustomization::OnHeaderChanged()
{
	PropertyUtilities->ForceRefresh();
}

////////////////////////////////////////////////////////////
// FPointCloudLineRangeCustomization

TSharedRef<IPropertyTypeCustomization> FPointCloudLineRangeCustomization::MakeInstance()
{
	return MakeShareable(new FPointCloudLineRangeCustomization());
}

void FPointCloudLineRangeCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	uint32 NumChildren;
	StructPropertyHandle->GetNumChildren(NumChildren);
	for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
	{
		const TSharedRef<IPropertyHandle> ChildHandle = StructPropertyHandle->GetChildHandle(ChildIndex).ToSharedRef();

		if (ChildHandle->GetProperty()->GetName() == TEXT("First"))
		{
			First = ChildHandle;
		}
		else if (ChildHandle->GetProperty()->GetName() == TEXT("Last"))
		{
			Last = ChildHandle;
		}
	}

	HeaderRow.ValueContent()
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(2)
			[
				SNew(STextBlock).Text(LOCTEXT("LineRange", "Specify line range to import. 0 will disable that end's limit.")).Font(IDetailLayoutBuilder::GetDetailFont())
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(2)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(2)
				.FillWidth(0.5f)
				[
					First->CreatePropertyValueWidget()
				]
				+ SHorizontalBox::Slot()
				.Padding(2)
				.FillWidth(0.5f)
				[
					Last->CreatePropertyValueWidget()
				]
			]
		];
}

#undef LOCTEXT_NAMESPACE
