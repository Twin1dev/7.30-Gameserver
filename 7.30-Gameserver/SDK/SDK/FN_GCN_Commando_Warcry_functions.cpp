#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Commando_Warcry.GCN_Commando_Warcry_C
// (Actor)

class UClass* AGCN_Commando_Warcry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Commando_Warcry_C");

	return Clss;
}


// GCN_Commando_Warcry_C GCN_Commando_Warcry.Default__GCN_Commando_Warcry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Commando_Warcry_C* AGCN_Commando_Warcry_C::GetDefaultObj()
{
	static class AGCN_Commando_Warcry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Commando_Warcry_C*>(AGCN_Commando_Warcry_C::StaticClass()->DefaultObject);

	return Default;
}

}


