
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacter.generated.h"

UCLASS()
class AURA_API AAuraCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,Category = "COMBAT")
	TObjectPtr<USkeletalMeshComponent>Weapon;

};
