#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Stun_AOE.GCN_Stun_AOE_C
// (None)

class UClass* UGCN_Stun_AOE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Stun_AOE_C");

	return Clss;
}


// GCN_Stun_AOE_C GCN_Stun_AOE.Default__GCN_Stun_AOE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Stun_AOE_C* UGCN_Stun_AOE_C::GetDefaultObj()
{
	static class UGCN_Stun_AOE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Stun_AOE_C*>(UGCN_Stun_AOE_C::StaticClass()->DefaultObject);

	return Default;
}

}


