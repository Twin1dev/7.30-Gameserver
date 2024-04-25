#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Lobby_Winter_BR.Frontend_Lobby_Winter_BR_C
// (Actor)

class UClass* AFrontend_Lobby_Winter_BR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Lobby_Winter_BR_C");

	return Clss;
}


// Frontend_Lobby_Winter_BR_C Frontend_Lobby_Winter_BR.Default__Frontend_Lobby_Winter_BR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Lobby_Winter_BR_C* AFrontend_Lobby_Winter_BR_C::GetDefaultObj()
{
	static class AFrontend_Lobby_Winter_BR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Lobby_Winter_BR_C*>(AFrontend_Lobby_Winter_BR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_Lobby_Winter_BR.Frontend_Lobby_Winter_BR_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Winter_BR_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Winter_BR_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Winter_BR.Frontend_Lobby_Winter_BR_C.ExecuteUbergraph_Frontend_Lobby_Winter_BR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Winter_BR_C::ExecuteUbergraph_Frontend_Lobby_Winter_BR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Winter_BR_C", "ExecuteUbergraph_Frontend_Lobby_Winter_BR");

	Params::AFrontend_Lobby_Winter_BR_C_ExecuteUbergraph_Frontend_Lobby_Winter_BR_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


