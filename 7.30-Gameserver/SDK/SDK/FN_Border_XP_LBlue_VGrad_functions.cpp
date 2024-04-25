#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_XP_LBlue_VGrad.Border_XP_LBlue_VGrad_C
// (None)

class UClass* UBorder_XP_LBlue_VGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_XP_LBlue_VGrad_C");

	return Clss;
}


// Border_XP_LBlue_VGrad_C Border_XP_LBlue_VGrad.Default__Border_XP_LBlue_VGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_XP_LBlue_VGrad_C* UBorder_XP_LBlue_VGrad_C::GetDefaultObj()
{
	static class UBorder_XP_LBlue_VGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_XP_LBlue_VGrad_C*>(UBorder_XP_LBlue_VGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


