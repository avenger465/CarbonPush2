// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveableObjects.generated.h"

UCLASS()
class CARBONPUSHTWO_API AMoveableObjects : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveableObjects();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//StaticMesh Component
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* ObjectMesh;
};
