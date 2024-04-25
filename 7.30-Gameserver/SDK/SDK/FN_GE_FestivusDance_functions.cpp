#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FestivusDance.GE_FestivusDance_C
// (None)

class UClass* UGE_FestivusDance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FestivusDance_C");

	return Clss;
}


// GE_FestivusDance_C GE_FestivusDance.Default__GE_FestivusDance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FestivusDance_C* UGE_FestivusDance_C::GetDefaultObj()
{
	static class UGE_FestivusDance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FestivusDance_C*>(UGE_FestivusDance_C::StaticClass()->DefaultObject);

	return Default;
}

}


