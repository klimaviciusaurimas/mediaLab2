// Copyright 2018 Michal Cieciura. All Rights Reserved.

#include "PointCloudHelper.h"
#include "PointCloudShared.h"
#include "PointCloud.h"
#include "Async/Async.h"
#include "Async/Future.h"
#include "Materials/Material.h"
#include "Materials/MaterialInterface.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "UObject/Package.h"

#if WITH_EDITOR
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialFunction.h"
#include "Materials/MaterialExpressionVertexColor.h"
#include "Materials/MaterialExpressionTextureCoordinate.h"
#include "Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Materials/MaterialExpressionFunctionOutput.h"
#include "Materials/MaterialExpressionFunctionInput.h"
#endif

#define IS_EXT(Ext) (FileExtension.Equals(TEXT(Ext), ESearchCase::IgnoreCase))

#define PC_MAXBUFFERSIZE 52428800

#define PC_STREAMTEXTFILE_OFFSET(Offset)															\
	{																								\
		uint32 ReadSize = FMath::Min(RemainingSize, (int64)PC_MAXBUFFERSIZE - Offset);				\
		DataPtr = Data + Offset;																	\
		Reader->Serialize(DataPtr, ReadSize);														\
		RemainingLoadedSize = ReadSize;																\
		RemainingSize -= ReadSize;																	\
	}

#define PC_STREAMTEXTFILE if (--RemainingLoadedSize <= 0 && RemainingSize >= 0) { PC_STREAMTEXTFILE_OFFSET(0) }
#define PC_STREAMTEXTFILE_WITHCHECK																	\
	if (--RemainingLoadedSize <= 0 && RemainingSize >= 0)											\
	{																								\
		uint32 OldBufferSize = DataPtr - (uint8*)ChunkStart;										\
																									\
		if (OldBufferSize > 0)																		\
		{																							\
			FMemory::Memcpy(Data, ChunkStart, OldBufferSize);										\
			ChunkStart = (char*)Data;																\
		}																							\
																									\
		PC_STREAMTEXTFILE_OFFSET(OldBufferSize)														\
	}

FColor LODColors[8] = { FColor(255, 255, 255), FColor(255, 0, 0), FColor(0, 255, 0), FColor(0, 0, 255), FColor(255, 255, 0), FColor(255, 0, 255), FColor(0, 255, 255), FColor(128, 0, 128) };
FColor FPointCloudHelper::GetLODColors(const uint8 LOD)
{
	return LODColors[FMath::Min(LOD, (uint8)7)];
}

bool FPointCloudHelper::ImportAsLAS(const uint8*& Buffer, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode &ColorMode, uint32 FirstIndex, uint32 LastIndex)
{
	UE_LOG(LogTemp, Error, TEXT("LAS files are not implemented yet"));
	return false;
}

bool FPointCloudHelper::ImportAsText(const FString& Filename, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode &ColorMode, uint32 FirstIndex, uint32 LastIndex, FPointCloudFileHeader PointCloudFileHeader)
{
	// Modified FFileHelper::LoadFileToString, FFileHelper::LoadFileToStringArray and String::ParseIntoArray
	// #todo Add multithreading support
	TUniquePtr<FArchive> Reader(IFileManager::Get().CreateFileReader(*Filename));
	if (Reader)
	{
		// Flags which columns should have data assigned and used
		bool IsColumnPopulated[] = { (PointCloudFileHeader.SelectedColumns[0] > -1), (PointCloudFileHeader.SelectedColumns[1] > -1), (PointCloudFileHeader.SelectedColumns[2] > -1), (PointCloudFileHeader.SelectedColumns[3] > -1), (PointCloudFileHeader.SelectedColumns[4] > -1), (PointCloudFileHeader.SelectedColumns[5] > -1), (PointCloudFileHeader.SelectedColumns[6] > -1) };
		
		// Check Data Usage
		uint8 NumExpectedLocations = IsColumnPopulated[0] + IsColumnPopulated[1] + IsColumnPopulated[2];
		uint8 NumExpectedColors = IsColumnPopulated[3] + IsColumnPopulated[4] + IsColumnPopulated[5] + IsColumnPopulated[6];
		uint8 NumExpectedColumns = NumExpectedLocations + NumExpectedColors;
		switch (NumExpectedColors)
		{
		case 1:
			ColorMode = EPointCloudColorMode::Intensity;
			break;

		case 2:
		case 3:
		case 4:
			ColorMode = EPointCloudColorMode::RGB;
			break;

		default:
			ColorMode = EPointCloudColorMode::None;
			break;
		}
		
		// If the range has not been set, set it now
		if (NumExpectedColors > 0 && FMath::IsNearlyZero(PointCloudFileHeader.RGBRange.X) && FMath::IsNearlyZero(PointCloudFileHeader.RGBRange.Y))
		{
			PointCloudFileHeader.RGBRange = ReadFileMinMaxColumns(Filename, { PointCloudFileHeader.SelectedColumns[3], PointCloudFileHeader.SelectedColumns[4], PointCloudFileHeader.SelectedColumns[5], PointCloudFileHeader.SelectedColumns[6] }, true);
		}

		float RGBMulti = 1 / (PointCloudFileHeader.RGBRange.Y - PointCloudFileHeader.RGBRange.X);

		OutPoints.Empty((LastIndex == 0 ? PointCloudFileHeader.EstimatedPointCount : LastIndex + 1) - FirstIndex);

		FirstIndex += PointCloudFileHeader.LinesToSkip;
		LastIndex += PointCloudFileHeader.LinesToSkip;

		uint8 LoadedColumns = 0;

		int32 LookupTableSize = -1;
		int32 *LookupTableCount = nullptr;
		int32 **LookupTable = nullptr;

		// Build lookup table
		{
			for (int32 i = 0; i < PointCloudFileHeader.SelectedColumns.Num(); i++)
			{
				LookupTableSize = FMath::Max(LookupTableSize, PointCloudFileHeader.SelectedColumns[i]);
			}

			LookupTableSize++;

			if (!LookupTableSize)
			{
				return false;
			}

			LookupTableCount = new int32[LookupTableSize];

			for (int32 i = 0; i < LookupTableSize; i++)
			{
				LookupTableCount[i] = 0;

				for (int32 j = 0; j < PointCloudFileHeader.SelectedColumns.Num(); j++)
				{
					if (PointCloudFileHeader.SelectedColumns[j] == i)
					{
						LookupTableCount[i]++;
					}
				}
			}

			LookupTable = new int32*[LookupTableSize];

			for (int32 i = 0; i < LookupTableSize; i++)
			{
				if (LookupTableCount[i] == 0)
				{
					LookupTable[i] = nullptr;
					continue;
				}

				LookupTable[i] = new int32[LookupTableCount[i]];

				for (int32 j = 0, k = 0; j < PointCloudFileHeader.SelectedColumns.Num(); j++)
				{
					if (PointCloudFileHeader.SelectedColumns[j] == i)
					{
						LookupTable[i][k++] = j;
					}
				}
			}
		}

		// Read and process the data
		{
			int64 TotalSize = Reader->TotalSize();
			int64 RemainingSize = TotalSize;
			int64 RemainingLoadedSize = 0;

			// Prepare pointers
			uint8 *Data = (uint8*)FMemory::Malloc(PC_MAXBUFFERSIZE);
			uint8 *DataPtr = nullptr;

			PC_STREAMTEXTFILE;
			
			float *TempFloats = new float[PointCloudFileHeader.SelectedColumns.Num()]();
			uint8 Iterator = 0;
			bool bEndOfLine = false;
			uint32 LineIndex = 0;
			while (RemainingLoadedSize > 0)
			{
				const char* ChunkStart = (char*)DataPtr;
				while (RemainingLoadedSize > 0 && *DataPtr != '\r' && *DataPtr != '\n' && *DataPtr != PointCloudFileHeader.Delimiter[0])
				{
					DataPtr++;
					PC_STREAMTEXTFILE_WITHCHECK;
				}

				// Don't parse until the first index specified
				if (LineIndex >= FirstIndex)
				{
					if (LastIndex == PointCloudFileHeader.LinesToSkip || LastIndex < FirstIndex || LineIndex <= LastIndex)
					{
						// Number of data slots associated with this column
						int32 DataAssociated = Iterator < LookupTableSize ? LookupTableCount[Iterator] : 0;

						if (DataAssociated)
						{
							float value = (float)atof(ChunkStart);

							for (int32 i = 0; i < DataAssociated; i++)
							{
								TempFloats[LookupTable[Iterator][i]] = value;
							}

							LoadedColumns += DataAssociated;
						}

						Iterator++;
					}
					else
					{
						// Stop parsing after the last line specified
						break;
					}
				}

				if (*DataPtr == PointCloudFileHeader.Delimiter[0])
				{
					DataPtr++;
					PC_STREAMTEXTFILE;
				}
				if (*DataPtr == '\r')
				{
					DataPtr++;
					PC_STREAMTEXTFILE;
					bEndOfLine = true;
				}
				if (*DataPtr == '\n')
				{
					DataPtr++;
					PC_STREAMTEXTFILE;
					bEndOfLine = true;
				}
				if (*DataPtr == 0)
				{
					bEndOfLine = true;
				}

				if (bEndOfLine)
				{
					if (LoadedColumns == NumExpectedColumns)
					{
						float X = IsColumnPopulated[0] ? TempFloats[0] : 0;
						float Y = IsColumnPopulated[1] ? TempFloats[1] : 0;
						float Z = IsColumnPopulated[2] ? TempFloats[2] : 0;

						switch (ColorMode)
						{
						case EPointCloudColorMode::Intensity:
							{
								float R = IsColumnPopulated[3] ? FMath::Clamp((TempFloats[3] - PointCloudFileHeader.RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;
								OutPoints.Emplace(X, Y, Z, R);
								break;
							}

						case EPointCloudColorMode::RGB:
							{
								float R = IsColumnPopulated[3] ? FMath::Clamp((TempFloats[3] - PointCloudFileHeader.RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;
								float G = IsColumnPopulated[4] ? FMath::Clamp((TempFloats[4] - PointCloudFileHeader.RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;
								float B = IsColumnPopulated[5] ? FMath::Clamp((TempFloats[5] - PointCloudFileHeader.RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;
								float A = IsColumnPopulated[6] ? FMath::Clamp((TempFloats[6] - PointCloudFileHeader.RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;

								OutPoints.Emplace(X, Y, Z, R, G, B, A);
								break;
							}

						default:	// None
							{
								OutPoints.Emplace(X, Y, Z);
								break;
							}
						}
					}

					LineIndex++;
					Iterator = 0;
					bEndOfLine = false;
					LoadedColumns = 0;
				}
			}

			Reader->Close();
			Reader = nullptr;
			delete[] TempFloats;
			TempFloats = NULL;
			FMemory::Free(Data);
			Data = NULL;
			DataPtr = NULL;
		}

		// Free lookup table
		if(LookupTableSize)
		{
			for (int32 i = 0; i < LookupTableSize; i++)
			{
				if (LookupTable[i])
				{
					delete[] LookupTable[i];
					LookupTable[i] = nullptr;
				}
			}

			delete[] LookupTable;
			delete[] LookupTableCount;
		}

		return true;
	}

	return false;
}

bool FPointCloudHelper::ImportAuto(const FString& Filename, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode &ColorMode, UPointCloudImportSettings *ImportSettings)
{
	bool bSuccess = false;

	FString FileExtension = FPaths::GetExtension(Filename);
	bool bIsText = IS_EXT("txt") || IS_EXT("csv") || IS_EXT("xyz");

	if (bIsText)
	{
		FBenchmarkTimer::Reset();
		bSuccess = FPointCloudHelper::ImportAsText(Filename, OutPoints, ColorMode, ImportSettings->FileHeader.LineRange.First, ImportSettings->FileHeader.LineRange.Last, ImportSettings->FileHeader);
		FBenchmarkTimer::Log("Loading");
	}
	else
	{
		TArray<uint8> Data;
		if (FFileHelper::LoadFileToArray(Data, *Filename))
		{
			Data.Add(0);
			const uint8* Buffer = &Data[0];

			if (IS_EXT("las"))
			{
				bSuccess = FPointCloudHelper::ImportAsLAS(Buffer, OutPoints, ColorMode, ImportSettings->FileHeader.LineRange.First, ImportSettings->FileHeader.LineRange.Last);
			}
		}
	}

	return bSuccess;
}

FPointCloudFileHeader FPointCloudHelper::ReadFileHeader(const FString& Filename)
{
	FPointCloudFileHeader Header;

	TUniquePtr<FArchive> Reader(IFileManager::Get().CreateFileReader(*Filename));
	if (Reader)
	{
		Header.Filename = FPaths::IsRelative(Filename) ? FPaths::ConvertRelativePathToFull(Filename) : Filename;

		int64 TotalSize = Reader->TotalSize();
		int64 Size = FMath::Min(TotalSize, (int64)204800);

		uint8* Data = (uint8*)FMemory::Malloc(Size);
		Reader->Serialize(Data, Size);
		Reader->Close();
		Reader = nullptr;
		uint8 *DataPtr = Data;

		int32 UnrecognizableLines = 0;
		bool bFetchNextLine = true;

		FString Line;
		uint8 *LineStart = NULL;

		while (bFetchNextLine)
		{
			bFetchNextLine = false;

			LineStart = DataPtr;

			while (*DataPtr != 0 && *DataPtr != '\r' && *DataPtr != '\n')
			{
				DataPtr++;
			}

			FFileHelper::BufferToString(Line, LineStart, DataPtr - LineStart);
			
			// Determine Delimiter
			if (Line.Contains(","))
			{
				Header.Delimiter = ",";
			}
			else if (Line.Contains(" "))
			{
				Header.Delimiter = " ";
			}
			else if (Line.Contains("\t"))
			{
				Header.Delimiter = "\t";
			}

			Line.ParseIntoArray(Header.Columns, *Header.Delimiter);

			if (Header.Columns.Num() < 3)
			{
				// Skip line
				UnrecognizableLines++;
				bFetchNextLine = true;

				if (*DataPtr == '\r')
				{
					DataPtr++;
				}
				if (*DataPtr == '\n')
				{
					DataPtr++;
				}
			}
		}

		LineStart = NULL;

		// Check if first line is text-based
		Header.bHasDescriptions = Header.Columns.Num() > 0 && !FCString::IsNumeric(*Header.Columns[0]);

		// Skip irrelevant lines
		Header.LinesToSkip = UnrecognizableLines + Header.bHasDescriptions;

		// Estimate number of points
		uint64 ContentSize = TotalSize;
		if (Header.LinesToSkip > 0)
		{
			Size -= Line.Len() + 1;
			ContentSize -= Line.Len() + 1;

			if (*DataPtr == '\r')
			{
				DataPtr++;
			}
			if (*DataPtr == '\n')
			{
				DataPtr++;
			}
		}

		int32 LineCount = 0;
		int32 Count = 0;
		while (*DataPtr != 0)
		{
			while (*DataPtr != 0 && *DataPtr != '\r' && *DataPtr != '\n')
			{
				Count++;
				DataPtr++;
			}

			if (Count > 0)
			{
				LineCount++;
				Count = 0;
			}

			if (*DataPtr == '\r')
			{
				DataPtr++;
			}
			if (*DataPtr == '\n')
			{
				DataPtr++;
			}
		}

		Header.EstimatedPointCount = ContentSize * LineCount / Size;

		FMemory::Free(Data);
		DataPtr = NULL;
	}

	return Header;
}

FVector2D FPointCloudHelper::ReadFileMinMaxColumns(const FString& Filename, TArray<int32> Columns, bool bBestMatch)
{
	// Check if we actually have any columns to search for
	bool bHasValidColumns = false;
	for (int32 i = 0; i < Columns.Num(); i++)
	{
		if (Columns[i] > -1)
		{
			bHasValidColumns = true;
			break;
		}
	}

	if (!bHasValidColumns)
	{
		return FVector2D::ZeroVector;
	}
	
	FPointCloudFileHeader Header = ReadFileHeader(Filename);
	FVector2D Result;

	TUniquePtr<FArchive> Reader(IFileManager::Get().CreateFileReader(*Filename));
	if (Reader)
	{
		Result = FVector2D(FLT_MAX, -FLT_MAX);
		float Tmp = 0;

		int64 TotalSize = Reader->TotalSize();
		int64 RemainingSize = TotalSize;
		int64 RemainingLoadedSize = 0;

		// Prepare pointers
		uint8 *Data = (uint8*)FMemory::Malloc(PC_MAXBUFFERSIZE);
		uint8 *DataPtr = nullptr;

		PC_STREAMTEXTFILE;
		
		uint8 Iterator = 0;
		bool bEndOfLine = false;
		int32 LineNumber = 0;
		while (RemainingLoadedSize > 0 && LineNumber < 100000)
		{
			const char* ChunkStart = (char*)DataPtr;
			while (RemainingLoadedSize > 0 && *DataPtr != '\r' && *DataPtr != '\n' && *DataPtr != Header.Delimiter[0])
			{
				DataPtr++;
				PC_STREAMTEXTFILE_WITHCHECK;
			}

			// Make sure we skip the header
			if (LineNumber >= Header.LinesToSkip && Columns.Contains(Iterator++))
			{
				Tmp = (float)atof(ChunkStart);
				Result.X = FMath::Min(Result.X, Tmp);
				Result.Y = FMath::Max(Result.Y, Tmp);
			}

			if (*DataPtr == Header.Delimiter[0])
			{
				DataPtr++;
				PC_STREAMTEXTFILE;
			}
			if (*DataPtr == '\r')
			{
				DataPtr++;
				PC_STREAMTEXTFILE;
				bEndOfLine = true;
			}
			if (*DataPtr == '\n')
			{
				DataPtr++;
				PC_STREAMTEXTFILE;
				bEndOfLine = true;
			}

			if (bEndOfLine)
			{
				Iterator = 0;
				bEndOfLine = false;
				LineNumber++;
			}
		}

		Reader->Close();
		Reader = nullptr;
		FMemory::Free(Data);
		Data = NULL;
		DataPtr = NULL;
	}

	return bBestMatch ? BestMatchColorRange(Result) : Result;
}

FVector2D FPointCloudHelper::BestMatchColorRange(FVector2D Input)
{
	if (Input.X < 0)
	{
		if (Input.Y > 32768)		{ return Input; }	// Not really sure the scale here, return original
		else if (Input.Y > 512)		{ return FVector2D(-32767, 32768); }
		else if (Input.Y > 128)		{ return FVector2D(-511, 512); }
		else						{ return FVector2D(-127, 128); }
	}
	else
	{
		if (Input.Y > 65535)		{ return Input; }	// Not really sure the scale here, return original
		else if (Input.Y > 1023)	{ return FVector2D(0, 65535); }
		else if (Input.Y > 255)		{ return FVector2D(0, 1023); }
		else if (Input.Y > 1)		{ return FVector2D(0, 255); }
		else						{ return FVector2D(0, 1); }
	}
}

void FPointCloudHelper::DensityReduction(TArray<FPointCloudPoint>& Points, const float MinDistanceBetweenPoints)
{
	if (MinDistanceBetweenPoints > 0)
	{	
		FVector CellSize = CalculateBounds(Points).GetSize() * 0.101;
		for (int32 pass = 0; pass < 2; pass++)
		{
			TArray<TArray<FPointCloudPoint*>> Sections = SplitIntoSections(Points, CellSize, 10, 2800);

			int32 NumThreads = Sections.Num();
			TFuture<bool> *Results = new TFuture<bool>[NumThreads];

			// Fire threads
			for (int32 i = 0; i < NumThreads; i++)
			{
				Results[i] = Async<bool>(EAsyncExecution::ThreadPool, [i, &Sections, &MinDistanceBetweenPoints]
				{
					TArray<FPointCloudPoint*>& Section = Sections[i];

					for (int32 j = 0; j < Section.Num(); j++)
					{
						if (!Section[j]->IsEnabled())
						{
							continue;
						}

						for (int32 k = 0; k < Section.Num(); k++)
						{
							if (j == k || !Section[k]->IsEnabled())
								continue;

							Section[k]->SetEnabled(Section[j]->GridDistance(Section[k]) > MinDistanceBetweenPoints);
						}
					}

					return true;
				});
			}

			// Sync
			for (int32 i = 0; i < NumThreads; i++)
			{
				if (Results[i].Get()) {}
			}

			delete[] Results;

			CellSize *= 0.75;
		}
	}
}

void FPointCloudHelper::NoiseReduction(TArray<FPointCloudPoint>& Points, const float MaxDistanceBetweenPoints, const int32 MinPointDensity)
{
	if (MaxDistanceBetweenPoints <= 0 || MinPointDensity <= 0)
	{
		return;
	}

	TArray<TArray<FPointCloudPoint*>> Sections = SplitIntoSections(Points, CalculateBounds(Points).GetSize() * 0.101, 1, 2800);

	int32 NumThreads = Sections.Num();
	TFuture<bool> *Results = new TFuture<bool>[NumThreads];

	// Fire threads
	for (int32 i = 0; i < NumThreads; i++)
	{
		Results[i] = Async<bool>(EAsyncExecution::ThreadPool, [i, &Sections, &MaxDistanceBetweenPoints, &MinPointDensity]
		{
			TArray<FPointCloudPoint*>& Section = Sections[i];
			
			for (int32 j = 0; j < Section.Num(); j++)
			{				
				if (!Section[j]->IsEnabled())
				{
					continue;
				}

				int32 Neighbors = 0;
				Section[j]->SetEnabled(false);

				for (int32 k = 0; k < Section.Num(); k++)
				{
					if (j == k || !Section[k]->IsEnabled())
						continue;

					if (Section[j]->GridDistance(Section[k]) <= MaxDistanceBetweenPoints)
					{
						// If minimum density reached, no need to check this point further
						if (++Neighbors >= MinPointDensity)
						{
							Section[j]->SetEnabled(true);
							break;
						}
					}
				}
			}

			return true;
		});
	}

	// Sync
	for (int32 i = 0; i < NumThreads; i++)
	{
		if (Results[i].Get()) {}
	}

	delete[] Results;
}

void FPointCloudHelper::Transform(TArray<FPointCloudPoint>& Points, const EPointCloudOffset Offset, const FVector Translation, const FVector Scale, bool bUseLowPrecision)
{
	FVector OffsetTranslation = FVector::ZeroVector;

	switch (Offset)
	{
	case EPointCloudOffset::Center:
		OffsetTranslation = CalculateBounds(Points).GetCenter();
		break;
	
	case EPointCloudOffset::FirstPoint:
		for (int32 i = 0; i < Points.Num(); i++)
		{
			if (Points[i].IsEnabled())
			{
				OffsetTranslation = Points[i].Location;
				break;
			}
		}
		break;
	}

	for (FPointCloudPoint& Point : Points)
	{
		Point.Location = (Point.Location + Translation - OffsetTranslation) * Scale;

		if (bUseLowPrecision)
		{
			Point.Location = FVector((FFloat16)Point.Location.X, (FFloat16)Point.Location.Y, (FFloat16)Point.Location.Z);
		}
	}
}

TArray<TArray<FPointCloudPoint*>> FPointCloudHelper::SplitIntoSections(TArray<FPointCloudPoint>& Points, FVector SectionSize, int32 MinSectionCount, int32 MaxSectionCount)
{
	TArray<FPointCloudPoint*> PointsPtr;
	PointsPtr.AddUninitialized(Points.Num());
	for (int32 i = 0; i < Points.Num(); i++)
	{
		PointsPtr[i] = &Points[i];
	}

	return SplitIntoSections(PointsPtr, SectionSize, MinSectionCount, MaxSectionCount);
}
TArray<TArray<FPointCloudPoint*>> FPointCloudHelper::SplitIntoSections(TArray<FPointCloudPoint*>& Points, FVector SectionSize, int32 MinSectionCount /*= 1*/, int32 MaxSectionCount /*= 0*/)
{
	TArray<TArray<FPointCloudPoint*>> Chunks;

	if (SectionSize.X <= 0 || SectionSize.Y <= 0 || SectionSize.Z <= 0)
	{
		return Chunks;
	}

	FBox Bounds = CalculateBounds(Points);
	FVector BoundSize = Bounds.GetSize();

	int32 CellsX = FMath::CeilToInt(BoundSize.X / SectionSize.X);
	int32 CellsY = FMath::CeilToInt(BoundSize.Y / SectionSize.Y);
	int32 CellsZ = FMath::CeilToInt(BoundSize.Z / SectionSize.Z);

	FVector InvertedSectionSize = FVector::OneVector / SectionSize;

	// Initialize
	Chunks.AddDefaulted(CellsX * CellsY * CellsZ);

	// Calculate strides
	int32 StrideY = CellsX;
	int32 StrideZ = CellsX * CellsY;

	int32 NumPoints = Points.Num();
	int32 *Assignments = new int32[NumPoints];
	int32 PerBatch = 5000;
	int32 NumThreads = FMath::CeilToInt(((float)Points.Num()) / PerBatch);
	TFuture<bool> *Results = new TFuture<bool>[NumThreads];

	for (int32 i = 0; i < NumPoints; i++)
	{
		Assignments[i] = -1;
	}

	for (int32 b = 0; b < NumThreads; b++)
	{
		Results[b] = Async<bool>(EAsyncExecution::ThreadPool, [b, &PerBatch, &NumPoints, &Assignments, &Points, &Bounds, &InvertedSectionSize, &CellsX, &CellsY, &CellsZ, &StrideY, &StrideZ]
		{
			for (int32 i = 0, idx = b * PerBatch; i < PerBatch && idx < NumPoints; i++, idx++)
			{
				if (!Points[idx]->IsEnabled())
				{
					continue;
				}

				FVector v = (Points[idx]->Location - Bounds.Min) * InvertedSectionSize;
				Assignments[idx] = FMath::Min((int32)v.X, CellsX - 1) + FMath::Min((int32)v.Y, CellsY - 1) * StrideY + FMath::Min((int32)v.Z, CellsZ - 1) * StrideZ;
			}
				
			return true;
		});
	}

	// Sync
	for (int32 i = 0; i < NumThreads; i++)
	{
		if (Results[i].Get()) {}
	}

	// Assign
	for (int32 i = 0; i < NumPoints; i++)
	{
		if (Assignments[i] >= 0)
		{
			Chunks[Assignments[i]].Add(Points[i]);
		}
	}

	delete[] Results;
	delete[] Assignments;
	
	// Remove Empty Sections
	MinSectionCount = FMath::Max(MinSectionCount, 1);
	for (int32 i = 0; i < Chunks.Num(); i++)
	{
		if (Chunks[i].Num() < MinSectionCount)
		{
			Chunks.RemoveAt(i--);
		}
	}

	// Further divide if needed
	if (MaxSectionCount > 0)
	{
		for (int32 i = 0; i < Chunks.Num(); i++)
		{
			if (Chunks[i].Num() > MaxSectionCount)
			{
				Chunks.Append(SplitIntoSections(Chunks[i], SectionSize * 0.5f, MinSectionCount, MaxSectionCount));
				Chunks.RemoveAt(i--);
			}
		}
	}

	return Chunks;
}

FVector FPointCloudHelper::AdjustSectionSize(TArray<FPointCloudPoint>& Points, const FVector SectionSize)
{
	FVector Out = SectionSize;

	if (Out.X <= 0 || Out.Y <= 0 || Out.Z <= 0)
	{
		FVector BoundSize = CalculateBounds(Points).GetSize();

		if (Out.X <= 0)
		{
			Out.X = FMath::Max(BoundSize.X / 30.0f, 1000.0f);
		}
		if (Out.Y <= 0)
		{
			Out.Y = FMath::Max(BoundSize.Y / 30.0f, 1000.0f);
		}
		if (Out.Z <= 0)
		{
			Out.Z = FMath::Max(BoundSize.Z / 30.0f, 1000.0f);
		}
	}

	return Out;
}

int32 FPointCloudHelper::CountEnabledPoints(const TArray<FPointCloudPoint*>& Points)
{
	int32 Count = 0;

	for (int32 i = 0; i < Points.Num(); i++)
	{
		if (Points[i]->IsEnabled())
		{
			Count++;
		}
	}

	return Count;
}
int32 FPointCloudHelper::CountEnabledPoints(const TArray<FPointCloudPoint>& Points)
{
	int32 Count = 0;

	for (int32 i = 0; i < Points.Num(); i++)
	{
		if (Points[i].IsEnabled())
		{
			Count++;
		}
	}

	return Count;
}

TArray<FPointCloudPoint*> FPointCloudHelper::GetEnabledPoints(TArray<FPointCloudPoint>& Points)
{
	TArray<FPointCloudPoint*> EnabledPoints;

	for (int32 i = 0; i < Points.Num(); i++)
	{
		if (Points[i].IsEnabled())
		{
			EnabledPoints.Add(&Points[i]);
		}
	}

	return EnabledPoints;
}

FBox FPointCloudHelper::CalculateBounds(const TArray<FPointCloudPoint*>& Points, const FTransform& Transform)
{
	FBox BoundingBox(ForceInit);
	
	for (int32 Index = 0; Index < Points.Num(); Index++)
	{
		if (Points[Index] && Points[Index]->IsEnabled())
		{
			BoundingBox += Transform.TransformPosition(Points[Index]->Location);
		}
	}

	AdjustBounds(BoundingBox);

	return BoundingBox;
}
FBox FPointCloudHelper::CalculateBounds(const TArray<FPointCloudPoint>& Points, const FTransform& Transform)
{
	FBox BoundingBox(ForceInit);

	for (int32 Index = 0; Index < Points.Num(); Index++)
	{
		if (!Points[Index].IsEnabled())
		{
			continue;
		}

		BoundingBox += Transform.TransformPosition(Points[Index].Location);
	}

	AdjustBounds(BoundingBox);

	return BoundingBox;
}
FBox FPointCloudHelper::CalculateBounds(const TArray<FPointCloudPoint*>& Points)
{
	FBox BoundingBox(ForceInit);

	for (int32 Index = 0; Index < Points.Num(); Index++)
	{
		if (Points[Index] && Points[Index]->IsEnabled())
		{
			BoundingBox += Points[Index]->Location;
		}
	}

	AdjustBounds(BoundingBox);

	return BoundingBox;
}
FBox FPointCloudHelper::CalculateBounds(const TArray<FPointCloudPoint>& Points)
{
	FBox BoundingBox(ForceInit);

	for (int32 Index = 0; Index < Points.Num(); Index++)
	{
		if (!Points[Index].IsEnabled())
		{
			continue;
		}

		BoundingBox += Points[Index].Location;
	}

	AdjustBounds(BoundingBox);

	return BoundingBox;
}

int32 FPointCloudHelper::CalculatePointSize(UPointCloud *PointCloud, bool bIncludeVB, bool bIncludeIB)
{
	int32 Size = 0;

	// HalfPrecision only really uses 3 with the 4th being reserved for color
	if (bIncludeVB)
	{
		Size += PointCloud->UsesLowPrecision() ? 3 * sizeof(FFloat16) + sizeof(uint16) : sizeof(FVector) + sizeof(FColor);

		if (PointCloud->UsesSprites())
		{
			Size *= 4;
		}
	}

	// Index buffer
	if (bIncludeIB)
	{
		Size += (PointCloud->UsesSprites() ? 6 : 1) * sizeof(uint32);
	}

	return Size;
}

FString FPointCloudHelper::GetColorModeAsString(UPointCloud *PointCloud)
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EPointCloudColorMode"), true);
	return (EnumPtr && PointCloud) ? EnumPtr->GetNameStringByIndex((uint8)PointCloud->GetColorMode()) : FString("Invalid");
}

#if WITH_EDITOR
bool FPointCloudHelper::MaterialUsesUV(UMaterialInterface *Material)
{
	return IsValid(Material) ? MaterialUsesUV(GetTopMostMaterial(Material)) : false;
}
bool FPointCloudHelper::MaterialUsesUV(UMaterial *Material)
{
	return MaterialContainsExpressionOfClass(Material, UMaterialExpressionTextureCoordinate::StaticClass());
}

UMaterial* FPointCloudHelper::GetTopMostMaterial(UMaterialInterface *Material)
{
	UMaterial *ParentMaterial = NULL;
	UMaterialInstance *MaterialInstance = Cast<UMaterialInstance>(Material);

	if (IsValid(MaterialInstance))
	{
		ParentMaterial = GetTopMostMaterial(MaterialInstance->Parent);
	}
	else
	{
		ParentMaterial = Cast<UMaterial>(Material);
	}

	return ParentMaterial;
}

bool FPointCloudHelper::MaterialContainsExpressionOfClass(UMaterial *Material, UClass* ExpressionClass)
{
	if (!IsValid(Material) || !IsValid(ExpressionClass))
	{
		return false;
	}

	for (int32 MPIdx = 0; MPIdx < MP_MAX; MPIdx++)
	{
		if (ExpressionInputContainsExpressionOfClass(Material->GetExpressionInputForProperty(EMaterialProperty(MPIdx)), ExpressionClass))
		{
			return true;
		}
	}

	return false;
}
bool FPointCloudHelper::ExpressionInputContainsExpressionOfClass(FExpressionInput *ExpressionInput, UClass* ExpressionClass)
{
	UMaterialExpression *Expression = ExpressionInput ? ExpressionInput->Expression : NULL;
	if (!Expression)
	{
		return false;
	}

	if (Expression->GetClass() == ExpressionClass)
	{
		return true;
	}

	if (Expression->IsA(UMaterialExpressionMaterialFunctionCall::StaticClass()))
	{
		UMaterialFunction *MF = Cast<UMaterialFunction>(((UMaterialExpressionMaterialFunctionCall*)Expression)->MaterialFunction);
		if (IsValid(MF))
		{
			for (UMaterialExpression *FunctionExpression : MF->FunctionExpressions)
			{
				if (FunctionExpression->IsA(UMaterialExpressionFunctionOutput::StaticClass()))
				{
					TArray<FExpressionInput*> Inputs = FunctionExpression->GetInputs();
					for (FExpressionInput* InnerInput : Inputs)
					{
						if (ExpressionInputContainsExpressionOfClass(InnerInput, ExpressionClass))
						{
							return true;
						}
					}
				}
			}
		}
	}

	TArray<FExpressionInput*> Inputs = Expression->GetInputs();
	for (FExpressionInput* InnerInput : Inputs)
	{
		if (ExpressionInputContainsExpressionOfClass(InnerInput, ExpressionClass))
		{
			return true;
		}
	}

	return false;
}

#endif

void FPointCloudHelper::AdjustBounds(FBox &Bounds)
{
	float MinValue = 0.01f;

	if (Bounds.Min.X == Bounds.Max.X)
	{
		Bounds.Min.X -= MinValue;
		Bounds.Max.X += MinValue;
	}
	if (Bounds.Min.Y == Bounds.Max.Y)
	{
		Bounds.Min.Y -= MinValue;
		Bounds.Max.Y += MinValue;
	}
	if (Bounds.Min.Z == Bounds.Max.Z)
	{
		Bounds.Min.Z -= MinValue;
		Bounds.Max.Z += MinValue;
	}
}

#undef IS_EXT