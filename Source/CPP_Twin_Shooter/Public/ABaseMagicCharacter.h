// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABaseMagicCharacter.generated.h"

UCLASS()
class CPP_TWIN_SHOOTER_API AABaseMagicCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABaseMagicCharacter();

protected:

	UPROPERTY(EditAnywhere)
	UChildActorComponent* Weapon;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void ShootWeapon();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
