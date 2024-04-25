#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x9B0 - 0x938)
// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
class UGA_Athena_HookDestroy_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           SwitchLockGE;                                      // 0x948(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Hit_;                                              // 0x950(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CleanedAngle;                                      // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FToyAngleSelectorInfo>         LaunchAngleVariations;                             // 0x958(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                          TravelMontage;                                     // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_Hookgun_Athena_C*                   WeaponActor;                                       // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ChangeEquipmentTag;                                // 0x980(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          RopeActiveTag;                                     // 0x9A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               NullMontage;                                       // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_HookDestroy_C* GetDefaultObj();

	void K2_OnEndAbility(bool bWasCancelled, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess);
	void PickGrappleMontage(float PitchAngle, class FName* SectionName, int32 Temp_int_Array_Index_Variable, float CallFunc_ClampAngle_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FToyAngleSelectorInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_AmmoReserves();
	void OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload);
	void OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnCompleted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload);
	void OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnCompleted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void K2_ActivateAbility();
	void ResetDoOnce();
	void ExecuteUbergraph_GA_Athena_HookDestroy(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayEventData& K2Node_CustomEvent_Payload1, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AB_Prj_Hook_Athena_C* K2Node_DynamicCast_AsB_Prj_Hook_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName K2Node_CustomEvent_NotifyName14, class FName CallFunc_PickGrappleMontage_SectionName, class FName K2Node_CustomEvent_NotifyName13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName K2Node_CustomEvent_NotifyName12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName K2Node_CustomEvent_NotifyName11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName K2Node_CustomEvent_NotifyName10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class FName Temp_name_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class FName K2Node_CustomEvent_NotifyName9, class FName K2Node_CustomEvent_NotifyName8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class FName K2Node_CustomEvent_NotifyName7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class FName K2Node_CustomEvent_NotifyName6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class FName K2Node_CustomEvent_NotifyName5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class FName Temp_name_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, class FName K2Node_CustomEvent_NotifyName4, class FName K2Node_CustomEvent_NotifyName3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class FName K2Node_CustomEvent_NotifyName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class FName K2Node_CustomEvent_NotifyName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, class FName Temp_name_Variable3, class FName K2Node_CustomEvent_NotifyName16, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class FName K2Node_CustomEvent_NotifyName19, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, class FName K2Node_CustomEvent_NotifyName17, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess2, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, class AFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle, bool K2Node_DynamicCast_bSuccess4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue5, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, class FName K2Node_CustomEvent_NotifyName18);
};

}


