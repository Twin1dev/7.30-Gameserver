#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerDBNO_MovementSpeed.GE_PlayerDBNO_MovementSpeed_C
// (None)

class UClass* UGE_PlayerDBNO_MovementSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerDBNO_MovementSpeed_C");

	return Clss;
}


// GE_PlayerDBNO_MovementSpeed_C GE_PlayerDBNO_MovementSpeed.Default__GE_PlayerDBNO_MovementSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerDBNO_MovementSpeed_C* UGE_PlayerDBNO_MovementSpeed_C::GetDefaultObj()
{
	static class UGE_PlayerDBNO_MovementSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerDBNO_MovementSpeed_C*>(UGE_PlayerDBNO_MovementSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


