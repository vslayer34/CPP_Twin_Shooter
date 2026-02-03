// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "AInputController.generated.h"

class UInputMappingContext;
class UInputAction;


UCLASS()
class CPP_TWIN_SHOOTER_API AAInputController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> MovementInputAction;

public:
	AAInputController();

protected:
	virtual void SetupInputComponent() override;

	void OnInputStarted();

	void Move(const FInputActionValue &Value);

	UPROPERTY(EditAnywhere)
	float Speed;
};
