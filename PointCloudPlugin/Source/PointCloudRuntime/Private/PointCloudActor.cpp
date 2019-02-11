// Copyright 2018 Michal Cieciura. All Rights Reserved.

#include "PointCloudActor.h"
#include "PointCloudComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "PointCloud.h"

APointCloudActor::APointCloudActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	RootComponent = PointCloudComponent = CreateDefaultSubobject<UPointCloudComponent>(TEXT("PointCloudComponent"));
}

#if WITH_EDITOR

bool APointCloudActor::GetReferencedContentObjects(TArray<UObject*>& Objects) const
{
	Super::GetReferencedContentObjects(Objects);

	if (PointCloudComponent && PointCloudComponent->GetPointCloud())
	{
		Objects.Add(PointCloudComponent->GetPointCloud());
	}
	return true;
}

#endif
