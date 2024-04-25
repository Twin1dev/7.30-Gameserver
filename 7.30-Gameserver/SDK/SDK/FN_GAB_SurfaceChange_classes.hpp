#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x9B8 - 0x938)
// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
class UGAB_SurfaceChange_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0x940(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        RemovalDelay;                                      // 0x948(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        IcySurfacesEnabled;                                // 0x968(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 HasIce;                                            // 0x988(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_SurfaceChange_Ice;                              // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_SurfaceChange_Snow;                             // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAB_SurfaceChange_C* GetDefaultObj();

	void HotfixableGEApplication(struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse, float CallFunc_GetValueAtLevel_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1);
	void RemoveGameplayEffects();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_SurfaceChange(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess, float CallFunc_GetValueAtLevel_ReturnValue1);
};

}


