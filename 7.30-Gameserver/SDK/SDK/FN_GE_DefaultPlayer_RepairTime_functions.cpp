#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DefaultPlayer_RepairTime.GE_DefaultPlayer_RepairTime_C
// (None)

class UClass* UGE_DefaultPlayer_RepairTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DefaultPlayer_RepairTime_C");

	return Clss;
}


// GE_DefaultPlayer_RepairTime_C GE_DefaultPlayer_RepairTime.Default__GE_DefaultPlayer_RepairTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DefaultPlayer_RepairTime_C* UGE_DefaultPlayer_RepairTime_C::GetDefaultObj()
{
	static class UGE_DefaultPlayer_RepairTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DefaultPlayer_RepairTime_C*>(UGE_DefaultPlayer_RepairTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


