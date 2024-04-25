#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_ModifyPhysicalDamage.GET_ModifyPhysicalDamage_C
// (None)

class UClass* UGET_ModifyPhysicalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_ModifyPhysicalDamage_C");

	return Clss;
}


// GET_ModifyPhysicalDamage_C GET_ModifyPhysicalDamage.Default__GET_ModifyPhysicalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_ModifyPhysicalDamage_C* UGET_ModifyPhysicalDamage_C::GetDefaultObj()
{
	static class UGET_ModifyPhysicalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_ModifyPhysicalDamage_C*>(UGET_ModifyPhysicalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


