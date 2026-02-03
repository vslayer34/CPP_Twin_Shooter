// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseWeapon.h"

// Sets default values
AABaseWeapon::AABaseWeapon()
{
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AABaseWeapon::Shoot()
{
	
}

// Called every frame
void AABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

