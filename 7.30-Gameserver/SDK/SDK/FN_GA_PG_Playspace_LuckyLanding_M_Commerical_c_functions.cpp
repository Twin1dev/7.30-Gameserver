#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PG_Playspace_LuckyLanding_M_Commerical_c.GA_PG_Playspace_LuckyLanding_M_Commerical_c_C
// (None)

class UClass* UGA_PG_Playspace_LuckyLanding_M_Commerical_c_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PG_Playspace_LuckyLanding_M_Commerical_c_C");

	return Clss;
}


// GA_PG_Playspace_LuckyLanding_M_Commerical_c_C GA_PG_Playspace_LuckyLanding_M_Commerical_c.Default__GA_PG_Playspace_LuckyLanding_M_Commerical_c_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PG_Playspace_LuckyLanding_M_Commerical_c_C* UGA_PG_Playspace_LuckyLanding_M_Commerical_c_C::GetDefaultObj()
{
	static class UGA_PG_Playspace_LuckyLanding_M_Commerical_c_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PG_Playspace_LuckyLanding_M_Commerical_c_C*>(UGA_PG_Playspace_LuckyLanding_M_Commerical_c_C::StaticClass()->DefaultObject);

	return Default;
}

}


