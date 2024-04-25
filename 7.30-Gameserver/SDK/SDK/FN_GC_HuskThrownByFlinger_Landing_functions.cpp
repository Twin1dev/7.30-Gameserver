#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_HuskThrownByFlinger_Landing.GC_HuskThrownByFlinger_Landing_C
// (None)

class UClass* UGC_HuskThrownByFlinger_Landing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_HuskThrownByFlinger_Landing_C");

	return Clss;
}


// GC_HuskThrownByFlinger_Landing_C GC_HuskThrownByFlinger_Landing.Default__GC_HuskThrownByFlinger_Landing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_HuskThrownByFlinger_Landing_C* UGC_HuskThrownByFlinger_Landing_C::GetDefaultObj()
{
	static class UGC_HuskThrownByFlinger_Landing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_HuskThrownByFlinger_Landing_C*>(UGC_HuskThrownByFlinger_Landing_C::StaticClass()->DefaultObject);

	return Default;
}

}


