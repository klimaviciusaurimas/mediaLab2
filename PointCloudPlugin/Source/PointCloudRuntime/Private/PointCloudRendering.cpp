// Copyright 2018 Michal Cieciura. All Rights Reserved.

#include "PointCloudComponent.h"
#include "PointCloud.h"
#include "PointCloudShared.h"
#include "PointCloudOctree.h"
#include "PointCloudHelper.h"
#include "PrimitiveSceneProxy.h"
#include "MeshBatch.h"
#include "RenderResource.h"
#include "Async/Async.h"

#include "Engine.h"
#include "Runtime/Launch/Resources/Version.h"

//////////////////////////////////////////////////////////// FPointCloudVertexBuffer

class FPointCloudVertexBuffer : public FVertexBuffer
{
	uint8* Buffer;
	uint32 Offset;
	uint32 BufferSize;

public:
	FPointCloudVertexBuffer()
		: Buffer(nullptr)
		, Offset(0)
		, BufferSize(0)
	{
	}
	virtual ~FPointCloudVertexBuffer()
	{
		Free();
	}

	virtual void InitRHI() override
	{
		if (BufferSize)
		{
			FRHIResourceCreateInfo CreateInfo;
			VertexBufferRHI = RHICreateVertexBuffer(BufferSize, BUF_Dynamic, CreateInfo);
		}
	}

	void Free()
	{
		ReleaseResource();

		if (Buffer)
		{
			delete[] Buffer;
			Buffer = nullptr;
			Offset = 0;
		}
	}

	void LockBuffer(uint32 NewBufferSize)
	{
		if (NewBufferSize)
		{
			if (BufferSize < NewBufferSize || BufferSize > 1.2 * NewBufferSize)
			{
				// Add extra 10% on top of what's actually needed to allow some breathing room before rebuilding the resource again
				BufferSize = NewBufferSize * 1.1;

				ReleaseResource();
			}
			else
			{
				BufferSize = NewBufferSize;
			}
		}

		if (BufferSize)
		{
			if (!IsInitialized())
			{
				InitResource();
			}

			Buffer = (uint8*)RHILockVertexBuffer(VertexBufferRHI, 0, BufferSize, RLM_WriteOnly);
		}
	}

	void UnlockBuffer()
	{
		if (Buffer)
		{
			RHIUnlockVertexBuffer(VertexBufferRHI);
			Buffer = nullptr;
			Offset = 0;
		}
	}

	void PushData(void* Data, uint32 Size)
	{
		if (Buffer)
		{
			FMemory::Memcpy(Buffer + Offset, Data, Size);
			Offset += Size;
		}
	}
};

//////////////////////////////////////////////////////////// FPointCloudVertexFactory

class FPointCloudVertexFactory : public FVertexFactory
{
	DECLARE_VERTEX_FACTORY_TYPE(FPointCloudVertexFactory);

public:
	struct FDataType
	{
		FVertexStreamComponent PositionComponent;
		FVertexStreamComponent ColorComponent;
	};

	FPointCloudVertexFactory() : FVertexFactory(ERHIFeatureLevel::SM4) {}
	virtual ~FPointCloudVertexFactory() { ReleaseResource(); }

	virtual void Init(const FPointCloudVertexBuffer* VertexBuffer)
	{
		if (IsInRenderingThread())
		{
			Data = GetDataType(VertexBuffer);
			UpdateRHI();
		}
		else
		{
			ENQUEUE_UNIQUE_RENDER_COMMAND_TWOPARAMETER(
				InitPointCloudVertexFactory,
				FPointCloudVertexFactory*, VertexFactory, this,
				const FPointCloudVertexBuffer*, VertexBuffer, VertexBuffer,
				{
					VertexFactory->Init(VertexBuffer);
				});
		}
	}

	virtual void InitRHI() override
	{
		FVertexDeclarationElementList Elements;

		Elements.Add(AccessStreamComponent(Data.PositionComponent, 0));
		Elements.Add(AccessStreamComponent(Data.ColorComponent, 1));

		InitDeclaration(Elements);
	}

	static FVertexFactoryShaderParameters* ConstructShaderParameters(EShaderFrequency ShaderFrequency) { return NULL; }
	static bool ShouldCache(EShaderPlatform Platform, const class FMaterial* Material, const class FShaderType* ShaderType) { return IsFeatureLevelSupported(Platform, ERHIFeatureLevel::SM4); }
	static bool ShouldCompilePermutation(EShaderPlatform Platform, const class FMaterial* Material, const class FShaderType* ShaderType) { return true; }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, const FMaterial* Material, FShaderCompilerEnvironment& OutEnvironment)
	{
		OutEnvironment.SetDefine(TEXT("ENGINE_MINOR_VERSION"), ENGINE_MINOR_VERSION);
	}

	FDataType Data;

protected:
	virtual FDataType GetDataType(const FPointCloudVertexBuffer* VertexBuffer)
	{
		FDataType DataType;
		DataType.PositionComponent = FVertexStreamComponent(VertexBuffer, 0, 16, VET_Float3);
		DataType.ColorComponent = FVertexStreamComponent(VertexBuffer, 12, 16, VET_Color);
		return DataType;
	}
};

IMPLEMENT_VERTEX_FACTORY_TYPE(FPointCloudVertexFactory, "/Plugin/PointCloudPlugin/Private/PointCloudVertexFactory.ush", /* bUsedWithMaterials */ true, /* bSupportsStaticLighting */ false, /* bSupportsDynamicLighting */ true, /* bPrecisePrevWorldPos */ false, /* bSupportsPositionOnly */ true);

class FPointCloudVertexFactoryLow : public FPointCloudVertexFactory
{
	DECLARE_VERTEX_FACTORY_TYPE(FPointCloudVertexFactoryLow);
	
public:
	FPointCloudVertexFactoryLow() : FPointCloudVertexFactory() { }

	static FVertexFactoryShaderParameters* ConstructShaderParameters(EShaderFrequency ShaderFrequency) { return NULL; }
	static bool ShouldCache(EShaderPlatform Platform, const class FMaterial* Material, const class FShaderType* ShaderType) { return FPointCloudVertexFactory::ShouldCache(Platform, Material, ShaderType); }
	static bool ShouldCompilePermutation(EShaderPlatform Platform, const class FMaterial* Material, const class FShaderType* ShaderType) { return true; }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, const FMaterial* Material, FShaderCompilerEnvironment& OutEnvironment)
	{
		FPointCloudVertexFactory::ModifyCompilationEnvironment(Platform, Material, OutEnvironment);
		OutEnvironment.SetDefine(TEXT("USE_LOW_PRECISION"), TEXT("1"));
	}
	
protected:
	virtual FDataType GetDataType(const FPointCloudVertexBuffer* VertexBuffer) override
	{
		FDataType DataType;
		DataType.PositionComponent = FVertexStreamComponent(VertexBuffer, 0, 8, VET_Half4);
		DataType.ColorComponent = FVertexStreamComponent(VertexBuffer, 4, 8, VET_UShort2);
		return DataType;
	}
};

IMPLEMENT_VERTEX_FACTORY_TYPE(FPointCloudVertexFactoryLow, "/Plugin/PointCloudPlugin/Private/PointCloudVertexFactory.ush", /* bUsedWithMaterials */ true, /* bSupportsStaticLighting */ false, /* bSupportsDynamicLighting */ true, /* bPrecisePrevWorldPos */ false, /* bSupportsPositionOnly */ true);

//////////////////////////////////////////////////////////// FPointCloudIndexBuffer

class FPointCloudIndexBuffer : public FIndexBuffer
{
public:
	uint32 NumPrimitives;

	/** Manually maintaining the array allocation results in ~8% performance increase. */
	FPointCloudOctree::Node** Nodes;
	int32 Offset;

private:
	uint32 BufferSize;
	int32 Size;

public:
	FPointCloudIndexBuffer() : BufferSize(0), NumPrimitives(0), Offset(0), Size(10000)
	{
		// Start with reservation for 10000 nodes - will expand later, if needed
		Nodes = new FPointCloudOctree::Node*[Size];
	}
	~FPointCloudIndexBuffer()
	{
		ReleaseResource();
		delete[] Nodes;
	}

	virtual void InitRHI() override
	{
		if (BufferSize)
		{
			FRHIResourceCreateInfo CreateInfo;
			IndexBufferRHI = RHICreateIndexBuffer(sizeof(uint32), BufferSize * sizeof(uint32), BUF_Dynamic, CreateInfo);
		}
	}

	/** Resets the nodes assigned for building this buffer */
	void Reset()
	{		
		Offset = 0;
	}
	
	/** Resizes and updates the buffer on the GPU if necessary. */
	void UpdateData(bool bUsesSprites)
	{
		// Calculate number of primitives to render
		uint32 NewNumPrimitives = 0;
		for (int32 i = 0; i < Offset; i++)
		{
			NewNumPrimitives += Nodes[i]->NumPrimitives;
		}

		// Only process if changed
		// This is not an accurate way to determine content difference - some kind of hash would probably work better, but this is much faster and accurate enough
		if (NewNumPrimitives != NumPrimitives)
		{
			// Populate buffer only if there is any data to populate with
			if (NewNumPrimitives)
			{
				uint32 IndexCount = NewNumPrimitives * (bUsesSprites ? 3 : 1);

				// Rebuild resource if the new data size is greater than the current buffer can accommodate
				// ... or is notably (20%) smaller and we could save some VRAM
				if(BufferSize < IndexCount || BufferSize > 1.2 * IndexCount)
				{
					// Add extra 10% on top of what's actually needed to allow some breathing room before rebuilding the resource again
					BufferSize = IndexCount * 1.1;

					ReleaseResource();
					InitResource();
				}
				
				// Send new data
				uint8* Buffer = (uint8*)RHILockIndexBuffer(IndexBufferRHI, 0, IndexCount * sizeof(uint32), RLM_WriteOnly);
				for (int32 i = 0; i < Offset; i++)
				{
					uint32 Size = Nodes[i]->IBCache.Num() * sizeof(uint32);
					FMemory::Memcpy(Buffer, Nodes[i]->IBCache.GetData(), Size);
					Buffer += Size;
				}					
				RHIUnlockIndexBuffer(IndexBufferRHI);
			}

			NumPrimitives = NewNumPrimitives;
		}
	}

	void AddNode(FPointCloudOctree::Node *Node)
	{
		Nodes[Offset++] = Node;

		// Expand the array if needed
		if (Offset == Size)
		{
			Size *= 2;
			auto NewAllocation = new FPointCloudOctree::Node*[Size];
			FMemory::Memcpy(NewAllocation, Nodes, Offset * sizeof(int*));
			delete[] Nodes;
			Nodes = NewAllocation;
		}
	}
};

//////////////////////////////////////////////////////////// FPointCloudProxy

struct FPointCloudProxy
{
	TArray<FPointCloudIndexBuffer> IndexBuffers;

private:
	UPointCloud *PointCloud;
	UPointCloudComponent *Component;
	FTransform CurrentTransform;
	bool bDirty;

public:
	FPointCloudProxy() : bDirty(true) {}
	~FPointCloudProxy()
	{
		PointCloud->RenderData.RemoveProxy();
	}

	void Initialize(UPointCloudComponent* Component)
	{
		this->Component = Component;
		PointCloud = Component->GetPointCloud();
		PointCloud->RenderData.AddProxy();
		PointCloud->Octree.Root.ApplyLocalToWorld(CurrentTransform = Component->GetComponentTransform());
		IndexBuffers.AddDefaulted(NumLODs());
	}

	FORCEINLINE int32 NumLODs() const { return PointCloud->Octree.GetMaxLOD() + 1; }
	FORCEINLINE bool IsReady() const { return PointCloud && PointCloud->GetNumMaterials() > 0 && PointCloud->RenderData.HasData() && PointCloud->Octree.HasData(); }
	FORCEINLINE bool UsesSprites() const { return PointCloud->UsesSprites(); }
	FORCEINLINE UMaterialInterface* GetMaterial(int32 LOD) const { return PointCloud->GetMaterial(LOD); }
	FORCEINLINE const FPointCloudVertexFactory* GetVertexFactory() const { return PointCloud->RenderData.VertexFactory; }
	FORCEINLINE int32 GetMaxVertexIndex() const { return PointCloud->RenderData.VertexCount - 1; }
	
	/**
	 * Flags the proxy as ready for re-processing.
	 * Used to avoid multiple updates during same frame.
	 */
	FORCEINLINE void MarkDirty() { bDirty = true; }

	void UpdateTransform()
	{
		if (!CurrentTransform.Equals(Component->GetComponentTransform(), 0.0001f))
		{
			CurrentTransform = Component->GetComponentTransform();
			PointCloud->Octree.Root.ApplyLocalToWorld(CurrentTransform);
		}
	}

	void UpdateBuffers(const FSceneView* View, bool bVisualizeLOD)
	{
		// We only want to process below calls once per frame, do not repeat again for each light source!
		if (!bDirty || View->GetDynamicMeshElementsShadowCullFrustum())
		{
			return;
		}
		
		UpdateTransform();

		PointCloud->SetLODColoration(bVisualizeLOD);

		// Stop processing at this point, if the LOD is paused
		if (PointCloud->bDebugLOD)
		{
			PointCloud->Octree.DebugDrawBounds(IndexBuffers.GetData(), Component->GetWorld());
		}
		else
		{
			for (int32 LOD = 0; LOD < NumLODs(); LOD++)
			{
				IndexBuffers[LOD].Reset();
			}

			PointCloud->Octree.Root.ProcessLOD(View, IndexBuffers.GetData());

			for (int32 LOD = 0; LOD < NumLODs(); LOD++)
			{
				IndexBuffers[LOD].UpdateData(PointCloud->UsesSprites());
			}
		}

		// Mark as processed
		bDirty = false;
	}
};

//////////////////////////////////////////////////////////// Scene Proxy

class FPointCloudSceneProxy : public FPrimitiveSceneProxy
{
public:
	FPointCloudSceneProxy(UPointCloudComponent* Component) : FPrimitiveSceneProxy(Component)
	{
		PointCloudProxy.Initialize(Component);
		MaterialRelevance = Component->GetMaterialRelevance(GetScene().GetFeatureLevel());
	}

	virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override
	{
		if (PointCloudProxy.IsReady())
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_PointCloudSceneProxy_GetDynamicMeshElements);

			const bool bVisualizeLOD = AllowDebugViewmodes() && ViewFamily.EngineShowFlags.LODColoration;

			for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
			{
				if (IsShown(Views[ViewIndex]) && (VisibilityMap & (1 << ViewIndex)))
				{
					PointCloudProxy.UpdateBuffers(Views[ViewIndex], bVisualizeLOD);
					
					for (int32 LOD = 0; LOD < PointCloudProxy.NumLODs(); LOD++)
					{
						if (PointCloudProxy.IndexBuffers[LOD].NumPrimitives && PointCloudProxy.GetMaterial(LOD))
						{
							FMeshBatch& MeshBatch = Collector.AllocateMesh();

							MeshBatch.Type = PointCloudProxy.UsesSprites() ? PT_TriangleList : PT_PointList;
							MeshBatch.LODIndex = 0;
							MeshBatch.VertexFactory = PointCloudProxy.GetVertexFactory();
							MeshBatch.bWireframe = false;
							MeshBatch.MaterialRenderProxy = PointCloudProxy.GetMaterial(LOD)->GetRenderProxy(IsSelected());
							MeshBatch.ReverseCulling = IsLocalToWorldDeterminantNegative();
							MeshBatch.DepthPriorityGroup = SDPG_World;
							// We don't want to apply overrides if visualizing LODs - using custom solution
							MeshBatch.bCanApplyViewModeOverrides = !bVisualizeLOD;

							FMeshBatchElement &BatchElement = MeshBatch.Elements[0];
							BatchElement.IndexBuffer = &PointCloudProxy.IndexBuffers[LOD];
							BatchElement.NumPrimitives = PointCloudProxy.IndexBuffers[LOD].NumPrimitives;
							BatchElement.FirstIndex = 0;
							BatchElement.MinVertexIndex = 0;
							BatchElement.MaxVertexIndex = PointCloudProxy.GetMaxVertexIndex();
							BatchElement.PrimitiveUniformBuffer = CreatePrimitiveUniformBufferImmediate(GetLocalToWorld(), GetBounds(), GetLocalBounds(), true, UseEditorDepthTest());

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
							BatchElement.VisualizeElementIndex = 0;
							MeshBatch.VisualizeLODIndex = 0;
#endif

							Collector.AddMesh(ViewIndex, MeshBatch);
						}
					}
				}
			}

			PointCloudProxy.MarkDirty();
		}
	}

	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override
	{
		FPrimitiveViewRelevance Result;

		Result.bDrawRelevance = IsShown(View);
		Result.bShadowRelevance = IsShadowCast(View);
		Result.bDynamicRelevance = true;
		Result.bStaticRelevance = false;
		Result.bRenderInMainPass = ShouldRenderInMainPass();
		Result.bUsesLightingChannels = GetLightingChannelMask() != GetDefaultLightingChannelMask();
		Result.bRenderCustomDepth = ShouldRenderCustomDepth();
		MaterialRelevance.SetPrimitiveViewRelevance(Result);

		return Result;
	}

	virtual bool CanBeOccluded() const override { return !MaterialRelevance.bDisableDepthTest; }

	virtual uint32 GetMemoryFootprint(void) const override { return(sizeof(*this) + GetAllocatedSize()); }

	uint32 GetAllocatedSize(void) const { return(FPrimitiveSceneProxy::GetAllocatedSize()); }

#if ENGINE_MINOR_VERSION > 18
	virtual SIZE_T GetTypeHash() const override
	{
		static size_t UniquePointer;
		return reinterpret_cast<size_t>(&UniquePointer);
	}
#endif

protected:
	mutable FPointCloudProxy PointCloudProxy;
	FMaterialRelevance MaterialRelevance;
};

FPrimitiveSceneProxy* UPointCloudComponent::CreateSceneProxy()
{
	FPrimitiveSceneProxy* Proxy = NULL;
	if (GetMaterial(0))
	{
		Proxy = new FPointCloudSceneProxy(this);
	}
	return Proxy;
}

//////////////////////////////////////////////////////////// FPointCloudRenderData

UPointCloud::FPointCloudRenderData::FPointCloudRenderData()
{
	VertexBuffer = new FPointCloudVertexBuffer();
}

void UPointCloud::FPointCloudRenderData::BuildVertexBuffer()
{
	TArray<FPointCloudPoint*> EnabledPoints = FPointCloudHelper::GetEnabledPoints(PointCloud->Points);
	VertexCount = (uint32)EnabledPoints.Num();
	
	// Do not attempt to create the buffer if we have no data!
	if (VertexCount == 0)
	{
		return;
	}

	uint32 BufferSize = VertexCount * FPointCloudHelper::CalculatePointSize(PointCloud, true, false);

	VertexBuffer->LockBuffer(BufferSize);

	uint32 Offset = 0;
	for (uint32 idx = 0; idx < VertexCount; idx++)
	{
		for (uint8 u = 0; u < (PointCloud->UsesSprites() ? 4 : 1); u++)
		{
			if (PointCloud->UsesLowPrecision())
			{
				// Converting into 16 bit RGB
				uint16 r = ((EnabledPoints[idx]->Color.R & 0xF8) << 8) & 0xF800;
				uint16 g = ((EnabledPoints[idx]->Color.G & 0xFC) << 3) & 0x07E0;
				uint16 b = ((EnabledPoints[idx]->Color.B & 0xF8) >> 3) & 0x001F;
				uint16 rgb = r | g | b;

				FFloat16 X(EnabledPoints[idx]->Location.X), Y(EnabledPoints[idx]->Location.Y), Z(EnabledPoints[idx]->Location.Z);

				VertexBuffer->PushData(&X, sizeof(FFloat16));
				VertexBuffer->PushData(&Y, sizeof(FFloat16));
				VertexBuffer->PushData(&Z, sizeof(FFloat16));
				VertexBuffer->PushData(&rgb, sizeof(uint16));
			}
			else
			{
				VertexBuffer->PushData(&EnabledPoints[idx]->Location, sizeof(FVector));
				VertexBuffer->PushData(&EnabledPoints[idx]->Color, sizeof(FColor));
			}
		}
	}

	VertexBuffer->UnlockBuffer();
}

void UPointCloud::FPointCloudRenderData::InitResources()
{
	// Do not build render data if the app in incapable of rendering
	if (!FApp::CanEverRender())
	{
		return;
	}

	if (IsInRenderingThread())
	{
		BuildVertexBuffer();

		VertexFactory = PointCloud->UsesLowPrecision() ? (new FPointCloudVertexFactoryLow()) : (new FPointCloudVertexFactory());
		VertexFactory->Init(VertexBuffer);
		VertexFactory->InitResource();
	}
	else
	{
		ENQUEUE_UNIQUE_RENDER_COMMAND_ONEPARAMETER(
			InitPointCloudRenderData,
			UPointCloud::FPointCloudRenderData*, RenderData, this,
			{
				RenderData->InitResources();
			});
	}
}

void UPointCloud::FPointCloudRenderData::ReleaseResources(EVBReleaseMode VBReleaseMode)
{
	if (IsInRenderingThread())
	{
		if (VertexBuffer)
		{
			// Should be destroy the resources or just free them?
			switch (VBReleaseMode)
			{
			case EVBReleaseMode::None:
				break;

			case EVBReleaseMode::Free:
				VertexBuffer->Free();
				break;

			case EVBReleaseMode::Full:
				delete VertexBuffer;
				VertexBuffer = nullptr;
				break;
			}
		}

		if (VertexFactory)
		{
			VertexFactory->ReleaseResource();
			delete VertexFactory;
			VertexFactory = nullptr;
		}

		VertexCount = 0;
	}
	else
	{
		ENQUEUE_UNIQUE_RENDER_COMMAND_TWOPARAMETER(
			ReleasePointCloudRenderData,
			UPointCloud::FPointCloudRenderData*, RenderData, this,
			EVBReleaseMode, VBReleaseMode, VBReleaseMode,
			{
				RenderData->ReleaseResources(VBReleaseMode);
			});
	}
}

void UPointCloud::FPointCloudRenderData::AddProxy()
{
	if (!PointCloud->bVertexBufferPreloading && ++ProxyCount == 1)
	{
		InitResources();
	}
}

void UPointCloud::FPointCloudRenderData::RemoveProxy()
{
	if (!PointCloud->bVertexBufferPreloading && --ProxyCount == 0)
	{
		ReleaseResources(EVBReleaseMode::Free);
	}
}

bool UPointCloud::FPointCloudRenderData::HasData() const
{
	return VertexFactory && VertexBuffer && VertexFactory->IsInitialized() && VertexBuffer->IsInitialized();
}

//////////////////////////////////////////////////////////// Octree

void FPointCloudOctree::DebugDrawBounds(FPointCloudIndexBuffer* IndexBuffers, UWorld *World)
{
	if (IsInRenderingThread())
	{
		AsyncTask(ENamedThreads::GameThread, [this, IndexBuffers, World]() {
			DebugDrawBounds(IndexBuffers, World);
		});
	}
	else
	{
		for (int32 i = 0; i < MaxLOD; i++)
		{
			FColor Color = FPointCloudHelper::GetLODColors(i);

			for (int32 j = 0; j < IndexBuffers[i].Offset; j++)
			{
				FBox Bounds = IndexBuffers[i].Nodes[j]->WorldBounds.GetBox();
				DrawDebugBox(World, Bounds.GetCenter(), Bounds.GetExtent(), Color, false, -1, 0.1f, i + 1);
			}
		}
	}
}

bool FPointCloudOctree::Node::ProcessLOD(const class FSceneView* View, FPointCloudIndexBuffer* IndexBuffers)
{
	// In Frustum?
	if (!View->ViewFrustum.IntersectBox(WorldBounds.Origin, WorldBounds.BoxExtent))
	{
		return false;
	}

	// Always visible if root
	bool bVisible = !Parent;

	// ... otherwise check if within Distance
	if (!bVisible)
	{
		// Guards from crashing when changing LODDistance
		float r = WorldBounds.SphereRadius + (LOD < (uint32)Tree->DistanceThresholds.Num() ? Tree->DistanceThresholds[LOD] : 0);
		bVisible = FVector::DistSquared(WorldBounds.Origin, View->ViewMatrices.GetViewOrigin()) <= r * r;
	}

	if (bVisible)
	{
		bool bChildrenVisible = false;
		bool bChildVisible[8];

		for (uint8 i = 0; i < NumChildren; i++)
		{
			if ((bChildVisible[i] = Children[i]->ProcessLOD(View, IndexBuffers)) == true)
			{
				bChildrenVisible = true;

				// No need to continue to iterate over LOD0, as they do not have any children, and will all be marked visible if at least one is
				// In addition, all of the rendering data is actually stored in the first child (which was already iterated over at this point).
				if (LOD == 1)
				{
					break;
				}
			}
		}

		// If at least 1 child is visible, display all children
		if (bChildrenVisible)
		{
			for (uint8 i = 0; i < NumChildren; i++)
			{
				// Add only missing nodes - we don't want duplicates!
				if (!bChildVisible[i])
				{
					IndexBuffers[LOD - 1].AddNode(Children[i]);
				}
			}
		}
		// ...otherwise add the node for rendering
		else
		{
			IndexBuffers[LOD].AddNode(this);
		}
	}

	return bVisible;
}