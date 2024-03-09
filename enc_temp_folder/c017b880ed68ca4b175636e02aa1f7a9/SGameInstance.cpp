// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/SGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SUnrealObjectClass.h"
#include "Examples/SFlyable.h"
#include "Examples/SPigeon.h"

USGameInstance::USGameInstance()
{
	UE_LOG(LogTemp, Log, TEXT("USGameInstance() has been called. "));

	Name = TEXT("USGameInstance Class Default Object");
}

void USGameInstance::Init()
{

    Super::Init();

    USPigeon* Pigeon1 = NewObject<USPigeon>();
    ISFlyable* Bird1 = Cast<ISFlyable>(Pigeon1);
    // 현업에서 인터페이스 개념은 대부분 이런식으로 업캐스팅 하기 위함.

    if (nullptr != Bird1)
    {
        Bird1->Fly();
    }

}

void USGameInstance::Shutdown()
{
	Super::Shutdown();


	UE_LOG(LogTemp, Log, TEXT("Shutdown() has been called. "));

	
}
