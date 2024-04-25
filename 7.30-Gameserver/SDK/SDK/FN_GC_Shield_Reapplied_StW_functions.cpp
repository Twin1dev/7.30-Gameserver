#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Shield_Reapplied_StW.GC_Shield_Reapplied_StW_C
// (None)

class UClass* UGC_Shield_Reapplied_StW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Shield_Reapplied_StW_C");

	return Clss;
}


// GC_Shield_Reapplied_StW_C GC_Shield_Reapplied_StW.Default__GC_Shield_Reapplied_StW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Shield_Reapplied_StW_C* UGC_Shield_Reapplied_StW_C::GetDefaultObj()
{
	static class UGC_Shield_Reapplied_StW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Shield_Reapplied_StW_C*>(UGC_Shield_Reapplied_StW_C::StaticClass()->DefaultObject);

	return Default;
}

}


