#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Melee_GenericDamageMakeWeakspot.GE_Melee_GenericDamageMakeWeakspot_C
// (None)

class UClass* UGE_Melee_GenericDamageMakeWeakspot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Melee_GenericDamageMakeWeakspot_C");

	return Clss;
}


// GE_Melee_GenericDamageMakeWeakspot_C GE_Melee_GenericDamageMakeWeakspot.Default__GE_Melee_GenericDamageMakeWeakspot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Melee_GenericDamageMakeWeakspot_C* UGE_Melee_GenericDamageMakeWeakspot_C::GetDefaultObj()
{
	static class UGE_Melee_GenericDamageMakeWeakspot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Melee_GenericDamageMakeWeakspot_C*>(UGE_Melee_GenericDamageMakeWeakspot_C::StaticClass()->DefaultObject);

	return Default;
}

}


