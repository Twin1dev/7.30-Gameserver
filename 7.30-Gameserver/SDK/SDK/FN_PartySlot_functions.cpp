#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PartySlot.PartySlot_C
// (None)

class UClass* UPartySlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartySlot_C");

	return Clss;
}


// PartySlot_C PartySlot.Default__PartySlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartySlot_C* UPartySlot_C::GetDefaultObj()
{
	static class UPartySlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartySlot_C*>(UPartySlot_C::StaticClass()->DefaultObject);

	return Default;
}

}


