#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_KnockbackActive.GE_KnockbackActive_C
// (None)

class UClass* UGE_KnockbackActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_KnockbackActive_C");

	return Clss;
}


// GE_KnockbackActive_C GE_KnockbackActive.Default__GE_KnockbackActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_KnockbackActive_C* UGE_KnockbackActive_C::GetDefaultObj()
{
	static class UGE_KnockbackActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_KnockbackActive_C*>(UGE_KnockbackActive_C::StaticClass()->DefaultObject);

	return Default;
}

}


