#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_Constructor_Firewall_Cooldown.GCL_Constructor_Firewall_Cooldown_C
// (Actor)

class UClass* AGCL_Constructor_Firewall_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_Constructor_Firewall_Cooldown_C");

	return Clss;
}


// GCL_Constructor_Firewall_Cooldown_C GCL_Constructor_Firewall_Cooldown.Default__GCL_Constructor_Firewall_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCL_Constructor_Firewall_Cooldown_C* AGCL_Constructor_Firewall_Cooldown_C::GetDefaultObj()
{
	static class AGCL_Constructor_Firewall_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCL_Constructor_Firewall_Cooldown_C*>(AGCL_Constructor_Firewall_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


