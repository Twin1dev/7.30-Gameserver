#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-QuestSecondary-L.ButtonStyle-QuestSecondary-L_C
// (None)

class UClass* UButtonStyleMinusQuestSecondaryMinusL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-QuestSecondary-L_C");

	return Clss;
}


// ButtonStyle-QuestSecondary-L_C ButtonStyle-QuestSecondary-L.Default__ButtonStyle-QuestSecondary-L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusQuestSecondaryMinusL_C* UButtonStyleMinusQuestSecondaryMinusL_C::GetDefaultObj()
{
	static class UButtonStyleMinusQuestSecondaryMinusL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusQuestSecondaryMinusL_C*>(UButtonStyleMinusQuestSecondaryMinusL_C::StaticClass()->DefaultObject);

	return Default;
}

}


