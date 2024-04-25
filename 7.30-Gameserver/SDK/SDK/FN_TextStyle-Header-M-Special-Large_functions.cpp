#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-Special-Large.TextStyle-Header-M-Special-Large_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusSpecialMinusLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-Special-Large_C");

	return Clss;
}


// TextStyle-Header-M-Special-Large_C TextStyle-Header-M-Special-Large.Default__TextStyle-Header-M-Special-Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusSpecialMinusLarge_C* UTextStyleMinusHeaderMinusMMinusSpecialMinusLarge_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusSpecialMinusLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusSpecialMinusLarge_C*>(UTextStyleMinusHeaderMinusMMinusSpecialMinusLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


