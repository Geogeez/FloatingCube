// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AFloatingActor.generated.h"

UCLASS()
class FLOATINGCUBE_API AAFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAFloatingActor();
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* VisualMesh;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		float FloatSpeed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		float RotationSpeed = 20.0f;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
