#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TopBar-TimerFlash.Border-TopBar-TimerFlash_C
// (None)

class UClass* UBorderMinusTopBarMinusTimerFlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TopBar-TimerFlash_C");

	return Clss;
}


// Border-TopBar-TimerFlash_C Border-TopBar-TimerFlash.Default__Border-TopBar-TimerFlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTopBarMinusTimerFlash_C* UBorderMinusTopBarMinusTimerFlash_C::GetDefaultObj()
{
	static class UBorderMinusTopBarMinusTimerFlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTopBarMinusTimerFlash_C*>(UBorderMinusTopBarMinusTimerFlash_C::StaticClass()->DefaultObject);

	return Default;
}

}


