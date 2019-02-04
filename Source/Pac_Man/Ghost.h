// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ghost.generated.h"

UCLASS()
class PAC_MAN_API AGhost : public ACharacter
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere) // It was not seen anywhere
	UStaticMeshComponent* SphereVisual;
	
	class UGhost_MovementComponent*  GhostMovementComponent;

public:
	// Sets default values for this character's properties
	AGhost();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};