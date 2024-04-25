#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-72-Horizon-SeasonPass.TextStyle-Header-72-Horizon-SeasonPass_C
// (None)

class UClass* UTextStyleMinusHeaderMinus72MinusHorizonMinusSeasonPass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-72-Horizon-SeasonPass_C");

	return Clss;
}


// TextStyle-Header-72-Horizon-SeasonPass_C TextStyle-Header-72-Horizon-SeasonPass.Default__TextStyle-Header-72-Horizon-SeasonPass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinus72MinusHorizonMinusSeasonPass_C* UTextStyleMinusHeaderMinus72MinusHorizonMinusSeasonPass_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinus72MinusHorizonMinusSeasonPass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinus72MinusHorizonMinusSeasonPass_C*>(UTextStyleMinusHeaderMinus72MinusHorizonMinusSeasonPass_C::StaticClass()->DefaultObject);

	return Default;
}

}


