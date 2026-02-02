// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseMagicCharacter.h"

// Sets default values
AABaseMagicCharacter::AABaseMagicCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Weapon"));
	Weapon->SetupAttachment(GetMesh());
}

// Called when the game starts or when spawned
void AABaseMagicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AABaseMagicCharacter::ShootWeapon()
{

}

// Called every frame
void AABaseMagicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABaseMagicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

