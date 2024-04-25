#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C
// (None)

class UClass* UGA_Athena_Balloons_ReleaseConditions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Balloons_ReleaseConditions_C");

	return Clss;
}


// GA_Athena_Balloons_ReleaseConditions_C GA_Athena_Balloons_ReleaseConditions.Default__GA_Athena_Balloons_ReleaseConditions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Balloons_ReleaseConditions_C* UGA_Athena_Balloons_ReleaseConditions_C::GetDefaultObj()
{
	static class UGA_Athena_Balloons_ReleaseConditions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Balloons_ReleaseConditions_C*>(UGA_Athena_Balloons_ReleaseConditions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C.OnActivate_1A489F684C338ABE95296EB4C5D51D1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Balloons_ReleaseConditions_C::OnActivate_1A489F684C338ABE95296EB4C5D51D1C(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_ReleaseConditions_C", "OnActivate_1A489F684C338ABE95296EB4C5D51D1C");

	Params::UGA_Athena_Balloons_ReleaseConditions_C_OnActivate_1A489F684C338ABE95296EB4C5D51D1C_Params Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C.Added_3041D97F469D592879CF7FBAB4B2FFFE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Balloons_ReleaseConditions_C::Added_3041D97F469D592879CF7FBAB4B2FFFE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_ReleaseConditions_C", "Added_3041D97F469D592879CF7FBAB4B2FFFE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C.EventReceived_F1071C264D39527F08E6C2952068C28B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Balloons_ReleaseConditions_C::EventReceived_F1071C264D39527F08E6C2952068C28B(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_ReleaseConditions_C", "EventReceived_F1071C264D39527F08E6C2952068C28B");

	Params::UGA_Athena_Balloons_ReleaseConditions_C_EventReceived_F1071C264D39527F08E6C2952068C28B_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C.Added_869B11E8460CEB542C30E0870B991702
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Balloons_ReleaseConditions_C::Added_869B11E8460CEB542C30E0870B991702()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_ReleaseConditions_C", "Added_869B11E8460CEB542C30E0870B991702");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Balloons_ReleaseConditions_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_ReleaseConditions_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C.ExecuteUbergraph_GA_Athena_Balloons_ReleaseConditions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UGameplayAbility*            K2Node_CustomEvent_ActivatedAbility                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// class UGameplayAbility*            Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class AB_UtilityItem_Balloons_Athena_C*K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitAbilityActivate*CallFunc_WaitForAbilityActivateWithTagRequirements_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Balloons_ReleaseConditions_C::ExecuteUbergraph_GA_Athena_Balloons_ReleaseConditions(int32 EntryPoint, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UGameplayAbility* Temp_object_Variable, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AB_UtilityItem_Balloons_Athena_C* K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena, bool K2Node_DynamicCast_bSuccess1, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivateWithTagRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_ReleaseConditions_C", "ExecuteUbergraph_GA_Athena_Balloons_ReleaseConditions");

	Params::UGA_Athena_Balloons_ReleaseConditions_C_ExecuteUbergraph_GA_Athena_Balloons_ReleaseConditions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_CustomEvent_ActivatedAbility = K2Node_CustomEvent_ActivatedAbility;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue = CallFunc_GetCurrentSourceWeapon_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena = K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_WaitForAbilityActivateWithTagRequirements_ReturnValue = CallFunc_WaitForAbilityActivateWithTagRequirements_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue1 = CallFunc_WaitGameplayTagAdd_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


