#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestVerticalRewardInfo.QuestVerticalRewardInfo_C
// (None)

class UClass* UQuestVerticalRewardInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestVerticalRewardInfo_C");

	return Clss;
}


// QuestVerticalRewardInfo_C QuestVerticalRewardInfo.Default__QuestVerticalRewardInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestVerticalRewardInfo_C* UQuestVerticalRewardInfo_C::GetDefaultObj()
{
	static class UQuestVerticalRewardInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestVerticalRewardInfo_C*>(UQuestVerticalRewardInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


