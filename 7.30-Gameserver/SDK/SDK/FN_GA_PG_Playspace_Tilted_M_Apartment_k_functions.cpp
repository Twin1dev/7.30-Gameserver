#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PG_Playspace_Tilted_M_Apartment_k.GA_PG_Playspace_Tilted_M_Apartment_k_C
// (None)

class UClass* UGA_PG_Playspace_Tilted_M_Apartment_k_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PG_Playspace_Tilted_M_Apartment_k_C");

	return Clss;
}


// GA_PG_Playspace_Tilted_M_Apartment_k_C GA_PG_Playspace_Tilted_M_Apartment_k.Default__GA_PG_Playspace_Tilted_M_Apartment_k_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PG_Playspace_Tilted_M_Apartment_k_C* UGA_PG_Playspace_Tilted_M_Apartment_k_C::GetDefaultObj()
{
	static class UGA_PG_Playspace_Tilted_M_Apartment_k_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PG_Playspace_Tilted_M_Apartment_k_C*>(UGA_PG_Playspace_Tilted_M_Apartment_k_C::StaticClass()->DefaultObject);

	return Default;
}

}


