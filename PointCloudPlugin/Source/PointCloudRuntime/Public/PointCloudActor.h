// Copyright 2018 Michal Cieciura. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "PointCloudActor.generated.h"

class UPointCloud;

UCLASS(BlueprintType, hidecategories = ("Materials"))
class POINTCLOUDRUNTIME_API APointCloudActor : public AActor
{
	GENERATED_UCLASS_BODY()

private:
	UPROPERTY(Category = PointCloudActor, VisibleAnywhere, BlueprintReadOnly, meta = (ExposeFunctionCategories = "Rendering,Components|PointCloud", AllowPrivateAccess = "true"))
	class UPointCloudComponent* PointCloudComponent;

public:
#if WITH_EDITOR
	virtual bool GetReferencedContentObjects(TArray<UObject*>& Objects) const override;
#endif

public:
	/** Returns PointCloudComponent subobject **/
	class UPointCloudComponent* GetPointCloudComponent() const { return PointCloudComponent; }
};