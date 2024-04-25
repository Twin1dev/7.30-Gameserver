#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C
// (Actor, PlayerController)

class UClass* ABP_PlayerControllerOutpost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerControllerOutpost_C");

	return Clss;
}


// BP_PlayerControllerOutpost_C BP_PlayerControllerOutpost.Default__BP_PlayerControllerOutpost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerControllerOutpost_C* ABP_PlayerControllerOutpost_C::GetDefaultObj()
{
	static class ABP_PlayerControllerOutpost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerControllerOutpost_C*>(ABP_PlayerControllerOutpost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerControllerOutpost_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GetHelp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerControllerOutpost_C::ServerStartExpandingOutpost(bool GetHelp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "ServerStartExpandingOutpost");

	Params::ABP_PlayerControllerOutpost_C_ServerStartExpandingOutpost_Params Parms{};

	Parms.GetHelp = GetHelp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_GetHelp                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerControllerOutpost_C::ExecuteUbergraph_BP_PlayerControllerOutpost(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_CustomEvent_GetHelp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerControllerOutpost_C", "ExecuteUbergraph_BP_PlayerControllerOutpost");

	Params::ABP_PlayerControllerOutpost_C_ExecuteUbergraph_BP_PlayerControllerOutpost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_GetHelp = K2Node_CustomEvent_GetHelp;

	UObject::ProcessEvent(Func, &Parms);

}

}


