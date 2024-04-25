#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BroadcastSpectatorPC.BP_BroadcastSpectatorPC_C
// (Actor, PlayerController)

class UClass* ABP_BroadcastSpectatorPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BroadcastSpectatorPC_C");

	return Clss;
}


// BP_BroadcastSpectatorPC_C BP_BroadcastSpectatorPC.Default__BP_BroadcastSpectatorPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BroadcastSpectatorPC_C* ABP_BroadcastSpectatorPC_C::GetDefaultObj()
{
	static class ABP_BroadcastSpectatorPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BroadcastSpectatorPC_C*>(ABP_BroadcastSpectatorPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


