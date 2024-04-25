#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PG_Playspace_PleasantPark_M_House_y.GA_PG_Playspace_PleasantPark_M_House_y_C
// (None)

class UClass* UGA_PG_Playspace_PleasantPark_M_House_y_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PG_Playspace_PleasantPark_M_House_y_C");

	return Clss;
}


// GA_PG_Playspace_PleasantPark_M_House_y_C GA_PG_Playspace_PleasantPark_M_House_y.Default__GA_PG_Playspace_PleasantPark_M_House_y_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PG_Playspace_PleasantPark_M_House_y_C* UGA_PG_Playspace_PleasantPark_M_House_y_C::GetDefaultObj()
{
	static class UGA_PG_Playspace_PleasantPark_M_House_y_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PG_Playspace_PleasantPark_M_House_y_C*>(UGA_PG_Playspace_PleasantPark_M_House_y_C::StaticClass()->DefaultObject);

	return Default;
}

}


