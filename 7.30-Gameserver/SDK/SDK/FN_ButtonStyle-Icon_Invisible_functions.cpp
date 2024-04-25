#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Icon_Invisible.ButtonStyle-Icon_Invisible_C
// (None)

class UClass* UButtonStyleMinusIcon_Invisible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Icon_Invisible_C");

	return Clss;
}


// ButtonStyle-Icon_Invisible_C ButtonStyle-Icon_Invisible.Default__ButtonStyle-Icon_Invisible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusIcon_Invisible_C* UButtonStyleMinusIcon_Invisible_C::GetDefaultObj()
{
	static class UButtonStyleMinusIcon_Invisible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusIcon_Invisible_C*>(UButtonStyleMinusIcon_Invisible_C::StaticClass()->DefaultObject);

	return Default;
}

}


