#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x958 - 0x938)
// BlueprintGeneratedClass GA_FireworksMortar_CountTracker.GA_FireworksMortar_CountTracker_C
class UGA_FireworksMortar_CountTracker_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                        TrackedFireworkHolders;                            // 0x940(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                          T_TrackingGroup;                                   // 0x950(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_FireworksMortar_CountTracker_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_FireworksMortar_CountTracker(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, TArray<class AActor*>& CallFunc_GetTrackedGroupedActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AB_BGA_FireworksMortar_Holder_C* K2Node_DynamicCast_AsB_BGA_Fireworks_Mortar_Holder, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


