#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-Outline.TextStyle-Base-XS-B-Outline_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusOutline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-Outline_C");

	return Clss;
}


// TextStyle-Base-XS-B-Outline_C TextStyle-Base-XS-B-Outline.Default__TextStyle-Base-XS-B-Outline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusOutline_C* UTextStyleMinusBaseMinusXSMinusBMinusOutline_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusOutline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusOutline_C*>(UTextStyleMinusBaseMinusXSMinusBMinusOutline_C::StaticClass()->DefaultObject);

	return Default;
}

}


