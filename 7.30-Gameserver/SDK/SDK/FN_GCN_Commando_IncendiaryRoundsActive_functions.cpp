#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Commando_IncendiaryRoundsActive.GCN_Commando_IncendiaryRoundsActive_C
// (Actor)

class UClass* AGCN_Commando_IncendiaryRoundsActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Commando_IncendiaryRoundsActive_C");

	return Clss;
}


// GCN_Commando_IncendiaryRoundsActive_C GCN_Commando_IncendiaryRoundsActive.Default__GCN_Commando_IncendiaryRoundsActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Commando_IncendiaryRoundsActive_C* AGCN_Commando_IncendiaryRoundsActive_C::GetDefaultObj()
{
	static class AGCN_Commando_IncendiaryRoundsActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Commando_IncendiaryRoundsActive_C*>(AGCN_Commando_IncendiaryRoundsActive_C::StaticClass()->DefaultObject);

	return Default;
}

}


