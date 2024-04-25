#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Melee_Edged_Sword_LeapAttack_Launch.GC_Melee_Edged_Sword_LeapAttack_Launch_C
// (None)

class UClass* UGC_Melee_Edged_Sword_LeapAttack_Launch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Melee_Edged_Sword_LeapAttack_Launch_C");

	return Clss;
}


// GC_Melee_Edged_Sword_LeapAttack_Launch_C GC_Melee_Edged_Sword_LeapAttack_Launch.Default__GC_Melee_Edged_Sword_LeapAttack_Launch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Melee_Edged_Sword_LeapAttack_Launch_C* UGC_Melee_Edged_Sword_LeapAttack_Launch_C::GetDefaultObj()
{
	static class UGC_Melee_Edged_Sword_LeapAttack_Launch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Melee_Edged_Sword_LeapAttack_Launch_C*>(UGC_Melee_Edged_Sword_LeapAttack_Launch_C::StaticClass()->DefaultObject);

	return Default;
}

}


