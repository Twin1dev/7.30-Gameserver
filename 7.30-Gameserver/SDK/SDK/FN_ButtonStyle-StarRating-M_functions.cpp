#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-StarRating-M.ButtonStyle-StarRating-M_C
// (None)

class UClass* UButtonStyleMinusStarRatingMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-StarRating-M_C");

	return Clss;
}


// ButtonStyle-StarRating-M_C ButtonStyle-StarRating-M.Default__ButtonStyle-StarRating-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusStarRatingMinusM_C* UButtonStyleMinusStarRatingMinusM_C::GetDefaultObj()
{
	static class UButtonStyleMinusStarRatingMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusStarRatingMinusM_C*>(UButtonStyleMinusStarRatingMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


