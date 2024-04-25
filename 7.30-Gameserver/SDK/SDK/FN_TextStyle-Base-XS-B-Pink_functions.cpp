#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-Pink.TextStyle-Base-XS-B-Pink_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusPink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-Pink_C");

	return Clss;
}


// TextStyle-Base-XS-B-Pink_C TextStyle-Base-XS-B-Pink.Default__TextStyle-Base-XS-B-Pink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusPink_C* UTextStyleMinusBaseMinusXSMinusBMinusPink_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusPink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusPink_C*>(UTextStyleMinusBaseMinusXSMinusBMinusPink_C::StaticClass()->DefaultObject);

	return Default;
}

}


