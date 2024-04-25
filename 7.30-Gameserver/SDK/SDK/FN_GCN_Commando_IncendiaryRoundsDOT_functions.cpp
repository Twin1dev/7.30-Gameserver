#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C
// (Actor)

class UClass* AGCN_Commando_IncendiaryRoundsDOT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Commando_IncendiaryRoundsDOT_C");

	return Clss;
}


// GCN_Commando_IncendiaryRoundsDOT_C GCN_Commando_IncendiaryRoundsDOT.Default__GCN_Commando_IncendiaryRoundsDOT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Commando_IncendiaryRoundsDOT_C* AGCN_Commando_IncendiaryRoundsDOT_C::GetDefaultObj()
{
	static class AGCN_Commando_IncendiaryRoundsDOT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Commando_IncendiaryRoundsDOT_C*>(AGCN_Commando_IncendiaryRoundsDOT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Commando_IncendiaryRoundsDOT_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Commando_IncendiaryRoundsDOT_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AGCN_Commando_IncendiaryRoundsDOT_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Commando_IncendiaryRoundsDOT_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Commando_IncendiaryRoundsDOT_C::ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Commando_IncendiaryRoundsDOT_C", "ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT");

	Params::AGCN_Commando_IncendiaryRoundsDOT_C_ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


