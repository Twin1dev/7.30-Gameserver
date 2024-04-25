#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TopBar-Twitch.Border-TopBar-Twitch_C
// (None)

class UClass* UBorderMinusTopBarMinusTwitch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TopBar-Twitch_C");

	return Clss;
}


// Border-TopBar-Twitch_C Border-TopBar-Twitch.Default__Border-TopBar-Twitch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTopBarMinusTwitch_C* UBorderMinusTopBarMinusTwitch_C::GetDefaultObj()
{
	static class UBorderMinusTopBarMinusTwitch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTopBarMinusTwitch_C*>(UBorderMinusTopBarMinusTwitch_C::StaticClass()->DefaultObject);

	return Default;
}

}


