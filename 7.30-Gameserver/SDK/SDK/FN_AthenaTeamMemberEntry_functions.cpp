#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaTeamMemberEntry.AthenaTeamMemberEntry_C
// (None)

class UClass* UAthenaTeamMemberEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaTeamMemberEntry_C");

	return Clss;
}


// AthenaTeamMemberEntry_C AthenaTeamMemberEntry.Default__AthenaTeamMemberEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaTeamMemberEntry_C* UAthenaTeamMemberEntry_C::GetDefaultObj()
{
	static class UAthenaTeamMemberEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaTeamMemberEntry_C*>(UAthenaTeamMemberEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


