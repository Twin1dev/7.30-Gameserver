#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C
// (Actor)

class UClass* AB_Assault_Surgical_Thermal_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Assault_Surgical_Thermal_Athena_C");

	return Clss;
}


// B_Assault_Surgical_Thermal_Athena_C B_Assault_Surgical_Thermal_Athena.Default__B_Assault_Surgical_Thermal_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Assault_Surgical_Thermal_Athena_C* AB_Assault_Surgical_Thermal_Athena_C::GetDefaultObj()
{
	static class AB_Assault_Surgical_Thermal_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Assault_Surgical_Thermal_Athena_C*>(AB_Assault_Surgical_Thermal_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ScalePlayerThermal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ScalePlayerThermal__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ScalePlayerThermal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ScalePlayerThermal__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_Surgical_Thermal_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "OnSetTargeting");

	Params::AB_Assault_Surgical_Thermal_Athena_C_OnSetTargeting_Params Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::PlayScopePP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "PlayScopePP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::ReverseScopePP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ReverseScopePP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ForceScopeBackImmediatly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Surgical_Thermal_Athena_C::ForceScopeBackImmediatly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ForceScopeBackImmediatly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_Surgical_Thermal_Athena_C::ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bNewIsTargeting, bool CallFunc_IsMobilePlatform_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool Temp_bool_IsClosed_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena");

	Params::AB_Assault_Surgical_Thermal_Athena_C_ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


