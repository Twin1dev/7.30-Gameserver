#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-QuestPrimary-L2.ButtonStyle-QuestPrimary-L2_C
// (None)

class UClass* UButtonStyleMinusQuestPrimaryMinusL2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-QuestPrimary-L2_C");

	return Clss;
}


// ButtonStyle-QuestPrimary-L2_C ButtonStyle-QuestPrimary-L2.Default__ButtonStyle-QuestPrimary-L2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusQuestPrimaryMinusL2_C* UButtonStyleMinusQuestPrimaryMinusL2_C::GetDefaultObj()
{
	static class UButtonStyleMinusQuestPrimaryMinusL2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusQuestPrimaryMinusL2_C*>(UButtonStyleMinusQuestPrimaryMinusL2_C::StaticClass()->DefaultObject);

	return Default;
}

}


