﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Inv_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_API AInv_PlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
