#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_HitEmWhileTheyReDown_Burst.GC_HitEmWhileTheyReDown_Burst_C
// (None)

class UClass* UGC_HitEmWhileTheyReDown_Burst_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_HitEmWhileTheyReDown_Burst_C");

	return Clss;
}


// GC_HitEmWhileTheyReDown_Burst_C GC_HitEmWhileTheyReDown_Burst.Default__GC_HitEmWhileTheyReDown_Burst_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_HitEmWhileTheyReDown_Burst_C* UGC_HitEmWhileTheyReDown_Burst_C::GetDefaultObj()
{
	static class UGC_HitEmWhileTheyReDown_Burst_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_HitEmWhileTheyReDown_Burst_C*>(UGC_HitEmWhileTheyReDown_Burst_C::StaticClass()->DefaultObject);

	return Default;
}

}


