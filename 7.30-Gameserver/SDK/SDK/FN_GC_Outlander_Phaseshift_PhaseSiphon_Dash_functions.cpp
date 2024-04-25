#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C
// (Actor)

class UClass* AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C");

	return Clss;
}


// GC_Outlander_Phaseshift_PhaseSiphon_Dash_C GC_Outlander_Phaseshift_PhaseSiphon_Dash.Default__GC_Outlander_Phaseshift_PhaseSiphon_Dash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C* AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::GetDefaultObj()
{
	static class AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C*>(AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C.ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C", "ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash");

	Params::AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C_ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


