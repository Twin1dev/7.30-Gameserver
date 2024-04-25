#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Melee_Tool_LeapAttack_Impact.GC_Melee_Tool_LeapAttack_Impact_C
// (None)

class UClass* UGC_Melee_Tool_LeapAttack_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Melee_Tool_LeapAttack_Impact_C");

	return Clss;
}


// GC_Melee_Tool_LeapAttack_Impact_C GC_Melee_Tool_LeapAttack_Impact.Default__GC_Melee_Tool_LeapAttack_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Melee_Tool_LeapAttack_Impact_C* UGC_Melee_Tool_LeapAttack_Impact_C::GetDefaultObj()
{
	static class UGC_Melee_Tool_LeapAttack_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Melee_Tool_LeapAttack_Impact_C*>(UGC_Melee_Tool_LeapAttack_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


