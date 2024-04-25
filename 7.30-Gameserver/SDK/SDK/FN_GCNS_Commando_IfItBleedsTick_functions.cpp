#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Commando_IfItBleedsTick.GCNS_Commando_IfItBleedsTick_C
// (None)

class UClass* UGCNS_Commando_IfItBleedsTick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Commando_IfItBleedsTick_C");

	return Clss;
}


// GCNS_Commando_IfItBleedsTick_C GCNS_Commando_IfItBleedsTick.Default__GCNS_Commando_IfItBleedsTick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Commando_IfItBleedsTick_C* UGCNS_Commando_IfItBleedsTick_C::GetDefaultObj()
{
	static class UGCNS_Commando_IfItBleedsTick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Commando_IfItBleedsTick_C*>(UGCNS_Commando_IfItBleedsTick_C::StaticClass()->DefaultObject);

	return Default;
}

}


