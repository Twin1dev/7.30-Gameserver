#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FireworksMortar_Damage.GE_FireworksMortar_Damage_C
// (None)

class UClass* UGE_FireworksMortar_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FireworksMortar_Damage_C");

	return Clss;
}


// GE_FireworksMortar_Damage_C GE_FireworksMortar_Damage.Default__GE_FireworksMortar_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FireworksMortar_Damage_C* UGE_FireworksMortar_Damage_C::GetDefaultObj()
{
	static class UGE_FireworksMortar_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FireworksMortar_Damage_C*>(UGE_FireworksMortar_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


