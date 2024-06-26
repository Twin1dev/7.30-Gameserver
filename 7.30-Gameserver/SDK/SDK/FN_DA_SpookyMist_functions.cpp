#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_SpookyMist.DA_SpookyMist_C
// (Actor)

class UClass* ADA_SpookyMist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_SpookyMist_C");

	return Clss;
}


// DA_SpookyMist_C DA_SpookyMist.Default__DA_SpookyMist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADA_SpookyMist_C* ADA_SpookyMist_C::GetDefaultObj()
{
	static class ADA_SpookyMist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADA_SpookyMist_C*>(ADA_SpookyMist_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DA_SpookyMist.DA_SpookyMist_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADA_SpookyMist_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DA_SpookyMist.DA_SpookyMist_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_SpookyMist_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "BPPressSecondaryFire");

	Params::ADA_SpookyMist_C_BPPressSecondaryFire_Params Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_SpookyMist.DA_SpookyMist_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_SpookyMist_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "BPPressTrigger");

	Params::ADA_SpookyMist_C_BPPressTrigger_Params Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_SpookyMist.DA_SpookyMist_C.BPOnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void ADA_SpookyMist_C::BPOnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "BPOnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DA_SpookyMist.DA_SpookyMist_C.BPReleaseSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_SpookyMist_C::BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "BPReleaseSecondaryFire");

	Params::ADA_SpookyMist_C_BPReleaseSecondaryFire_Params Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_SpookyMist.DA_SpookyMist_C.CanCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADA_SpookyMist_C::CanCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "CanCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DA_SpookyMist.DA_SpookyMist_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADA_SpookyMist_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DA_SpookyMist.DA_SpookyMist_C.On DBNO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADA_SpookyMist_C::On_DBNO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "On DBNO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DA_SpookyMist.DA_SpookyMist_C.ExecuteUbergraph_DA_SpookyMist
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsDrivingVehicle_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData1                             (None)
// class APawn*                       CallFunc_GetInstigator_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADA_SpookyMist_C::ExecuteUbergraph_DA_SpookyMist(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDrivingVehicle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APawn* CallFunc_GetInstigator_ReturnValue1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, class APawn* CallFunc_GetInstigator_ReturnValue2, class AFortDecoHelper* K2Node_Event_FortDecoHelper2, class AFortDecoHelper* K2Node_Event_FortDecoHelper1, class AFortDecoHelper* K2Node_Event_FortDecoHelper, float CallFunc_GetValueAtLevel_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess1, class APawn* CallFunc_GetInstigator_ReturnValue4, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess2, class APawn* CallFunc_GetInstigator_ReturnValue5, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DA_SpookyMist_C", "ExecuteUbergraph_DA_SpookyMist");

	Params::ADA_SpookyMist_C_ExecuteUbergraph_DA_SpookyMist_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsDrivingVehicle_ReturnValue = CallFunc_IsDrivingVehicle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_MakeStruct_GameplayEventData1 = K2Node_MakeStruct_GameplayEventData1;
	Parms.CallFunc_GetInstigator_ReturnValue2 = CallFunc_GetInstigator_ReturnValue2;
	Parms.K2Node_Event_FortDecoHelper2 = K2Node_Event_FortDecoHelper2;
	Parms.K2Node_Event_FortDecoHelper1 = K2Node_Event_FortDecoHelper1;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue3 = CallFunc_GetInstigator_ReturnValue3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn1 = K2Node_DynamicCast_AsFort_Player_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetInstigator_ReturnValue4 = CallFunc_GetInstigator_ReturnValue4;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn2 = K2Node_DynamicCast_AsFort_Player_Pawn2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetInstigator_ReturnValue5 = CallFunc_GetInstigator_ReturnValue5;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;

	UObject::ProcessEvent(Func, &Parms);

}

}


