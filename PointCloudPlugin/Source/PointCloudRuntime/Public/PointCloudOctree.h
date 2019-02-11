// Copyright 2018 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PointCloudShared.h"

class UPointCloud;

struct FPointCloudOctree
{
	struct Node
	{
		TArray<uint32> IBCache;
		uint32 NumPrimitives;

	protected:
		uint32 LOD;
		FBoxSphereBounds LocalBounds;
		FBoxSphereBounds WorldBounds;

		FPointCloudOctree* Tree;
		Node* Parent;
		Node* Children[8];
		uint8 NumChildren;

		/** Stores the index in the parent's children array (or 0 if root) */
		uint8 ChildIndex;

	public:
		Node() : Parent(nullptr) {}
		Node(FVector Origin, FVector BoxExtent, const TArray<FPointCloudPoint*> *InPoints, Node* Parent, FPointCloudOctree* Tree);
		virtual ~Node();

		/** Sets visibility and LODs, and populates the Render Data */
		bool ProcessLOD(const class FSceneView* View, class FPointCloudIndexBuffer* IndexBuffers);

		void ApplyLocalToWorld(const FTransform &LocalToWorld);

	protected:
		FORCEINLINE int32 GetDepth() const { return Parent ? Parent->GetDepth() + 1 : 0; }

		void Build(FVector Origin, FVector BoxExtent, const TArray<FPointCloudPoint*> *InPoints);

		void Subdivide(TArray<FPointCloudPoint*> *InPoints);
		void Subdivide_Thread(TArray<FPointCloudPoint*> *InPoints, const FVector &Extent, const FVector &Offset);
		
		/** Returns true if the node actually contains IB data. */
		bool BuildIBCache(TArray<FPointCloudPoint*> *InPoints);
		
		FString GetName() { return Parent ? Parent->GetName().Append(".").Append(FString::FromInt(ChildIndex)) : TEXT("0"); }

		friend FPointCloudOctree;
	};

public:
	Node Root;

private:
	struct Stats
	{
		uint32 NumCells;
		uint32 PointCount;
		uint32 MinPointCount;
		uint32 MaxPointCount;

		Stats() : NumCells(0), PointCount(0), MinPointCount(0), MaxPointCount(0) {}

		FORCEINLINE FString ToString() { return FString::Printf(TEXT("Cells: %u, MinPoints: %u, MaxPoints: %u, TotalPoints: %u"), NumCells, MinPointCount, MaxPointCount, PointCount); }
	};

	TArray<Stats> Stats;

	UPointCloud *PointCloud;
		
	TArray<float> DistanceThresholds;
	TArray<double> SkipValues;

	int32 MaxLOD;
	bool bUsesSprites;
	uint32 SinglePolySpriteMinimumLOD;
	int32 MinimumNodePointCount;

	/** Used to avoid point duplication while building the cache. Stores 16 LODs. Allocated when rebuilding the tree, then released. */
	TArray<uint16> ReservedPoints;

	FCriticalSection CriticalSection;

public:
	FORCEINLINE bool HasData() { return Root.IBCache.Num() > 0; }
	FORCEINLINE int32 GetMaxLOD() { return MaxLOD; }

	void SetPointCloud(UPointCloud *InPointCloud) { PointCloud = InPointCloud; }

	bool IsPointUsed(uint32 Index, uint32 Depth);
	FORCEINLINE void SetPointUsed(uint32 Index, uint32 Depth) { ReservedPoints[Index] |= (1 << (Depth - 1)); }

	void AddStats(uint32 Depth, uint32 PointCount);

	void CalculateDistanceThresholds();

	void Rebuild();

	void PrintStats();

	void DebugDrawBounds(class FPointCloudIndexBuffer* IndexBuffers, class UWorld *World);
};