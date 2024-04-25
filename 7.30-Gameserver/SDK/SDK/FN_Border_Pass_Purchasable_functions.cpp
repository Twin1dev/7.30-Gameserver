#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Pass_Purchasable.Border_Pass_Purchasable_C
// (None)

class UClass* UBorder_Pass_Purchasable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Pass_Purchasable_C");

	return Clss;
}


// Border_Pass_Purchasable_C Border_Pass_Purchasable.Default__Border_Pass_Purchasable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Pass_Purchasable_C* UBorder_Pass_Purchasable_C::GetDefaultObj()
{
	static class UBorder_Pass_Purchasable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Pass_Purchasable_C*>(UBorder_Pass_Purchasable_C::StaticClass()->DefaultObject);

	return Default;
}

}


