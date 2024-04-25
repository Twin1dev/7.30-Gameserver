#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_SlowFall.GCN_SlowFall_C
// (Actor)

class UClass* AGCN_SlowFall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_SlowFall_C");

	return Clss;
}


// GCN_SlowFall_C GCN_SlowFall.Default__GCN_SlowFall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_SlowFall_C* AGCN_SlowFall_C::GetDefaultObj()
{
	static class AGCN_SlowFall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_SlowFall_C*>(AGCN_SlowFall_C::StaticClass()->DefaultObject);

	return Default;
}

}


