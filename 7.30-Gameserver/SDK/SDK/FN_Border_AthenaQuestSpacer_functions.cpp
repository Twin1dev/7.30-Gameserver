#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_AthenaQuestSpacer.Border_AthenaQuestSpacer_C
// (None)

class UClass* UBorder_AthenaQuestSpacer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_AthenaQuestSpacer_C");

	return Clss;
}


// Border_AthenaQuestSpacer_C Border_AthenaQuestSpacer.Default__Border_AthenaQuestSpacer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_AthenaQuestSpacer_C* UBorder_AthenaQuestSpacer_C::GetDefaultObj()
{
	static class UBorder_AthenaQuestSpacer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_AthenaQuestSpacer_C*>(UBorder_AthenaQuestSpacer_C::StaticClass()->DefaultObject);

	return Default;
}

}


