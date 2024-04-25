#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Aqua_M.ButtonStyle-Skew_Aqua_M_C
// (None)

class UClass* UButtonStyleMinusSkew_Aqua_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Aqua_M_C");

	return Clss;
}


// ButtonStyle-Skew_Aqua_M_C ButtonStyle-Skew_Aqua_M.Default__ButtonStyle-Skew_Aqua_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Aqua_M_C* UButtonStyleMinusSkew_Aqua_M_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Aqua_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Aqua_M_C*>(UButtonStyleMinusSkew_Aqua_M_C::StaticClass()->DefaultObject);

	return Default;
}

}


