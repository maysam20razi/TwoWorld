// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TwoWorlds/Core/Type.h" 
#include "ChangeWorldInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UChangeWorldInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TWOWORLDS_API IChangeWorldInterface
{
	GENERATED_BODY()

	
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void ChangeWorld(UWorldIndex world);
};
