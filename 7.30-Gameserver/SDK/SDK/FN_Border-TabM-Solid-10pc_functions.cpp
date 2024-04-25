#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM-Solid-10pc.Border-TabM-Solid-10pc_C
// (None)

class UClass* UBorderMinusTabMMinusSolidMinus10pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM-Solid-10pc_C");

	return Clss;
}


// Border-TabM-Solid-10pc_C Border-TabM-Solid-10pc.Default__Border-TabM-Solid-10pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabMMinusSolidMinus10pc_C* UBorderMinusTabMMinusSolidMinus10pc_C::GetDefaultObj()
{
	static class UBorderMinusTabMMinusSolidMinus10pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabMMinusSolidMinus10pc_C*>(UBorderMinusTabMMinusSolidMinus10pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


