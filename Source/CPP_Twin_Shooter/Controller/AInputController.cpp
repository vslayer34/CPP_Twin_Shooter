// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/AInputController.h"
#include "AInputController.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"

AAInputController::AAInputController()
{
}

void AAInputController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (IsLocalPlayerController())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }

        if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
        {
            EnhancedInputComponent->BindAction(MovementInputAction, ETriggerEvent::Triggered, this, &AAInputController::Move);
        }
    }
}

void AAInputController::OnInputStarted()
{
}
void AAInputController::Move(const FInputActionValue &Value)
{
    FVector2D InputVector = Value.Get<FVector2D>();
    FVector MovementVector = FVector(InputVector, 0.0f);

    GetPawn()->AddMovementInput(MovementVector, Speed, false);
}