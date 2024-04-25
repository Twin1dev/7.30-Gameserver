#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AthenaBlade_Camera_Swing1_BP.AthenaBlade_Camera_Swing1_BP_C
// (None)

class UClass* UAthenaBlade_Camera_Swing1_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBlade_Camera_Swing1_BP_C");

	return Clss;
}


// AthenaBlade_Camera_Swing1_BP_C AthenaBlade_Camera_Swing1_BP.Default__AthenaBlade_Camera_Swing1_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBlade_Camera_Swing1_BP_C* UAthenaBlade_Camera_Swing1_BP_C::GetDefaultObj()
{
	static class UAthenaBlade_Camera_Swing1_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBlade_Camera_Swing1_BP_C*>(UAthenaBlade_Camera_Swing1_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


