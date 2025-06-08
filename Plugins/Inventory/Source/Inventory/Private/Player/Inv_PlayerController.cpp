// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/Inv_PlayerController.h"
#include "Inventory.h"

inline void AInv_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Log, TEXT("BeginPlay for PlayerController: %s"), *GetName());
}