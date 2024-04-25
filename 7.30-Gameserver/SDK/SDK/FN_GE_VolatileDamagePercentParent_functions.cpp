#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_VolatileDamagePercentParent.GE_VolatileDamagePercentParent_C
// (None)

class UClass* UGE_VolatileDamagePercentParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_VolatileDamagePercentParent_C");

	return Clss;
}


// GE_VolatileDamagePercentParent_C GE_VolatileDamagePercentParent.Default__GE_VolatileDamagePercentParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_VolatileDamagePercentParent_C* UGE_VolatileDamagePercentParent_C::GetDefaultObj()
{
	static class UGE_VolatileDamagePercentParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_VolatileDamagePercentParent_C*>(UGE_VolatileDamagePercentParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


