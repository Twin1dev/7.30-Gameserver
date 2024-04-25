#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Constructor_Firewall_Activate.GC_Constructor_Firewall_Activate_C
// (None)

class UClass* UGC_Constructor_Firewall_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Constructor_Firewall_Activate_C");

	return Clss;
}


// GC_Constructor_Firewall_Activate_C GC_Constructor_Firewall_Activate.Default__GC_Constructor_Firewall_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Constructor_Firewall_Activate_C* UGC_Constructor_Firewall_Activate_C::GetDefaultObj()
{
	static class UGC_Constructor_Firewall_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Constructor_Firewall_Activate_C*>(UGC_Constructor_Firewall_Activate_C::StaticClass()->DefaultObject);

	return Default;
}

}


