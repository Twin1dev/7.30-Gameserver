#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C
// (None)

class UClass* UGA_Athena_Enemy_Apply_SneakySnowman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Enemy_Apply_SneakySnowman_C");

	return Clss;
}


// GA_Athena_Enemy_Apply_SneakySnowman_C GA_Athena_Enemy_Apply_SneakySnowman.Default__GA_Athena_Enemy_Apply_SneakySnowman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Enemy_Apply_SneakySnowman_C* UGA_Athena_Enemy_Apply_SneakySnowman_C::GetDefaultObj()
{
	static class UGA_Athena_Enemy_Apply_SneakySnowman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Enemy_Apply_SneakySnowman_C*>(UGA_Athena_Enemy_Apply_SneakySnowman_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.HasVehicleWeapon?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AB_FerretWeapon_C*           K2Node_DynamicCast_AsB_Ferret_Weapon                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_MountedTurretAthena_C*    K2Node_DynamicCast_AsB_Mounted_Turret_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Athena_Enemy_Apply_SneakySnowman_C::HasVehicleWeapon_(class AB_FerretWeapon_C* K2Node_DynamicCast_AsB_Ferret_Weapon, bool K2Node_DynamicCast_bSuccess, class AB_MountedTurretAthena_C* K2Node_DynamicCast_AsB_Mounted_Turret_Athena, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "HasVehicleWeapon?");

	Params::UGA_Athena_Enemy_Apply_SneakySnowman_C_HasVehicleWeapon__Params Parms{};

	Parms.K2Node_DynamicCast_AsB_Ferret_Weapon = K2Node_DynamicCast_AsB_Ferret_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsB_Mounted_Turret_Athena = K2Node_DynamicCast_AsB_Mounted_Turret_Athena;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0");

	Params::UGA_Athena_Enemy_Apply_SneakySnowman_C_Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0");

	Params::UGA_Athena_Enemy_Apply_SneakySnowman_C_Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0");

	Params::UGA_Athena_Enemy_Apply_SneakySnowman_C_Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD");

	Params::UGA_Athena_Enemy_Apply_SneakySnowman_C_EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Enemy_Apply_SneakySnowman_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EndAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "EndAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.RestartAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Enemy_Apply_SneakySnowman_C::RestartAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "RestartAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbilitySequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EndAbilitySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "EndAbilitySequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "K2_OnEndAbility");

	Params::UGA_Athena_Enemy_Apply_SneakySnowman_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.VehicleWeaponCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Enemy_Apply_SneakySnowman_C::VehicleWeaponCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "VehicleWeaponCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable1                                            (None)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          Temp_struct_Variable2                                            (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_Enemy_Player_SneakySnowman_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_MakeStruct_GameplayCueParameters                          (ContainsInstancedReference)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData1                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag1                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponHolstered_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasVehicleWeapon__ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasVehicleWeapon__ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, const struct FGameplayEventData& K2Node_CustomEvent_Payload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& Temp_struct_Variable2, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAthena_Enemy_Player_SneakySnowman_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue3, float CallFunc_GetValueAtLevel_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, bool K2Node_Event_bWasCancelled, bool CallFunc_IsWeaponHolstered_ReturnValue, bool CallFunc_IsValid_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_HasVehicleWeapon__ReturnValue, bool CallFunc_HasVehicleWeapon__ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Enemy_Apply_SneakySnowman_C", "ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman");

	Params::UGA_Athena_Enemy_Apply_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayCueParameters = K2Node_MakeStruct_GameplayCueParameters;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue1 = CallFunc_GetValueAtLevel_ReturnValue1;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.K2Node_CustomEvent_TargetData1 = K2Node_CustomEvent_TargetData1;
	Parms.K2Node_CustomEvent_ApplicationTag1 = K2Node_CustomEvent_ApplicationTag1;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_IsWeaponHolstered_ReturnValue = CallFunc_IsWeaponHolstered_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_HasVehicleWeapon__ReturnValue = CallFunc_HasVehicleWeapon__ReturnValue;
	Parms.CallFunc_HasVehicleWeapon__ReturnValue1 = CallFunc_HasVehicleWeapon__ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


