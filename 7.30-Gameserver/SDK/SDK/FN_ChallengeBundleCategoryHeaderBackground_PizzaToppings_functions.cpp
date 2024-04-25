#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeBundleCategoryHeaderBackground_PizzaToppings.ChallengeBundleCategoryHeaderBackground_PizzaToppings_C
// (None)

class UClass* UChallengeBundleCategoryHeaderBackground_PizzaToppings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeBundleCategoryHeaderBackground_PizzaToppings_C");

	return Clss;
}


// ChallengeBundleCategoryHeaderBackground_PizzaToppings_C ChallengeBundleCategoryHeaderBackground_PizzaToppings.Default__ChallengeBundleCategoryHeaderBackground_PizzaToppings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeBundleCategoryHeaderBackground_PizzaToppings_C* UChallengeBundleCategoryHeaderBackground_PizzaToppings_C::GetDefaultObj()
{
	static class UChallengeBundleCategoryHeaderBackground_PizzaToppings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeBundleCategoryHeaderBackground_PizzaToppings_C*>(UChallengeBundleCategoryHeaderBackground_PizzaToppings_C::StaticClass()->DefaultObject);

	return Default;
}

}


