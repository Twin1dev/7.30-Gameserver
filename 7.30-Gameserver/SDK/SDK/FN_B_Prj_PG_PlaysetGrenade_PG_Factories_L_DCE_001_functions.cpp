#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001.B_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C
// (Actor)

class UClass* AB_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C");

	return Clss;
}


// B_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C B_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001.Default__B_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C* AB_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C::GetDefaultObj()
{
	static class AB_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C*>(AB_Prj_PG_PlaysetGrenade_PG_Factories_L_DCE_001_C::StaticClass()->DefaultObject);

	return Default;
}

}


