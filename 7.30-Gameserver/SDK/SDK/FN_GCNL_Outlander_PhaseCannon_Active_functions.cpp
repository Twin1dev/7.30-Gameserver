#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Outlander_PhaseCannon_Active.GCNL_Outlander_PhaseCannon_Active_C
// (Actor)

class UClass* AGCNL_Outlander_PhaseCannon_Active_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Outlander_PhaseCannon_Active_C");

	return Clss;
}


// GCNL_Outlander_PhaseCannon_Active_C GCNL_Outlander_PhaseCannon_Active.Default__GCNL_Outlander_PhaseCannon_Active_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Outlander_PhaseCannon_Active_C* AGCNL_Outlander_PhaseCannon_Active_C::GetDefaultObj()
{
	static class AGCNL_Outlander_PhaseCannon_Active_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Outlander_PhaseCannon_Active_C*>(AGCNL_Outlander_PhaseCannon_Active_C::StaticClass()->DefaultObject);

	return Default;
}

}


