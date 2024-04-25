#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_ChallengeBundle_CustomOffsetTile.ButtonStyle_ChallengeBundle_CustomOffsetTile_C
// (None)

class UClass* UButtonStyle_ChallengeBundle_CustomOffsetTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_ChallengeBundle_CustomOffsetTile_C");

	return Clss;
}


// ButtonStyle_ChallengeBundle_CustomOffsetTile_C ButtonStyle_ChallengeBundle_CustomOffsetTile.Default__ButtonStyle_ChallengeBundle_CustomOffsetTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_ChallengeBundle_CustomOffsetTile_C* UButtonStyle_ChallengeBundle_CustomOffsetTile_C::GetDefaultObj()
{
	static class UButtonStyle_ChallengeBundle_CustomOffsetTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_ChallengeBundle_CustomOffsetTile_C*>(UButtonStyle_ChallengeBundle_CustomOffsetTile_C::StaticClass()->DefaultObject);

	return Default;
}

}


