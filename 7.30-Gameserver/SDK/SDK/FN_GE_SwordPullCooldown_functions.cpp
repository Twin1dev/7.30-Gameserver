#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SwordPullCooldown.GE_SwordPullCooldown_C
// (None)

class UClass* UGE_SwordPullCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SwordPullCooldown_C");

	return Clss;
}


// GE_SwordPullCooldown_C GE_SwordPullCooldown.Default__GE_SwordPullCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SwordPullCooldown_C* UGE_SwordPullCooldown_C::GetDefaultObj()
{
	static class UGE_SwordPullCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SwordPullCooldown_C*>(UGE_SwordPullCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


