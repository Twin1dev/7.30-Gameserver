#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Outlander_BearFragmentDebuff.GCN_Outlander_BearFragmentDebuff_C
// (Actor)

class UClass* AGCN_Outlander_BearFragmentDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Outlander_BearFragmentDebuff_C");

	return Clss;
}


// GCN_Outlander_BearFragmentDebuff_C GCN_Outlander_BearFragmentDebuff.Default__GCN_Outlander_BearFragmentDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Outlander_BearFragmentDebuff_C* AGCN_Outlander_BearFragmentDebuff_C::GetDefaultObj()
{
	static class AGCN_Outlander_BearFragmentDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Outlander_BearFragmentDebuff_C*>(AGCN_Outlander_BearFragmentDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


