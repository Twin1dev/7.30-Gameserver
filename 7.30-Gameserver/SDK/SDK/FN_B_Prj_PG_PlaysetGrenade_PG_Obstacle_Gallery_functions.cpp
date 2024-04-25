#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery.B_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c
// (Actor)

class UClass* AB_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c");

	return Clss;
}


// B_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c B_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery.Default__B_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c* AB_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c::GetDefaultObj()
{
	static class AB_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c*>(AB_Prj_PG_PlaysetGrenade_PG_Obstacle_Gallery_c::StaticClass()->DefaultObject);

	return Default;
}

}


