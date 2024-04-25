#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Outlander_PhaseCannon_Fire.GCN_Outlander_PhaseCannon_Fire_C
// (None)

class UClass* UGCN_Outlander_PhaseCannon_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Outlander_PhaseCannon_Fire_C");

	return Clss;
}


// GCN_Outlander_PhaseCannon_Fire_C GCN_Outlander_PhaseCannon_Fire.Default__GCN_Outlander_PhaseCannon_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Outlander_PhaseCannon_Fire_C* UGCN_Outlander_PhaseCannon_Fire_C::GetDefaultObj()
{
	static class UGCN_Outlander_PhaseCannon_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Outlander_PhaseCannon_Fire_C*>(UGCN_Outlander_PhaseCannon_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


