#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Pass_Lobby_14Days.Border_Pass_Lobby_14Days_C
// (None)

class UClass* UBorder_Pass_Lobby_14Days_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Pass_Lobby_14Days_C");

	return Clss;
}


// Border_Pass_Lobby_14Days_C Border_Pass_Lobby_14Days.Default__Border_Pass_Lobby_14Days_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Pass_Lobby_14Days_C* UBorder_Pass_Lobby_14Days_C::GetDefaultObj()
{
	static class UBorder_Pass_Lobby_14Days_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Pass_Lobby_14Days_C*>(UBorder_Pass_Lobby_14Days_C::StaticClass()->DefaultObject);

	return Default;
}

}


