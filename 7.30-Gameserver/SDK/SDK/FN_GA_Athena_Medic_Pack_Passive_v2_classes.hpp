#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0xA38 - 0xA0A)
// BlueprintGeneratedClass GA_Athena_Medic_Pack_Passive_v2.GA_Athena_Medic_Pack_Passive_v2_C
class UGA_Athena_Medic_Pack_Passive_v2_C : public UGAT_GenericTriggeredAbility_C
{
public:
	uint8                                        Pad_53F3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                 PlayerPawn;                                        // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TargetTimer;                                       // 0xA20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MedicPack_HealTarget_C*            TargetIndicator;                                   // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MedicPack_HealNozzle_C*            TargetingNozzle;                                   // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Medic_Pack_Passive_v2_C* GetDefaultObj();

	void Cancelled_3447DE8E44C8D05AAE0A5B9A9A166E72(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_3447DE8E44C8D05AAE0A5B9A9A166E72(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void GetTarget();
	void ClientUpdate(struct FGameplayAbilityTargetDataHandle& TargetData);
	void UpdateBoth(struct FGameplayAbilityTargetDataHandle& TargetData);
	void ExecuteUbergraph_GA_Athena_Medic_Pack_Passive_v2(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ABP_MedicPack_HealTarget_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_MedicPack_HealNozzle_C* CallFunc_FinishSpawningActor_ReturnValue1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_TargetDataHasActor_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, bool CallFunc_TargetDataHasActor_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult3, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1);
};

}


