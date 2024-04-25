#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeBundleCategoryHeaderBackground_Vortex.ChallengeBundleCategoryHeaderBackground_Vortex_C
// (None)

class UClass* UChallengeBundleCategoryHeaderBackground_Vortex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeBundleCategoryHeaderBackground_Vortex_C");

	return Clss;
}


// ChallengeBundleCategoryHeaderBackground_Vortex_C ChallengeBundleCategoryHeaderBackground_Vortex.Default__ChallengeBundleCategoryHeaderBackground_Vortex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeBundleCategoryHeaderBackground_Vortex_C* UChallengeBundleCategoryHeaderBackground_Vortex_C::GetDefaultObj()
{
	static class UChallengeBundleCategoryHeaderBackground_Vortex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeBundleCategoryHeaderBackground_Vortex_C*>(UChallengeBundleCategoryHeaderBackground_Vortex_C::StaticClass()->DefaultObject);

	return Default;
}

}


