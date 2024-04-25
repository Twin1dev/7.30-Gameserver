#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Pass_Lobby_Purchasable_Solid.Border_Pass_Lobby_Purchasable_Solid_C
// (None)

class UClass* UBorder_Pass_Lobby_Purchasable_Solid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Pass_Lobby_Purchasable_Solid_C");

	return Clss;
}


// Border_Pass_Lobby_Purchasable_Solid_C Border_Pass_Lobby_Purchasable_Solid.Default__Border_Pass_Lobby_Purchasable_Solid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Pass_Lobby_Purchasable_Solid_C* UBorder_Pass_Lobby_Purchasable_Solid_C::GetDefaultObj()
{
	static class UBorder_Pass_Lobby_Purchasable_Solid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Pass_Lobby_Purchasable_Solid_C*>(UBorder_Pass_Lobby_Purchasable_Solid_C::StaticClass()->DefaultObject);

	return Default;
}

}


