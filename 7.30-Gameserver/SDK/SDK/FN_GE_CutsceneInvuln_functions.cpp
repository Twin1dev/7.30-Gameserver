#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CutsceneInvuln.GE_CutsceneInvuln_C
// (None)

class UClass* UGE_CutsceneInvuln_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CutsceneInvuln_C");

	return Clss;
}


// GE_CutsceneInvuln_C GE_CutsceneInvuln.Default__GE_CutsceneInvuln_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CutsceneInvuln_C* UGE_CutsceneInvuln_C::GetDefaultObj()
{
	static class UGE_CutsceneInvuln_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CutsceneInvuln_C*>(UGE_CutsceneInvuln_C::StaticClass()->DefaultObject);

	return Default;
}

}


