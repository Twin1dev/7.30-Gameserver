#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-XS-CheckBox.ButtonStyle-Outline-XS-CheckBox_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusXSMinusCheckBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-XS-CheckBox_C");

	return Clss;
}


// ButtonStyle-Outline-XS-CheckBox_C ButtonStyle-Outline-XS-CheckBox.Default__ButtonStyle-Outline-XS-CheckBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusXSMinusCheckBox_C* UButtonStyleMinusOutlineMinusXSMinusCheckBox_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusXSMinusCheckBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusXSMinusCheckBox_C*>(UButtonStyleMinusOutlineMinusXSMinusCheckBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


