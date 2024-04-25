#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-QuestMapNode.ButtonStyle-QuestMapNode_C
// (None)

class UClass* UButtonStyleMinusQuestMapNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-QuestMapNode_C");

	return Clss;
}


// ButtonStyle-QuestMapNode_C ButtonStyle-QuestMapNode.Default__ButtonStyle-QuestMapNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusQuestMapNode_C* UButtonStyleMinusQuestMapNode_C::GetDefaultObj()
{
	static class UButtonStyleMinusQuestMapNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusQuestMapNode_C*>(UButtonStyleMinusQuestMapNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


