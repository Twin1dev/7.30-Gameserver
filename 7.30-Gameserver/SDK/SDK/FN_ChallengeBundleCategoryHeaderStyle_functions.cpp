#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChallengeBundleCategoryHeaderStyle.ChallengeBundleCategoryHeaderStyle_C
// (None)

class UClass* UChallengeBundleCategoryHeaderStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeBundleCategoryHeaderStyle_C");

	return Clss;
}


// ChallengeBundleCategoryHeaderStyle_C ChallengeBundleCategoryHeaderStyle.Default__ChallengeBundleCategoryHeaderStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeBundleCategoryHeaderStyle_C* UChallengeBundleCategoryHeaderStyle_C::GetDefaultObj()
{
	static class UChallengeBundleCategoryHeaderStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeBundleCategoryHeaderStyle_C*>(UChallengeBundleCategoryHeaderStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


