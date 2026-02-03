// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ABaseMagicCharacter.h"
#include "APlayerCharacter.generated.h"

/**
 * 
 */

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class CPP_TWIN_SHOOTER_API AAPlayerCharacter : public AABaseMagicCharacter
{
	GENERATED_BODY()

public:
	AAPlayerCharacter();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess="true"))
	TObjectPtr<UCameraComponent> TopDownCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAcess="true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

public:

	/** Returns the camera component **/
	FORCEINLINE class UCameraComponent* GetTopDownCamera() const { return TopDownCamera; }

	/** Returns the Camera Boom component **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};