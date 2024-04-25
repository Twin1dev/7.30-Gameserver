#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xA90 - 0xA68)
// BlueprintGeneratedClass GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C
class UGA_Constructor_HammerHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 TC_RequiredTags;                                   // 0xA70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Constructor_HammerHitsHeal_C* GetDefaultObj();

	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


