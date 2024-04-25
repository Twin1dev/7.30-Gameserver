#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C
// (None)

class UClass* UGA_FerretVehicleWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_FerretVehicleWeapon_C");

	return Clss;
}


// GA_FerretVehicleWeapon_C GA_FerretVehicleWeapon.Default__GA_FerretVehicleWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_FerretVehicleWeapon_C* UGA_FerretVehicleWeapon_C::GetDefaultObj()
{
	static class UGA_FerretVehicleWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_FerretVehicleWeapon_C*>(UGA_FerretVehicleWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.Removed_CD5722AC44659FF60EA697B33A729C46
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_FerretVehicleWeapon_C::Removed_CD5722AC44659FF60EA697B33A729C46()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FerretVehicleWeapon_C", "Removed_CD5722AC44659FF60EA697B33A729C46");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_FerretVehicleWeapon_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FerretVehicleWeapon_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FerretVehicleWeapon_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FerretVehicleWeapon_C", "K2_OnEndAbility");

	Params::UGA_FerretVehicleWeapon_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.ExecuteUbergraph_GA_FerretVehicleWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemove_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOperatingTurret_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FerretVehicleWeapon_C::ExecuteUbergraph_GA_FerretVehicleWeapon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, bool CallFunc_IsOperatingTurret_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FerretVehicleWeapon_C", "ExecuteUbergraph_GA_FerretVehicleWeapon");

	Params::UGA_FerretVehicleWeapon_C_ExecuteUbergraph_GA_FerretVehicleWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitGameplayTagRemove_ReturnValue = CallFunc_WaitGameplayTagRemove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_IsOperatingTurret_ReturnValue = CallFunc_IsOperatingTurret_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


