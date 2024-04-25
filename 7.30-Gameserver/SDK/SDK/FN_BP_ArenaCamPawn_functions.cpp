#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ArenaCamPawn.BP_ArenaCamPawn_C
// (Actor, Pawn)

class UClass* ABP_ArenaCamPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ArenaCamPawn_C");

	return Clss;
}


// BP_ArenaCamPawn_C BP_ArenaCamPawn.Default__BP_ArenaCamPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ArenaCamPawn_C* ABP_ArenaCamPawn_C::GetDefaultObj()
{
	static class ABP_ArenaCamPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ArenaCamPawn_C*>(ABP_ArenaCamPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


