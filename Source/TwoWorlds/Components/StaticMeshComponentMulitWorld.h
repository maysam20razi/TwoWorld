// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TwoWorlds/Core/Type.h" // add TwoWorlds/ to Core/Type.h becuase Core is a engine folder 
#include "Components/StaticMeshComponent.h"
#include "StaticMeshComponentMulitWorld.generated.h"

/**
 * 
 */
UCLASS()
class TWOWORLDS_API UStaticMeshComponentMulitWorld : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TwoWorlds")
		TEnumAsByte<UWorldIndex> groupWorld;
};
