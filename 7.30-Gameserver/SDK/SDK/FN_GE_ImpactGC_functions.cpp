#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ImpactGC.GE_ImpactGC_C
// (None)

class UClass* UGE_ImpactGC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ImpactGC_C");

	return Clss;
}


// GE_ImpactGC_C GE_ImpactGC.Default__GE_ImpactGC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ImpactGC_C* UGE_ImpactGC_C::GetDefaultObj()
{
	static class UGE_ImpactGC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ImpactGC_C*>(UGE_ImpactGC_C::StaticClass()->DefaultObject);

	return Default;
}

}


