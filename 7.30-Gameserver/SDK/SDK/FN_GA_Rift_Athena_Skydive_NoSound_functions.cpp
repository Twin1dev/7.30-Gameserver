#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C
// (None)

class UClass* UGA_Rift_Athena_Skydive_NoSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Rift_Athena_Skydive_NoSound_C");

	return Clss;
}


// GA_Rift_Athena_Skydive_NoSound_C GA_Rift_Athena_Skydive_NoSound.Default__GA_Rift_Athena_Skydive_NoSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Rift_Athena_Skydive_NoSound_C* UGA_Rift_Athena_Skydive_NoSound_C::GetDefaultObj()
{
	static class UGA_Rift_Athena_Skydive_NoSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Rift_Athena_Skydive_NoSound_C*>(UGA_Rift_Athena_Skydive_NoSound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnCancelled_860141E242B535E84A444690935DD5A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_NoSound_C::OnCancelled_860141E242B535E84A444690935DD5A3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "OnCancelled_860141E242B535E84A444690935DD5A3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnInterrupted_860141E242B535E84A444690935DD5A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_NoSound_C::OnInterrupted_860141E242B535E84A444690935DD5A3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "OnInterrupted_860141E242B535E84A444690935DD5A3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnBlendOut_860141E242B535E84A444690935DD5A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_NoSound_C::OnBlendOut_860141E242B535E84A444690935DD5A3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "OnBlendOut_860141E242B535E84A444690935DD5A3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnCompleted_860141E242B535E84A444690935DD5A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_NoSound_C::OnCompleted_860141E242B535E84A444690935DD5A3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "OnCompleted_860141E242B535E84A444690935DD5A3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnChange_76E5E8EE4057220AFF5C838FA07B504A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMovementMode           NewMovementMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_NoSound_C::OnChange_76E5E8EE4057220AFF5C838FA07B504A(enum class EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "OnChange_76E5E8EE4057220AFF5C838FA07B504A");

	Params::UGA_Rift_Athena_Skydive_NoSound_C_OnChange_76E5E8EE4057220AFF5C838FA07B504A_Params Parms{};

	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_NoSound_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.SetPlayerToSkydive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_NoSound_C::SetPlayerToSkydive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "SetPlayerToSkydive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Rift_Athena_Skydive_NoSound_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "K2_OnEndAbility");

	Params::UGA_Rift_Athena_Skydive_NoSound_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_NewMovementMode                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EMovementMode           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitMovementModeChange*CallFunc_CreateWaitMovementModeChange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAthenaVehicle*          CallFunc_GetVehicle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkydiving_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInAir_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAthenaVehicle*          CallFunc_GetVehicle_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1              (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_NoSound_C::ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound(int32 EntryPoint, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMovementMode Temp_byte_Variable, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsInAir_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue1, bool CallFunc_IsInVehicle_ReturnValue1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetValueAtLevel_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, float CallFunc_GetValueAtLevel_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, float CallFunc_GetValueAtLevel_ReturnValue2, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, float CallFunc_GetValueAtLevel_ReturnValue3, bool K2Node_Event_bWasCancelled, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_NoSound_C", "ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound");

	Params::UGA_Rift_Athena_Skydive_NoSound_C_ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewMovementMode = K2Node_CustomEvent_NewMovementMode;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_CreateWaitMovementModeChange_ReturnValue = CallFunc_CreateWaitMovementModeChange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetVehicle_ReturnValue = CallFunc_GetVehicle_ReturnValue;
	Parms.CallFunc_IsSkydiving_ReturnValue = CallFunc_IsSkydiving_ReturnValue;
	Parms.CallFunc_IsInAir_ReturnValue = CallFunc_IsInAir_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_GetVehicle_ReturnValue1 = CallFunc_GetVehicle_ReturnValue1;
	Parms.CallFunc_IsInVehicle_ReturnValue1 = CallFunc_IsInVehicle_ReturnValue1;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue1 = CallFunc_GetValueAtLevel_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue2 = CallFunc_GetValueAtLevel_ReturnValue2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetValueAtLevel_ReturnValue3 = CallFunc_GetValueAtLevel_ReturnValue3;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


