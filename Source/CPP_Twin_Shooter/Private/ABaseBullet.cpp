// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseBullet.h"

// Sets default values
AABaseBullet::AABaseBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

void Shoot()
{
	
}

// Called every frame
void AABaseBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

