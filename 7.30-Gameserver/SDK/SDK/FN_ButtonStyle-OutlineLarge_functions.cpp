#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-OutlineLarge.ButtonStyle-OutlineLarge_C
// (None)

class UClass* UButtonStyleMinusOutlineLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-OutlineLarge_C");

	return Clss;
}


// ButtonStyle-OutlineLarge_C ButtonStyle-OutlineLarge.Default__ButtonStyle-OutlineLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineLarge_C* UButtonStyleMinusOutlineLarge_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineLarge_C*>(UButtonStyleMinusOutlineLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


