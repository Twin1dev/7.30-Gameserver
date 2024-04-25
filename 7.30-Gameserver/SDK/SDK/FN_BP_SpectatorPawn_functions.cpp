#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpectatorPawn.BP_SpectatorPawn_C
// (Actor, Pawn)

class UClass* ABP_SpectatorPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpectatorPawn_C");

	return Clss;
}


// BP_SpectatorPawn_C BP_SpectatorPawn.Default__BP_SpectatorPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpectatorPawn_C* ABP_SpectatorPawn_C::GetDefaultObj()
{
	static class ABP_SpectatorPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpectatorPawn_C*>(ABP_SpectatorPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


