#pragma once

namespace Abilities
{
	FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) = decltype(GiveAbility)(BaseAddress() + 0x68ed10);
	inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, const FPredictionKey& InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbility)(BaseAddress() + 0x6905a0);
	void (*SpecConstructor)(FGameplayAbilitySpec*, UGameplayAbility*, int, int, UObject*) = decltype(SpecConstructor)(BaseAddress() + 0x6b59e0);

	void ApplySetToASC(UAbilitySystemComponent* ASC)
	{
		static UFortAbilitySet* GameplayAbilitySet = StaticLoadObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

		for (int i = 0; i < GameplayAbilitySet->GameplayAbilities.Num(); i++)
		{
			UGameplayAbility* Ability = (UGameplayAbility*)GameplayAbilitySet->GameplayAbilities[i].Get()->DefaultObject;

			FGameplayAbilitySpec Spec{};
			SpecConstructor(&Spec, Ability, 1, -1, nullptr);

			GiveAbility(ASC, &Spec.Handle, Spec);
		}
	}



	namespace Hooks
	{
		void InternalServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData)
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

			if (!InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
			{
				AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
				Spec->InputPressed = false;
				AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
			}
		}
	}

	void HookAll()
	{
		VirtualHook(UFortAbilitySystemComponentAthena::GetDefaultObj()->Vft, 0xf4, Hooks::InternalServerTryActivateAbilityHook);
	}
}