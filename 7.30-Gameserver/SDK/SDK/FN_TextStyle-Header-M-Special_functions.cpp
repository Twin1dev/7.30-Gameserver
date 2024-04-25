#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-Special.TextStyle-Header-M-Special_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusSpecial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-Special_C");

	return Clss;
}


// TextStyle-Header-M-Special_C TextStyle-Header-M-Special.Default__TextStyle-Header-M-Special_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusSpecial_C* UTextStyleMinusHeaderMinusMMinusSpecial_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusSpecial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusSpecial_C*>(UTextStyleMinusHeaderMinusMMinusSpecial_C::StaticClass()->DefaultObject);

	return Default;
}

}


