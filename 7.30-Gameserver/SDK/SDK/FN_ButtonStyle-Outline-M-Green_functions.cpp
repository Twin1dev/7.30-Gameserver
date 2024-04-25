#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-M-Green.ButtonStyle-Outline-M-Green_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusMMinusGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-M-Green_C");

	return Clss;
}


// ButtonStyle-Outline-M-Green_C ButtonStyle-Outline-M-Green.Default__ButtonStyle-Outline-M-Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusMMinusGreen_C* UButtonStyleMinusOutlineMinusMMinusGreen_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusMMinusGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusMMinusGreen_C*>(UButtonStyleMinusOutlineMinusMMinusGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


