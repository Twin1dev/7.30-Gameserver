#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Generic_Taunter.GCN_Generic_Taunter_C
// (Actor)

class UClass* AGCN_Generic_Taunter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Generic_Taunter_C");

	return Clss;
}


// GCN_Generic_Taunter_C GCN_Generic_Taunter.Default__GCN_Generic_Taunter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Generic_Taunter_C* AGCN_Generic_Taunter_C::GetDefaultObj()
{
	static class AGCN_Generic_Taunter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Generic_Taunter_C*>(AGCN_Generic_Taunter_C::StaticClass()->DefaultObject);

	return Default;
}

}


