#include "Abilities.h"
#include "Globals.h"
#include "HookManager.h"

#include "CustomSDK.hpp"
#include "loguru.hpp"
using namespace SDK;

namespace Abilities
{
	inline FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec);
	inline void (*SpecConstructor)(FGameplayAbilitySpec*, UGameplayAbility*, int, int, UObject*);
	inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, const FPredictionKey& InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData);

	void ApplySetToASC(UAbilitySystemComponent* ASC)
	{
		static UFortAbilitySet* GameplayAbilitySet = StaticLoadObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

		for (int i = 0; i < GameplayAbilitySet->GameplayAbilities.Num(); i++)
		{
			UGameplayAbility* Ability = reinterpret_cast<UGameplayAbility*>(GameplayAbilitySet->GameplayAbilities[i].Get()->DefaultObject);
			FGameplayAbilitySpec Spec{};
			SpecConstructor(&Spec, Ability, 1, -1, nullptr);
			GiveAbility(ASC, &Spec.Handle, Spec);
		}
	}

	void SetupOffsets()
	{
		GiveAbility = decltype(GiveAbility)(Memory::GetBaseAddress() + Offset_GiveAbility);
		SpecConstructor = decltype(SpecConstructor)(Memory::GetBaseAddress() + Offset_SpecConstructor);
		InternalTryActivateAbility = decltype(InternalTryActivateAbility)(Memory::GetBaseAddress() + Offset_InternalTryActivateAbility);
	}
	void SetupHooks()
	{
		LOG_F(INFO, "Setting up Abilities hooks.");

		auto DefaultAbilityComponent = UFortAbilitySystemComponentAthena::GetDefaultObj();
		if (DefaultAbilityComponent == nullptr)
		{
			THROW_FATAL_ERROR("Failed to get default UFortAbilitySystemComponentAthena.");
			return;
		}

		HOOK_VIRTUAL_FUNCTION(DefaultAbilityComponent->Vft, VFTIndex_InternalServerTryActivateAbility, Hooks::hAbilities::Hook_InternalServerTryActivateAbility, NULL);
	
		LOG_F(INFO, "Set up Abilities hooks.");
	}
}

namespace Hooks::hAbilities
{
	void Hook_InternalServerTryActivateAbility(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData)
	{
		FGameplayAbilitySpec* Spec = nullptr;

		for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); ++i)
		{
			auto& CurrentHandle = AbilitySystemComponent->ActivatableAbilities.Items[i].Handle;

			if (CurrentHandle.Handle == Handle.Handle)
			{
				Spec = &AbilitySystemComponent->ActivatableAbilities.Items[i];
			}
		}

		if (!Spec)
		{
			AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			return;
		}

		Spec->InputPressed = true;

		UGameplayAbility* InstancedAbility = nullptr;

		if (!Abilities::InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
		{
			AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			Spec->InputPressed = false;
			AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
		}
	}
}