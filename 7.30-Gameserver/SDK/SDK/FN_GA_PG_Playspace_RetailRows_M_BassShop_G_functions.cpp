#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PG_Playspace_RetailRows_M_BassShop_G.GA_PG_Playspace_RetailRows_M_BassShop_G_C
// (None)

class UClass* UGA_PG_Playspace_RetailRows_M_BassShop_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PG_Playspace_RetailRows_M_BassShop_G_C");

	return Clss;
}


// GA_PG_Playspace_RetailRows_M_BassShop_G_C GA_PG_Playspace_RetailRows_M_BassShop_G.Default__GA_PG_Playspace_RetailRows_M_BassShop_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PG_Playspace_RetailRows_M_BassShop_G_C* UGA_PG_Playspace_RetailRows_M_BassShop_G_C::GetDefaultObj()
{
	static class UGA_PG_Playspace_RetailRows_M_BassShop_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PG_Playspace_RetailRows_M_BassShop_G_C*>(UGA_PG_Playspace_RetailRows_M_BassShop_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


