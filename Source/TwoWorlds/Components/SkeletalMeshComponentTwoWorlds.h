// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TwoWorlds/Core/Type.h"
#include "Components/SkeletalMeshComponent.h"
#include "SkeletalMeshComponentTwoWorlds.generated.h"

/**
 * 
 */
UCLASS()
class TWOWORLDS_API USkeletalMeshComponentTwoWorlds : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	/** to controll worlds and send notifiction for example visible skalatal mesh or any command */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TwoWorlds")
		TEnumAsByte<UWorldIndex> groupWorld;
};
