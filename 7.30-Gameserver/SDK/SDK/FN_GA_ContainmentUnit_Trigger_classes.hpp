#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x958 - 0x938)
// BlueprintGeneratedClass GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C
class UGA_ContainmentUnit_Trigger_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilitySystemComponent*               OriginalDamageInstigator;                          // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               OriginalDamageTarget;                              // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RequestReflectionTag;                              // 0x950(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ContainmentUnit_Trigger_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_ContainmentUnit_Trigger(int32 EntryPoint, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
};

}


