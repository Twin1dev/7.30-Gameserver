#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Pass_Free.Border_Pass_Free_C
// (None)

class UClass* UBorder_Pass_Free_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Pass_Free_C");

	return Clss;
}


// Border_Pass_Free_C Border_Pass_Free.Default__Border_Pass_Free_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Pass_Free_C* UBorder_Pass_Free_C::GetDefaultObj()
{
	static class UBorder_Pass_Free_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Pass_Free_C*>(UBorder_Pass_Free_C::StaticClass()->DefaultObject);

	return Default;
}

}


