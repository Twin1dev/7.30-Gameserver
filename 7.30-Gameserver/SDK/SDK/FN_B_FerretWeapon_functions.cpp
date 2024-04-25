#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FerretWeapon.B_FerretWeapon_C
// (Actor)

class UClass* AB_FerretWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FerretWeapon_C");

	return Clss;
}


// B_FerretWeapon_C B_FerretWeapon.Default__B_FerretWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_FerretWeapon_C* AB_FerretWeapon_C::GetDefaultObj()
{
	static class AB_FerretWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_FerretWeapon_C*>(AB_FerretWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


