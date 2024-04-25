#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_NinjaShieldBreakStun.GC_NinjaShieldBreakStun_C
// (None)

class UClass* UGC_NinjaShieldBreakStun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_NinjaShieldBreakStun_C");

	return Clss;
}


// GC_NinjaShieldBreakStun_C GC_NinjaShieldBreakStun.Default__GC_NinjaShieldBreakStun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_NinjaShieldBreakStun_C* UGC_NinjaShieldBreakStun_C::GetDefaultObj()
{
	static class UGC_NinjaShieldBreakStun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_NinjaShieldBreakStun_C*>(UGC_NinjaShieldBreakStun_C::StaticClass()->DefaultObject);

	return Default;
}

}


