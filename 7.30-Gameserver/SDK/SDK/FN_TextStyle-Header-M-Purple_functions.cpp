#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-Purple.TextStyle-Header-M-Purple_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusPurple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-Purple_C");

	return Clss;
}


// TextStyle-Header-M-Purple_C TextStyle-Header-M-Purple.Default__TextStyle-Header-M-Purple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusPurple_C* UTextStyleMinusHeaderMinusMMinusPurple_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusPurple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusPurple_C*>(UTextStyleMinusHeaderMinusMMinusPurple_C::StaticClass()->DefaultObject);

	return Default;
}

}


