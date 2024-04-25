#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RewardOrVerticalWidget.RewardOrVerticalWidget_C
// (None)

class UClass* URewardOrVerticalWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardOrVerticalWidget_C");

	return Clss;
}


// RewardOrVerticalWidget_C RewardOrVerticalWidget.Default__RewardOrVerticalWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URewardOrVerticalWidget_C* URewardOrVerticalWidget_C::GetDefaultObj()
{
	static class URewardOrVerticalWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URewardOrVerticalWidget_C*>(URewardOrVerticalWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


