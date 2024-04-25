#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Perk_ColdToTheTouch_FrozenTarget.GC_Perk_ColdToTheTouch_FrozenTarget_C
// (None)

class UClass* UGC_Perk_ColdToTheTouch_FrozenTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Perk_ColdToTheTouch_FrozenTarget_C");

	return Clss;
}


// GC_Perk_ColdToTheTouch_FrozenTarget_C GC_Perk_ColdToTheTouch_FrozenTarget.Default__GC_Perk_ColdToTheTouch_FrozenTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Perk_ColdToTheTouch_FrozenTarget_C* UGC_Perk_ColdToTheTouch_FrozenTarget_C::GetDefaultObj()
{
	static class UGC_Perk_ColdToTheTouch_FrozenTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Perk_ColdToTheTouch_FrozenTarget_C*>(UGC_Perk_ColdToTheTouch_FrozenTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


