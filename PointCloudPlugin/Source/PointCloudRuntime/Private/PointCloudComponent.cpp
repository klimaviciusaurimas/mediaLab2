// Copyright 2018 Michal Cieciura. All Rights Reserved.

#include "PointCloudComponent.h"
#include "Engine/CollisionProfile.h"
#include "PointCloud.h"

UPointCloudComponent::UPointCloudComponent( const FObjectInitializer& ObjectInitializer )
	: Super( ObjectInitializer )
{
	PrimaryComponentTick.bCanEverTick = false;
	Mobility = EComponentMobility::Static;
	SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
}

int32 UPointCloudComponent::GetNumMaterials() const
{
	return PointCloud ? PointCloud->GetNumMaterials() : 0;
}

UMaterialInterface* UPointCloudComponent::GetMaterial(int32 ElementIndex) const
{
	return PointCloud ? PointCloud->GetMaterial(ElementIndex) : nullptr;
}

FBoxSphereBounds UPointCloudComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	return PointCloud != NULL ? PointCloud->GetBounds().TransformBy(LocalToWorld) : USceneComponent::CalcBounds(LocalToWorld);
}

void UPointCloudComponent::AttachPointCloudListener()
{
	if (PointCloud)
	{
		PointCloud->OnPointCloudRebuilt().AddUObject(this, &UPointCloudComponent::OnPointCloudRebuilt);
	}
}

void UPointCloudComponent::RemovePointCloudListener()
{
	if (PointCloud)
	{
		PointCloud->OnPointCloudRebuilt().RemoveAll(this);
	}
}

void UPointCloudComponent::OnPointCloudRebuilt()
{
	MarkRenderStateDirty();
	UpdateBounds();
}

void UPointCloudComponent::SetPointCloud(UPointCloud *InPointCloud)
{
	if (PointCloud != InPointCloud)
	{
		RemovePointCloudListener();
		PointCloud = InPointCloud;
		AttachPointCloudListener();	
		OnPointCloudRebuilt();
	}
}

void UPointCloudComponent::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UPointCloudComponent* This = CastChecked<UPointCloudComponent>(InThis);
	Super::AddReferencedObjects(This, Collector);
}

#if WITH_EDITOR
void UPointCloudComponent::PostLoad()
{
	Super::PostLoad();
	AttachPointCloudListener();
}

void UPointCloudComponent::PreEditChange(UProperty* PropertyThatWillChange)
{
	Super::PreEditChange(PropertyThatWillChange);

	if (PropertyThatWillChange && PropertyThatWillChange->GetName().Equals("PointCloud"))
	{
		RemovePointCloudListener();
	}
}

void UPointCloudComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.MemberProperty)
	{
		if (PropertyChangedEvent.MemberProperty->GetName().Equals("PointCloud"))
		{
			AttachPointCloudListener();
		}
	}
}
#endif