// Fill out your copyright notice in the Description page of Project Settings.

#include "TaskManager.h"
#include "Tasks/Task.h"


// Sets default values
ATaskManager::ATaskManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATaskManager::BeginPlay()
{
	Super::BeginPlay();
	
	//Start the first task
	StartTask(m_Tasks[0]);
	
}

// Called every frame
void ATaskManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATaskManager::StartTask(AActor* TaskActor)
{
	ITask* currentTask = Cast<ITask>(TaskActor);

	if (currentTask != nullptr)
		currentTask->OnTaskStart();
}
