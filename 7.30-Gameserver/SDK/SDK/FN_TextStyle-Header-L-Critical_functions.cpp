#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Critical.TextStyle-Header-L-Critical_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusCritical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Critical_C");

	return Clss;
}


// TextStyle-Header-L-Critical_C TextStyle-Header-L-Critical.Default__TextStyle-Header-L-Critical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusCritical_C* UTextStyleMinusHeaderMinusLMinusCritical_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusCritical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusCritical_C*>(UTextStyleMinusHeaderMinusLMinusCritical_C::StaticClass()->DefaultObject);

	return Default;
}

}


