#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x950 - 0x938)
// BlueprintGeneratedClass GA_Athena_C4_Passive.GA_Athena_C4_Passive_C
class UGA_Athena_C4_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          TrackGroupTag;                                     // 0x940(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              C4ItemDef;                                         // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_C4_Passive_C* GetDefaultObj();

	void EventReceived_66DB263A44E303CAE6B174AFF4094381(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_C4_Passive(int32 EntryPoint, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetTrackedGroupedActors_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}


