#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x9A0 - 0x938)
// BlueprintGeneratedClass GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C
class UGA_Athena_Balloons_ReleaseConditions_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagRequirements              EmoteTags;                                         // 0x948(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          CleanupTag;                                        // 0x988(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DBNOTag;                                           // 0x990(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BoogieBombedTag;                                   // 0x998(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Balloons_ReleaseConditions_C* GetDefaultObj();

	void OnActivate_1A489F684C338ABE95296EB4C5D51D1C(class UGameplayAbility* ActivatedAbility);
	void Added_3041D97F469D592879CF7FBAB4B2FFFE();
	void EventReceived_F1071C264D39527F08E6C2952068C28B(const struct FGameplayEventData& Payload);
	void Added_869B11E8460CEB542C30E0870B991702();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Balloons_ReleaseConditions(int32 EntryPoint, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UGameplayAbility* Temp_object_Variable, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AB_UtilityItem_Balloons_Athena_C* K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena, bool K2Node_DynamicCast_bSuccess1, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivateWithTagRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3);
};

}


