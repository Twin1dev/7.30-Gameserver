#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Commando_FlakVest_RemoveStack.GC_Commando_FlakVest_RemoveStack_C
// (None)

class UClass* UGC_Commando_FlakVest_RemoveStack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Commando_FlakVest_RemoveStack_C");

	return Clss;
}


// GC_Commando_FlakVest_RemoveStack_C GC_Commando_FlakVest_RemoveStack.Default__GC_Commando_FlakVest_RemoveStack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Commando_FlakVest_RemoveStack_C* UGC_Commando_FlakVest_RemoveStack_C::GetDefaultObj()
{
	static class UGC_Commando_FlakVest_RemoveStack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Commando_FlakVest_RemoveStack_C*>(UGC_Commando_FlakVest_RemoveStack_C::StaticClass()->DefaultObject);

	return Default;
}

}


