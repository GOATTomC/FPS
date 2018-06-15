// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractAble.h"
#include "DoorOpenComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_API UDoorOpenComponent : public UActorComponent, public IInteractAble
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorOpenComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Inherited via IInteractAble
	virtual void Interact(class AFPSPlayer* Player);

private:
	void OpenDoor(class AFPSPlayer* Player);
	bool bShouldRotate = false;
	bool bIsOpen = false;

	/*The rotation the door should aim for*/
	UPROPERTY(EditAnywhere, Category = "Interaction")
	float m_TargetOpenRotation;

	/*The speed the door should open*/
	UPROPERTY(EditAnywhere, Category = "Interaction")
	float m_OpenRate;

	/*the rotation the door will actually get*/
	FVector m_OpenDoorRotation;
};
