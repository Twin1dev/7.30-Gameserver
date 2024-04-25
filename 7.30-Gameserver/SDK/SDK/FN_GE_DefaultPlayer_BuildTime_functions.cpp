#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DefaultPlayer_BuildTime.GE_DefaultPlayer_BuildTime_C
// (None)

class UClass* UGE_DefaultPlayer_BuildTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DefaultPlayer_BuildTime_C");

	return Clss;
}


// GE_DefaultPlayer_BuildTime_C GE_DefaultPlayer_BuildTime.Default__GE_DefaultPlayer_BuildTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DefaultPlayer_BuildTime_C* UGE_DefaultPlayer_BuildTime_C::GetDefaultObj()
{
	static class UGE_DefaultPlayer_BuildTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DefaultPlayer_BuildTime_C*>(UGE_DefaultPlayer_BuildTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


