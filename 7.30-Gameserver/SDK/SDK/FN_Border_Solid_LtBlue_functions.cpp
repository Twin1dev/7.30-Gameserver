#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Solid_LtBlue.Border_Solid_LtBlue_C
// (None)

class UClass* UBorder_Solid_LtBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Solid_LtBlue_C");

	return Clss;
}


// Border_Solid_LtBlue_C Border_Solid_LtBlue.Default__Border_Solid_LtBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Solid_LtBlue_C* UBorder_Solid_LtBlue_C::GetDefaultObj()
{
	static class UBorder_Solid_LtBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Solid_LtBlue_C*>(UBorder_Solid_LtBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


