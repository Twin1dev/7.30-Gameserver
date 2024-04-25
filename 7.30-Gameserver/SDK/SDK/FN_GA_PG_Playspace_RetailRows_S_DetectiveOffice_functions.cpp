#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PG_Playspace_RetailRows_S_DetectiveOffice.GA_PG_Playspace_RetailRows_S_DetectiveOffice_C
// (None)

class UClass* UGA_PG_Playspace_RetailRows_S_DetectiveOffice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PG_Playspace_RetailRows_S_DetectiveOffice_C");

	return Clss;
}


// GA_PG_Playspace_RetailRows_S_DetectiveOffice_C GA_PG_Playspace_RetailRows_S_DetectiveOffice.Default__GA_PG_Playspace_RetailRows_S_DetectiveOffice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PG_Playspace_RetailRows_S_DetectiveOffice_C* UGA_PG_Playspace_RetailRows_S_DetectiveOffice_C::GetDefaultObj()
{
	static class UGA_PG_Playspace_RetailRows_S_DetectiveOffice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PG_Playspace_RetailRows_S_DetectiveOffice_C*>(UGA_PG_Playspace_RetailRows_S_DetectiveOffice_C::StaticClass()->DefaultObject);

	return Default;
}

}


