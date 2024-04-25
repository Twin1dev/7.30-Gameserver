#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_PassHeader_Locked.Border_PassHeader_Locked_C
// (None)

class UClass* UBorder_PassHeader_Locked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_PassHeader_Locked_C");

	return Clss;
}


// Border_PassHeader_Locked_C Border_PassHeader_Locked.Default__Border_PassHeader_Locked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_PassHeader_Locked_C* UBorder_PassHeader_Locked_C::GetDefaultObj()
{
	static class UBorder_PassHeader_Locked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_PassHeader_Locked_C*>(UBorder_PassHeader_Locked_C::StaticClass()->DefaultObject);

	return Default;
}

}


