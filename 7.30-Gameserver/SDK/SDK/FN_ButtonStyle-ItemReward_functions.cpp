#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-ItemReward.ButtonStyle-ItemReward_C
// (None)

class UClass* UButtonStyleMinusItemReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-ItemReward_C");

	return Clss;
}


// ButtonStyle-ItemReward_C ButtonStyle-ItemReward.Default__ButtonStyle-ItemReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusItemReward_C* UButtonStyleMinusItemReward_C::GetDefaultObj()
{
	static class UButtonStyleMinusItemReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusItemReward_C*>(UButtonStyleMinusItemReward_C::StaticClass()->DefaultObject);

	return Default;
}

}


