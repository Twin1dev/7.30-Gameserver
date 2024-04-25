#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-S-LightGray.TextStyle-Base-XS-B-S-LightGray_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusSMinusLightGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-S-LightGray_C");

	return Clss;
}


// TextStyle-Base-XS-B-S-LightGray_C TextStyle-Base-XS-B-S-LightGray.Default__TextStyle-Base-XS-B-S-LightGray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusSMinusLightGray_C* UTextStyleMinusBaseMinusXSMinusBMinusSMinusLightGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusSMinusLightGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusSMinusLightGray_C*>(UTextStyleMinusBaseMinusXSMinusBMinusSMinusLightGray_C::StaticClass()->DefaultObject);

	return Default;
}

}


