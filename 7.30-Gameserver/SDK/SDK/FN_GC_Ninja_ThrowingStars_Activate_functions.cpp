#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Ninja_ThrowingStars_Activate.GC_Ninja_ThrowingStars_Activate_C
// (None)

class UClass* UGC_Ninja_ThrowingStars_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Ninja_ThrowingStars_Activate_C");

	return Clss;
}


// GC_Ninja_ThrowingStars_Activate_C GC_Ninja_ThrowingStars_Activate.Default__GC_Ninja_ThrowingStars_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Ninja_ThrowingStars_Activate_C* UGC_Ninja_ThrowingStars_Activate_C::GetDefaultObj()
{
	static class UGC_Ninja_ThrowingStars_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Ninja_ThrowingStars_Activate_C*>(UGC_Ninja_ThrowingStars_Activate_C::StaticClass()->DefaultObject);

	return Default;
}

}


