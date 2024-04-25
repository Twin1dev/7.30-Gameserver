#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Burger_Hit_Splat.GC_Burger_Hit_Splat_C
// (None)

class UClass* UGC_Burger_Hit_Splat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Burger_Hit_Splat_C");

	return Clss;
}


// GC_Burger_Hit_Splat_C GC_Burger_Hit_Splat.Default__GC_Burger_Hit_Splat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Burger_Hit_Splat_C* UGC_Burger_Hit_Splat_C::GetDefaultObj()
{
	static class UGC_Burger_Hit_Splat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Burger_Hit_Splat_C*>(UGC_Burger_Hit_Splat_C::StaticClass()->DefaultObject);

	return Default;
}

}


