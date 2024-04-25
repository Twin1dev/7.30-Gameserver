#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Ability_Commando_WarCry_Activate.GC_Ability_Commando_WarCry_Activate_C
// (Actor)

class UClass* AGC_Ability_Commando_WarCry_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Ability_Commando_WarCry_Activate_C");

	return Clss;
}


// GC_Ability_Commando_WarCry_Activate_C GC_Ability_Commando_WarCry_Activate.Default__GC_Ability_Commando_WarCry_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Ability_Commando_WarCry_Activate_C* AGC_Ability_Commando_WarCry_Activate_C::GetDefaultObj()
{
	static class AGC_Ability_Commando_WarCry_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Ability_Commando_WarCry_Activate_C*>(AGC_Ability_Commando_WarCry_Activate_C::StaticClass()->DefaultObject);

	return Default;
}

}


