#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
// (None)

class UClass* UGA_Rift_Athena_Skydive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Rift_Athena_Skydive_C");

	return Clss;
}


// GA_Rift_Athena_Skydive_C GA_Rift_Athena_Skydive.Default__GA_Rift_Athena_Skydive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Rift_Athena_Skydive_C* UGA_Rift_Athena_Skydive_C::GetDefaultObj()
{
	static class UGA_Rift_Athena_Skydive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Rift_Athena_Skydive_C*>(UGA_Rift_Athena_Skydive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCancelled_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::OnCancelled_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnCancelled_AA0523504B7CA4F488E1E6A11F48308A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCompleted_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::OnCompleted_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnCompleted_AA0523504B7CA4F488E1E6A11F48308A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMovementMode           NewMovementMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_C::OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5(enum class EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5");

	Params::UGA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5_Params Parms{};

	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.SetPlayerToSkydive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::SetPlayerToSkydive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "SetPlayerToSkydive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitMovementModeChange*CallFunc_CreateWaitMovementModeChange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMovementMode           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_NewMovementMode                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkydiving_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAthenaVehicle*          CallFunc_GetVehicle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAir_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1              (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class AFortAthenaVehicle*          CallFunc_GetVehicle_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AJackalVehicle_Athena_C*     K2Node_DynamicCast_AsJackal_Vehicle_Athena                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAthenaVehicle*          CallFunc_GetVehicle_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFerretVehicle_C*            K2Node_DynamicCast_AsFerret_Vehicle                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)

void UGA_Rift_Athena_Skydive_C::ExecuteUbergraph_GA_Rift_Athena_Skydive(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EMovementMode Temp_byte_Variable, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, bool CallFunc_IsInAir_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, float CallFunc_GetValueAtLevel_ReturnValue2, bool Temp_bool_Has_Been_Initd_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, float CallFunc_GetValueAtLevel_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue1, class AJackalVehicle_Athena_C* K2Node_DynamicCast_AsJackal_Vehicle_Athena, bool K2Node_DynamicCast_bSuccess2, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue2, bool CallFunc_IsInVehicle_ReturnValue1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, class AFerretVehicle_C* K2Node_DynamicCast_AsFerret_Vehicle, bool K2Node_DynamicCast_bSuccess3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "ExecuteUbergraph_GA_Rift_Athena_Skydive");

	Params::UGA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_CreateWaitMovementModeChange_ReturnValue = CallFunc_CreateWaitMovementModeChange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_NewMovementMode = K2Node_CustomEvent_NewMovementMode;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_IsSkydiving_ReturnValue = CallFunc_IsSkydiving_ReturnValue;
	Parms.CallFunc_GetVehicle_ReturnValue = CallFunc_GetVehicle_ReturnValue;
	Parms.CallFunc_IsInAir_ReturnValue = CallFunc_IsInAir_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Movement_Component = K2Node_DynamicCast_AsCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue1 = CallFunc_GetValueAtLevel_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue2 = CallFunc_GetValueAtLevel_ReturnValue2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue3 = CallFunc_GetValueAtLevel_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetVehicle_ReturnValue1 = CallFunc_GetVehicle_ReturnValue1;
	Parms.K2Node_DynamicCast_AsJackal_Vehicle_Athena = K2Node_DynamicCast_AsJackal_Vehicle_Athena;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetVehicle_ReturnValue2 = CallFunc_GetVehicle_ReturnValue2;
	Parms.CallFunc_IsInVehicle_ReturnValue1 = CallFunc_IsInVehicle_ReturnValue1;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFerret_Vehicle = K2Node_DynamicCast_AsFerret_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;

	UObject::ProcessEvent(Func, &Parms);

}

}


