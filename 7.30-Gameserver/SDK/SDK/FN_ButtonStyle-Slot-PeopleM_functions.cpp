#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Slot-PeopleM.ButtonStyle-Slot-PeopleM_C
// (None)

class UClass* UButtonStyleMinusSlotMinusPeopleM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Slot-PeopleM_C");

	return Clss;
}


// ButtonStyle-Slot-PeopleM_C ButtonStyle-Slot-PeopleM.Default__ButtonStyle-Slot-PeopleM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSlotMinusPeopleM_C* UButtonStyleMinusSlotMinusPeopleM_C::GetDefaultObj()
{
	static class UButtonStyleMinusSlotMinusPeopleM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSlotMinusPeopleM_C*>(UButtonStyleMinusSlotMinusPeopleM_C::StaticClass()->DefaultObject);

	return Default;
}

}


