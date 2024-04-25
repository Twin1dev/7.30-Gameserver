#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Hangar_Lobby.BP_Hangar_Lobby_C
// (Actor)

class UClass* ABP_Hangar_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Hangar_Lobby_C");

	return Clss;
}


// BP_Hangar_Lobby_C BP_Hangar_Lobby.Default__BP_Hangar_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Hangar_Lobby_C* ABP_Hangar_Lobby_C::GetDefaultObj()
{
	static class ABP_Hangar_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Hangar_Lobby_C*>(ABP_Hangar_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Hangar_Lobby.BP_Hangar_Lobby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hangar_Lobby_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hangar_Lobby_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


