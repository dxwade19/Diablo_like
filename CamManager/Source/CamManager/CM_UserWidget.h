#pragma once
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "CM_Player.h"

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CM_UserWidget.generated.h"


UCLASS()
class CAMMANAGER_API UCM_UserWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:

#pragma region Fields

	UPROPERTY(VisibleAnywhere) ACM_Player* player;
	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true)) UProgressBar* healProgressBar;
	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true)) UProgressBar* manaProgressBar;
	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true)) UTextBlock* healPotionTextBlock;
	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true)) UTextBlock* manaPotionTextBlock;

#pragma endregion


public:

#pragma region Init/BindFunction

	void Init(ACM_Player* _player);
	void RegisterFunction();
	UFUNCTION(BlueprintCallable) void InitStatsBar();

#pragma endregion


#pragma region Setter

	//Setter
	UFUNCTION(BlueprintCallable) void SetHealProgressBar(UProgressBar* _newBar) { healProgressBar = _newBar; }
	UFUNCTION(BlueprintCallable) void SetManaProgressBar(UProgressBar* _newBar) { manaProgressBar = _newBar; }
	UFUNCTION(BlueprintCallable) void SetHealPotionText(UTextBlock* _newText) { healPotionTextBlock = _newText; }
	UFUNCTION(BlueprintCallable) void SetManaPotionText(UTextBlock* _newText) { manaPotionTextBlock = _newText; }

#pragma endregion

	
#pragma region Update

	UFUNCTION() void UpdateHealBarValue();
	UFUNCTION() void UpdateManaBarValue();
	UFUNCTION() void UpdatePotionValue();

#pragma endregion

};
