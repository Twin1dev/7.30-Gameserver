#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B-DarkGreen.TextStyle-Base-M-B-DarkGreen_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusBMinusDarkGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B-DarkGreen_C");

	return Clss;
}


// TextStyle-Base-M-B-DarkGreen_C TextStyle-Base-M-B-DarkGreen.Default__TextStyle-Base-M-B-DarkGreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusBMinusDarkGreen_C* UTextStyleMinusBaseMinusMMinusBMinusDarkGreen_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusBMinusDarkGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusBMinusDarkGreen_C*>(UTextStyleMinusBaseMinusMMinusBMinusDarkGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


