#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Pass_Heist.Border_Pass_Heist_C
// (None)

class UClass* UBorder_Pass_Heist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Pass_Heist_C");

	return Clss;
}


// Border_Pass_Heist_C Border_Pass_Heist.Default__Border_Pass_Heist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Pass_Heist_C* UBorder_Pass_Heist_C::GetDefaultObj()
{
	static class UBorder_Pass_Heist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Pass_Heist_C*>(UBorder_Pass_Heist_C::StaticClass()->DefaultObject);

	return Default;
}

}


