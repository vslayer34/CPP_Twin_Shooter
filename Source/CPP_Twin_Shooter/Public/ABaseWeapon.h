// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABaseWeapon.generated.h"

UCLASS()
class CPP_TWIN_SHOOTER_API AABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Shoot();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
