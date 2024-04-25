#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xB18 - 0xA70)
// BlueprintGeneratedClass GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C
class UGA_Perk_H_FrozenCastle_FreezeOnHit_C : public UGAT_GenericTriggeredAbility_Perk_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_Freeze;                                         // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_FrozenCastle_Cooldown_Tag;                      // 0xA80(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          TC_Fire_NPC;                                       // 0xAA0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_Lightning_NPC;                                  // 0xAA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FreezeDurationModifier;                            // 0xAB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FreezeVulnerabilityModifier;                       // 0xAB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        FreezeDurationDefault;                             // 0xAB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FreezeVulnerabilityDefault;                        // 0xAD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_Melee_Tag;                                      // 0xAF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Perk_H_FrozenCastle_FreezeOnHit_C* GetDefaultObj();

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_HasTag_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasTag_ReturnValue1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue);
};

}


