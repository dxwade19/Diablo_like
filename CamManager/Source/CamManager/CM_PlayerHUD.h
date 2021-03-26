#pragma once
#include "CM_UserWidget.h"
#include "Blueprint/UserWidget.h"


#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CM_PlayerHUD.generated.h"


UCLASS()
class CAMMANAGER_API ACM_PlayerHUD : public AHUD
{
	GENERATED_BODY()
	

private:
	UPROPERTY(EditAnywhere) TSubclassOf<UUserWidget> userWidgetClass;
	UPROPERTY(VisibleAnywhere) UCM_UserWidget* userWidget;

	void InitHUD();

protected:
	virtual void BeginPlay() override;

public:
	void BindAction();
};
