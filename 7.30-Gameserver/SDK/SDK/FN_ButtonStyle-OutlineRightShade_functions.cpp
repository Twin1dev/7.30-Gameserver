#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-OutlineRightShade.ButtonStyle-OutlineRightShade_C
// (None)

class UClass* UButtonStyleMinusOutlineRightShade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-OutlineRightShade_C");

	return Clss;
}


// ButtonStyle-OutlineRightShade_C ButtonStyle-OutlineRightShade.Default__ButtonStyle-OutlineRightShade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineRightShade_C* UButtonStyleMinusOutlineRightShade_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineRightShade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineRightShade_C*>(UButtonStyleMinusOutlineRightShade_C::StaticClass()->DefaultObject);

	return Default;
}

}


