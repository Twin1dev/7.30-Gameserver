#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InviteRequest.InviteRequest_C
// (None)

class UClass* UInviteRequest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InviteRequest_C");

	return Clss;
}


// InviteRequest_C InviteRequest.Default__InviteRequest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInviteRequest_C* UInviteRequest_C::GetDefaultObj()
{
	static class UInviteRequest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInviteRequest_C*>(UInviteRequest_C::StaticClass()->DefaultObject);

	return Default;
}

}


