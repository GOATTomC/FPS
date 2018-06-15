// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/AI/FireAtTarget.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "../FPS/Public/AI/BaseEnemy.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Public/TimerManager.h"



void UFireAtTarget::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	if (p_Owner == nullptr)
	{
		p_Owner = Cast<ABaseEnemy>(OwnerComp.GetAIOwner()->GetPawn());
		p_Blackboard = OwnerComp.GetBlackboardComponent();
	}

	if (m_TimerDone)
	{
		GetWorld()->GetTimerManager().SetTimer(m_FireTimerHandle, this, &UFireAtTarget::Fire, p_Owner->GetFireRate());
		m_TimerDone = false;
	}
}

void UFireAtTarget::Fire()
{
	p_Owner->FireWeapon(Cast<AActor>(p_Blackboard->GetValueAsObject(FName("Target"))));
	m_TimerDone = true;
}