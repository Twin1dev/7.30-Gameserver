#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_DudeBro_VortexLoop_Shake.B_DudeBro_VortexLoop_Shake_C
// (None)

class UClass* UB_DudeBro_VortexLoop_Shake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_DudeBro_VortexLoop_Shake_C");

	return Clss;
}


// B_DudeBro_VortexLoop_Shake_C B_DudeBro_VortexLoop_Shake.Default__B_DudeBro_VortexLoop_Shake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_DudeBro_VortexLoop_Shake_C* UB_DudeBro_VortexLoop_Shake_C::GetDefaultObj()
{
	static class UB_DudeBro_VortexLoop_Shake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_DudeBro_VortexLoop_Shake_C*>(UB_DudeBro_VortexLoop_Shake_C::StaticClass()->DefaultObject);

	return Default;
}

}


