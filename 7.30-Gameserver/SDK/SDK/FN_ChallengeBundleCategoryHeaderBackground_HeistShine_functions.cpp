#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeBundleCategoryHeaderBackground_HeistShine.ChallengeBundleCategoryHeaderBackground_HeistShine_C
// (None)

class UClass* UChallengeBundleCategoryHeaderBackground_HeistShine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeBundleCategoryHeaderBackground_HeistShine_C");

	return Clss;
}


// ChallengeBundleCategoryHeaderBackground_HeistShine_C ChallengeBundleCategoryHeaderBackground_HeistShine.Default__ChallengeBundleCategoryHeaderBackground_HeistShine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeBundleCategoryHeaderBackground_HeistShine_C* UChallengeBundleCategoryHeaderBackground_HeistShine_C::GetDefaultObj()
{
	static class UChallengeBundleCategoryHeaderBackground_HeistShine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeBundleCategoryHeaderBackground_HeistShine_C*>(UChallengeBundleCategoryHeaderBackground_HeistShine_C::StaticClass()->DefaultObject);

	return Default;
}

}


