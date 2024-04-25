#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
// (Actor)

class UClass* AB_Assault_LMG_SAW_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Assault_LMG_SAW_Athena_C");

	return Clss;
}


// B_Assault_LMG_SAW_Athena_C B_Assault_LMG_SAW_Athena.Default__B_Assault_LMG_SAW_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Assault_LMG_SAW_Athena_C* AB_Assault_LMG_SAW_Athena_C::GetDefaultObj()
{
	static class AB_Assault_LMG_SAW_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Assault_LMG_SAW_Athena_C*>(AB_Assault_LMG_SAW_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_LMG_SAW_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_LMG_SAW_Athena_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Assault_LMG_SAW_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_LMG_SAW_Athena_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_LMG_SAW_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_LMG_SAW_Athena_C", "OnSetTargeting");

	Params::AB_Assault_LMG_SAW_Athena_C_OnSetTargeting_Params Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ExecuteUbergraph_B_Assault_LMG_SAW_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_LMG_SAW_Athena_C::ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int32 EntryPoint, bool K2Node_Event_bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Assault_LMG_SAW_Athena_C", "ExecuteUbergraph_B_Assault_LMG_SAW_Athena");

	Params::AB_Assault_LMG_SAW_Athena_C_ExecuteUbergraph_B_Assault_LMG_SAW_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}

}


