#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_BeachBall_TeleportAway.GCN_BeachBall_TeleportAway_C
// (None)

class UClass* UGCN_BeachBall_TeleportAway_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_BeachBall_TeleportAway_C");

	return Clss;
}


// GCN_BeachBall_TeleportAway_C GCN_BeachBall_TeleportAway.Default__GCN_BeachBall_TeleportAway_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_BeachBall_TeleportAway_C* UGCN_BeachBall_TeleportAway_C::GetDefaultObj()
{
	static class UGCN_BeachBall_TeleportAway_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_BeachBall_TeleportAway_C*>(UGCN_BeachBall_TeleportAway_C::StaticClass()->DefaultObject);

	return Default;
}

}


