#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_GoinConstructor_ShieldBash.GC_GoinConstructor_ShieldBash_C
// (Actor)

class UClass* AGC_GoinConstructor_ShieldBash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_GoinConstructor_ShieldBash_C");

	return Clss;
}


// GC_GoinConstructor_ShieldBash_C GC_GoinConstructor_ShieldBash.Default__GC_GoinConstructor_ShieldBash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_GoinConstructor_ShieldBash_C* AGC_GoinConstructor_ShieldBash_C::GetDefaultObj()
{
	static class AGC_GoinConstructor_ShieldBash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_GoinConstructor_ShieldBash_C*>(AGC_GoinConstructor_ShieldBash_C::StaticClass()->DefaultObject);

	return Default;
}

}


