#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ColdBreath.GE_ColdBreath_C
// (None)

class UClass* UGE_ColdBreath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ColdBreath_C");

	return Clss;
}


// GE_ColdBreath_C GE_ColdBreath.Default__GE_ColdBreath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ColdBreath_C* UGE_ColdBreath_C::GetDefaultObj()
{
	static class UGE_ColdBreath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ColdBreath_C*>(UGE_ColdBreath_C::StaticClass()->DefaultObject);

	return Default;
}

}


