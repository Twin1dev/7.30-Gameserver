#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Woosh.GCN_Woosh_C
// (Actor)

class UClass* AGCN_Woosh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Woosh_C");

	return Clss;
}


// GCN_Woosh_C GCN_Woosh.Default__GCN_Woosh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Woosh_C* AGCN_Woosh_C::GetDefaultObj()
{
	static class AGCN_Woosh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Woosh_C*>(AGCN_Woosh_C::StaticClass()->DefaultObject);

	return Default;
}

}


