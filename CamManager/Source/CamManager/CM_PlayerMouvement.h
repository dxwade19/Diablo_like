#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CM_PlayerMouvement.generated.h"

class UFloatingPawnMovement;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CAMMANAGER_API UCM_PlayerMouvement : public UActorComponent
{
	GENERATED_BODY()

private:	

#pragma region Event

	DECLARE_EVENT(FPlayerMovEvent, FPlayerMovementEvent);
	FPlayerMovementEvent playerMouvementEvent;

#pragma endregion

#pragma region Fields

	UPROPERTY(VisibleAnywhere, Category = "Internal Value")						AActor*					m_Owner = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Internal Value")						UWorld*					m_World = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Internal Value")						UFloatingPawnMovement*	m_FloatingPawnComponent = nullptr;

	UPROPERTY(EditAnywhere, Category = "Mouvement Settings | Param")			float					m_MinDistanceWithTarget = 1;
	UPROPERTY(EditAnywhere, Category = "Mouvement Settings | Param")			float					m_RotateSpeed = 1.5f;
	UPROPERTY(VisibleAnywhere, Category = "Mouvement Settings | Feedback")		FVector					m_TargetPos;

	UPROPERTY(EditAnywhere, Category = "Debug")									bool					m_IsUseDebug = true;
	UPROPERTY(EditAnywhere, Category = "Debug")									FColor					m_DebugTargetPosColor = FColor::Green;
	UPROPERTY(EditAnywhere, Category = "Debug")									FColor					m_DebugLineColor = FColor::Magenta;

#pragma endregion

#pragma region Private_Methods

	void Init();
	void Update(const float _deltaTime);

	void Move(const float _deltaTime);
	void Rotate(const float _deltaTime);
	void DrawDebug();

#pragma endregion

protected:

#pragma region Protected_Methods

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
#pragma endregion

public:	

#pragma region Constructor

	UCM_PlayerMouvement();

#pragma endregion

#pragma region Getter/Setter

	FORCEINLINE FPlayerMovementEvent& OnPlayerMove() { return playerMouvementEvent; }
	FORCEINLINE void SetTargetPos(FVector _newTargetPos) { m_TargetPos = _newTargetPos; }
	bool IsTargetReached();
	
#pragma endregion

};
