#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-HighlightEmphasized.ButtonStyle-HighlightEmphasized_C
// (None)

class UClass* UButtonStyleMinusHighlightEmphasized_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-HighlightEmphasized_C");

	return Clss;
}


// ButtonStyle-HighlightEmphasized_C ButtonStyle-HighlightEmphasized.Default__ButtonStyle-HighlightEmphasized_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusHighlightEmphasized_C* UButtonStyleMinusHighlightEmphasized_C::GetDefaultObj()
{
	static class UButtonStyleMinusHighlightEmphasized_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusHighlightEmphasized_C*>(UButtonStyleMinusHighlightEmphasized_C::StaticClass()->DefaultObject);

	return Default;
}

}


