#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-FreePass.TextStyle-Base-XS-B-FreePass_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusFreePass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-FreePass_C");

	return Clss;
}


// TextStyle-Base-XS-B-FreePass_C TextStyle-Base-XS-B-FreePass.Default__TextStyle-Base-XS-B-FreePass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusFreePass_C* UTextStyleMinusBaseMinusXSMinusBMinusFreePass_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusFreePass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusFreePass_C*>(UTextStyleMinusBaseMinusXSMinusBMinusFreePass_C::StaticClass()->DefaultObject);

	return Default;
}

}


