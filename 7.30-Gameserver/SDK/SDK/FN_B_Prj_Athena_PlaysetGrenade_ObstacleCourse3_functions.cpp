#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Athena_PlaysetGrenade_ObstacleCourse3.B_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C
// (Actor)

class UClass* AB_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C");

	return Clss;
}


// B_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C B_Prj_Athena_PlaysetGrenade_ObstacleCourse3.Default__B_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C* AB_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C::GetDefaultObj()
{
	static class AB_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C*>(AB_Prj_Athena_PlaysetGrenade_ObstacleCourse3_C::StaticClass()->DefaultObject);

	return Default;
}

}


