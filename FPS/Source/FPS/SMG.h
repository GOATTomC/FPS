// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "SMG.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FPS_API USMG : public UBaseWeapon
{
	GENERATED_BODY()
	
public:
	USMG();

	virtual void Fire() override;
	virtual void Reload() override;
	virtual void ChangeWeaponMode() override;

protected:
	virtual void BeginPlay() override;

private:
	void SetDefaultValues();
	UFUNCTION()
	void FireBullet();

	const int32 MAX_CLIP_SIZE = 30;
	const int32 MAX_OUT_OF_CLIP_AMMO = 210;
	const float BURST_BULLET_INTERVAL = 0.1f;

	FTimerHandle m_BurstTimerHandle;

	
	
};