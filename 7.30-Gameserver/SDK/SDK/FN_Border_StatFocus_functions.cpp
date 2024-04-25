#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_StatFocus.Border_StatFocus_C
// (None)

class UClass* UBorder_StatFocus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_StatFocus_C");

	return Clss;
}


// Border_StatFocus_C Border_StatFocus.Default__Border_StatFocus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_StatFocus_C* UBorder_StatFocus_C::GetDefaultObj()
{
	static class UBorder_StatFocus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_StatFocus_C*>(UBorder_StatFocus_C::StaticClass()->DefaultObject);

	return Default;
}

}


