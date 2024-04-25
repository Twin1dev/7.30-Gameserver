#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-S_LightGray.TextStyle-Base-XS-S_LightGray_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusS_LightGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-S_LightGray_C");

	return Clss;
}


// TextStyle-Base-XS-S_LightGray_C TextStyle-Base-XS-S_LightGray.Default__TextStyle-Base-XS-S_LightGray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusS_LightGray_C* UTextStyleMinusBaseMinusXSMinusS_LightGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusS_LightGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusS_LightGray_C*>(UTextStyleMinusBaseMinusXSMinusS_LightGray_C::StaticClass()->DefaultObject);

	return Default;
}

}


