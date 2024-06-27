#include "GameUtils.h"

#include "loguru.hpp"

#include "CustomSDK.hpp"
using namespace SDK;

namespace GameUtils
{
	namespace Siphon
	{
		void ApplySiphonEffectToEveryone()
		{
			for (int i = 0; i < GetWorld()->NetDriver->ClientConnections.Num(); i++)
			{
				auto PlayerState = static_cast<AFortPlayerState*>(UWorld::GetWorld()->NetDriver->ClientConnections[i]->PlayerController->PlayerState);

				auto AbilitySystemComponent = PlayerState->AbilitySystemComponent;

				auto Handle = AbilitySystemComponent->MakeEffectContext();
				AbilitySystemComponent->NetMulticast_InvokeGameplayCueAdded(FGameplayTag(UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameplayCue.Shield.PotionConsumed")), FPredictionKey(), Handle);
				AbilitySystemComponent->NetMulticast_InvokeGameplayCueExecuted(FGameplayTag(UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameplayCue.Shield.PotionConsumed")), FPredictionKey(), Handle);
			}
		}
	}

	namespace Snow
	{
		UObject* GetSnowSetup()
		{
			auto Class = StaticFindObject<UClass>("/Game/Athena/Environments/Landscape/Blueprints/BP_SnowSetup.BP_SnowSetup_C");

			TArray<AActor*> Actors;
			UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), Class, &Actors);

			UDataTable* Table = nullptr;

			return Actors[0];
		}

		void SetSnow()
		{
			if (auto SnowSetup = GetSnowSetup())
			{
				auto SetSnow = StaticFindObject<UFunction>("/Game/Athena/Environments/Landscape/Blueprints/BP_SnowSetup.BP_SnowSetup_C.SetSnow");

				if (SetSnow)
				{
					LOG_F(INFO, "SetSnow called");

					float ToRound = UKismetMathLibrary::GetDefaultObj()->RandomFloatInRange(0.2f, 1.0f);

					float Params = (round(ToRound * 10) / 10) + 0.05;

					LOG_F(INFO, std::format("SnowLevel: {}", Params).c_str());

					SnowSetup->ProcessEvent(SetSnow, &Params);
				}
			}
			else
			{
				LOG_F(INFO, "No SnowSetup!");
			}
		}
	}
}