#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_SocialPanelExpand.ButtonStyle_SocialPanelExpand_C
// (None)

class UClass* UButtonStyle_SocialPanelExpand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_SocialPanelExpand_C");

	return Clss;
}


// ButtonStyle_SocialPanelExpand_C ButtonStyle_SocialPanelExpand.Default__ButtonStyle_SocialPanelExpand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_SocialPanelExpand_C* UButtonStyle_SocialPanelExpand_C::GetDefaultObj()
{
	static class UButtonStyle_SocialPanelExpand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_SocialPanelExpand_C*>(UButtonStyle_SocialPanelExpand_C::StaticClass()->DefaultObject);

	return Default;
}

}


