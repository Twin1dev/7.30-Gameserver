#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeBundleCategoryHeaderBackground_Confetti.ChallengeBundleCategoryHeaderBackground_Confetti_C
// (None)

class UClass* UChallengeBundleCategoryHeaderBackground_Confetti_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeBundleCategoryHeaderBackground_Confetti_C");

	return Clss;
}


// ChallengeBundleCategoryHeaderBackground_Confetti_C ChallengeBundleCategoryHeaderBackground_Confetti.Default__ChallengeBundleCategoryHeaderBackground_Confetti_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeBundleCategoryHeaderBackground_Confetti_C* UChallengeBundleCategoryHeaderBackground_Confetti_C::GetDefaultObj()
{
	static class UChallengeBundleCategoryHeaderBackground_Confetti_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeBundleCategoryHeaderBackground_Confetti_C*>(UChallengeBundleCategoryHeaderBackground_Confetti_C::StaticClass()->DefaultObject);

	return Default;
}

}


