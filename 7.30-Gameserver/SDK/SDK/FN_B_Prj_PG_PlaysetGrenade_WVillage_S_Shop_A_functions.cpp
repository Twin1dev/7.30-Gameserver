#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A.B_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C
// (Actor)

class UClass* AB_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C");

	return Clss;
}


// B_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C B_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A.Default__B_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C* AB_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C::GetDefaultObj()
{
	static class AB_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C*>(AB_Prj_PG_PlaysetGrenade_WVillage_S_Shop_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


