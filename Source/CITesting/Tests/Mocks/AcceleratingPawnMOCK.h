// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AcceleratingPawn.h"
#include "AcceleratingPawnMOCK.generated.h"

/**
 * 
 */
UCLASS()
class CITESTING_API AAcceleratingPawnMOCK : public AAcceleratingPawn
{
	GENERATED_BODY()

public:
	
	bool isMeshTheRootComponent();

	bool hasGravityEnabled();

	bool isAffectingNavigation();

	bool hasAStaticMeshAssigned();
};
