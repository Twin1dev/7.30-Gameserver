#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PG_Playspace_PG_Factories_M_Factory_e.GA_PG_Playspace_PG_Factories_M_Factory_e_C
// (None)

class UClass* UGA_PG_Playspace_PG_Factories_M_Factory_e_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PG_Playspace_PG_Factories_M_Factory_e_C");

	return Clss;
}


// GA_PG_Playspace_PG_Factories_M_Factory_e_C GA_PG_Playspace_PG_Factories_M_Factory_e.Default__GA_PG_Playspace_PG_Factories_M_Factory_e_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PG_Playspace_PG_Factories_M_Factory_e_C* UGA_PG_Playspace_PG_Factories_M_Factory_e_C::GetDefaultObj()
{
	static class UGA_PG_Playspace_PG_Factories_M_Factory_e_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PG_Playspace_PG_Factories_M_Factory_e_C*>(UGA_PG_Playspace_PG_Factories_M_Factory_e_C::StaticClass()->DefaultObject);

	return Default;
}

}


