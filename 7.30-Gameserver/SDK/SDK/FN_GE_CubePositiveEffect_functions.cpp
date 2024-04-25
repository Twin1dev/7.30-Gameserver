#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CubePositiveEffect.GE_CubePositiveEffect_C
// (None)

class UClass* UGE_CubePositiveEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CubePositiveEffect_C");

	return Clss;
}


// GE_CubePositiveEffect_C GE_CubePositiveEffect.Default__GE_CubePositiveEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CubePositiveEffect_C* UGE_CubePositiveEffect_C::GetDefaultObj()
{
	static class UGE_CubePositiveEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CubePositiveEffect_C*>(UGE_CubePositiveEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


