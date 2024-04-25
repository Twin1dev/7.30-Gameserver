#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-HUD-StaminaBarMax.TextStyle-Base-XS-HUD-StaminaBarMax_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusHUDMinusStaminaBarMax_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-HUD-StaminaBarMax_C");

	return Clss;
}


// TextStyle-Base-XS-HUD-StaminaBarMax_C TextStyle-Base-XS-HUD-StaminaBarMax.Default__TextStyle-Base-XS-HUD-StaminaBarMax_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusHUDMinusStaminaBarMax_C* UTextStyleMinusBaseMinusXSMinusHUDMinusStaminaBarMax_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusHUDMinusStaminaBarMax_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusHUDMinusStaminaBarMax_C*>(UTextStyleMinusBaseMinusXSMinusHUDMinusStaminaBarMax_C::StaticClass()->DefaultObject);

	return Default;
}

}


