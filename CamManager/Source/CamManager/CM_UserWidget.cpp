#include "CM_UserWidget.h"


#pragma region Init

void UCM_UserWidget::Init(ACM_Player* _player)
{
	player = _player;
}

void UCM_UserWidget::InitStatsBar()
{
	UpdateHealBarValue();
	UpdateManaBarValue();
}

void UCM_UserWidget::RegisterFunction()
{
	if (!player) return;
	player->GetPlayerStats()->OnLifeChange().AddUObject(this, &UCM_UserWidget::UpdateHealBarValue);
	player->GetPlayerStats()->OnManaChange().AddUObject(this, &UCM_UserWidget::UpdateManaBarValue);

	player->GetPlayerInventory()->OnInventoryChange().AddUObject(this, &UCM_UserWidget::UpdatePotionValue);
}

#pragma endregion


#pragma region UpdateUI_Value

void UCM_UserWidget::UpdateHealBarValue()
{
	if (!healProgressBar || !player) return;

	float _value = player->GetPlayerStats()->GetCurrentLife() / player->GetPlayerStats()->GetMaxLife();
	healProgressBar->SetPercent(_value > 1 ? 1 : _value);
}

void UCM_UserWidget::UpdateManaBarValue()
{
	if (!manaProgressBar || !player) return;

	float _value = player->GetPlayerStats()->GetCurrentMana() / player->GetPlayerStats()->GetMaxMana();
	manaProgressBar->SetPercent(_value > 1 ? 1 : _value);
}

void UCM_UserWidget::UpdatePotionValue()
{
	if (!healPotionTextBlock || !manaPotionTextBlock || !player) return;

	int _id = player->GetPlayerInventory()->GetLastIdUse();
	int _numberOfItemInSlots = player->GetPlayerInventory()->GetNumberOfItemInSlot(_id);

	switch (_id)
	{
	case 0:
		healPotionTextBlock->SetText(FText(FText::FromString(FString::FromInt(_numberOfItemInSlots))));
		break;
	case 1:
		manaPotionTextBlock->SetText(FText(FText::FromString(FString::FromInt(_numberOfItemInSlots))));
		break;
	default:
		break;
	}

}

#pragma endregion
