#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Pass_Lobby_Birthday.Border_Pass_Lobby_Birthday_C
// (None)

class UClass* UBorder_Pass_Lobby_Birthday_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Pass_Lobby_Birthday_C");

	return Clss;
}


// Border_Pass_Lobby_Birthday_C Border_Pass_Lobby_Birthday.Default__Border_Pass_Lobby_Birthday_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Pass_Lobby_Birthday_C* UBorder_Pass_Lobby_Birthday_C::GetDefaultObj()
{
	static class UBorder_Pass_Lobby_Birthday_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Pass_Lobby_Birthday_C*>(UBorder_Pass_Lobby_Birthday_C::StaticClass()->DefaultObject);

	return Default;
}

}


