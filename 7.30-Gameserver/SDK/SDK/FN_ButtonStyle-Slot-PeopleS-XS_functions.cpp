#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Slot-PeopleS-XS.ButtonStyle-Slot-PeopleS-XS_C
// (None)

class UClass* UButtonStyleMinusSlotMinusPeopleSMinusXS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Slot-PeopleS-XS_C");

	return Clss;
}


// ButtonStyle-Slot-PeopleS-XS_C ButtonStyle-Slot-PeopleS-XS.Default__ButtonStyle-Slot-PeopleS-XS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSlotMinusPeopleSMinusXS_C* UButtonStyleMinusSlotMinusPeopleSMinusXS_C::GetDefaultObj()
{
	static class UButtonStyleMinusSlotMinusPeopleSMinusXS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSlotMinusPeopleSMinusXS_C*>(UButtonStyleMinusSlotMinusPeopleSMinusXS_C::StaticClass()->DefaultObject);

	return Default;
}

}


