#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e.B_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C
// (Actor)

class UClass* AB_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C");

	return Clss;
}


// B_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C B_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e.Default__B_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C* AB_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C::GetDefaultObj()
{
	static class AB_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C*>(AB_Prj_PG_PlaysetGrenade_Tilted_M_Apartment_e_C::StaticClass()->DefaultObject);

	return Default;
}

}


