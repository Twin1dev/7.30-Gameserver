#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Slot-PeopleL-XL.ButtonStyle-Slot-PeopleL-XL_C
// (None)

class UClass* UButtonStyleMinusSlotMinusPeopleLMinusXL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Slot-PeopleL-XL_C");

	return Clss;
}


// ButtonStyle-Slot-PeopleL-XL_C ButtonStyle-Slot-PeopleL-XL.Default__ButtonStyle-Slot-PeopleL-XL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSlotMinusPeopleLMinusXL_C* UButtonStyleMinusSlotMinusPeopleLMinusXL_C::GetDefaultObj()
{
	static class UButtonStyleMinusSlotMinusPeopleLMinusXL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSlotMinusPeopleLMinusXL_C*>(UButtonStyleMinusSlotMinusPeopleLMinusXL_C::StaticClass()->DefaultObject);

	return Default;
}

}


