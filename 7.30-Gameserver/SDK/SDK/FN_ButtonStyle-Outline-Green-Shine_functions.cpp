#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-Green-Shine.ButtonStyle-Outline-Green-Shine_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusGreenMinusShine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-Green-Shine_C");

	return Clss;
}


// ButtonStyle-Outline-Green-Shine_C ButtonStyle-Outline-Green-Shine.Default__ButtonStyle-Outline-Green-Shine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusGreenMinusShine_C* UButtonStyleMinusOutlineMinusGreenMinusShine_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusGreenMinusShine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusGreenMinusShine_C*>(UButtonStyleMinusOutlineMinusGreenMinusShine_C::StaticClass()->DefaultObject);

	return Default;
}

}


