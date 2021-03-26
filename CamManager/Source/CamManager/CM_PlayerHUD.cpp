#include "CM_PlayerHUD.h"
#include "Kismet/GameplayStatics.h"



void ACM_PlayerHUD::BeginPlay()
{
	Super::BeginPlay();
	InitHUD();
}


void ACM_PlayerHUD::InitHUD()
{
	userWidget = CreateWidget<UCM_UserWidget>(GetWorld(), userWidgetClass);
	if (!userWidget) return;
	userWidget->AddToViewport();

	ACM_Player* _player = Cast<ACM_Player>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPawn());
	if (!_player) return;
	userWidget->Init(_player);

}


void ACM_PlayerHUD::BindAction()
{
	if (!userWidget) return;
	userWidget->RegisterFunction();

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, FString::Printf(TEXT("Bind")));
}
