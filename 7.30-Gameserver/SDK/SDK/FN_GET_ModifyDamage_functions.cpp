#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_ModifyDamage.GET_ModifyDamage_C
// (None)

class UClass* UGET_ModifyDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_ModifyDamage_C");

	return Clss;
}


// GET_ModifyDamage_C GET_ModifyDamage.Default__GET_ModifyDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_ModifyDamage_C* UGET_ModifyDamage_C::GetDefaultObj()
{
	static class UGET_ModifyDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_ModifyDamage_C*>(UGET_ModifyDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


