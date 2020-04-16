// Fill out your copyright notice in the Description page of Project Settings.


#include "SplitScreenComtroller.h"

// Sets default values
ASplitScreenComtroller::ASplitScreenComtroller()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplitScreenComtroller::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASplitScreenComtroller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASplitScreenComtroller::OnToggleSplitscreen(AActor* Context, bool status)
{
	if(Context)
	{ 
			//Context->GetWorld();

	}
}


