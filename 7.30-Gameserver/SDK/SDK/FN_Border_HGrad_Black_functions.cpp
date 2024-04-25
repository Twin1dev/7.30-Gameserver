#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_HGrad_Black.Border_HGrad_Black_C
// (None)

class UClass* UBorder_HGrad_Black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_HGrad_Black_C");

	return Clss;
}


// Border_HGrad_Black_C Border_HGrad_Black.Default__Border_HGrad_Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_HGrad_Black_C* UBorder_HGrad_Black_C::GetDefaultObj()
{
	static class UBorder_HGrad_Black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_HGrad_Black_C*>(UBorder_HGrad_Black_C::StaticClass()->DefaultObject);

	return Default;
}

}


