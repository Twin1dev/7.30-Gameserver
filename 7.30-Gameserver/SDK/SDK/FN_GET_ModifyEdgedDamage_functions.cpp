#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_ModifyEdgedDamage.GET_ModifyEdgedDamage_C
// (None)

class UClass* UGET_ModifyEdgedDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_ModifyEdgedDamage_C");

	return Clss;
}


// GET_ModifyEdgedDamage_C GET_ModifyEdgedDamage.Default__GET_ModifyEdgedDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_ModifyEdgedDamage_C* UGET_ModifyEdgedDamage_C::GetDefaultObj()
{
	static class UGET_ModifyEdgedDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_ModifyEdgedDamage_C*>(UGET_ModifyEdgedDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


