#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Sword_Pull_LoopingGC.GE_Sword_Pull_LoopingGC_C
// (None)

class UClass* UGE_Sword_Pull_LoopingGC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Sword_Pull_LoopingGC_C");

	return Clss;
}


// GE_Sword_Pull_LoopingGC_C GE_Sword_Pull_LoopingGC.Default__GE_Sword_Pull_LoopingGC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Sword_Pull_LoopingGC_C* UGE_Sword_Pull_LoopingGC_C::GetDefaultObj()
{
	static class UGE_Sword_Pull_LoopingGC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Sword_Pull_LoopingGC_C*>(UGE_Sword_Pull_LoopingGC_C::StaticClass()->DefaultObject);

	return Default;
}

}


