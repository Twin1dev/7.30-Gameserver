#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AthenaBlade_CameraAnim_BP1.AthenaBlade_CameraAnim_BP1_C
// (None)

class UClass* UAthenaBlade_CameraAnim_BP1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBlade_CameraAnim_BP1_C");

	return Clss;
}


// AthenaBlade_CameraAnim_BP1_C AthenaBlade_CameraAnim_BP1.Default__AthenaBlade_CameraAnim_BP1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBlade_CameraAnim_BP1_C* UAthenaBlade_CameraAnim_BP1_C::GetDefaultObj()
{
	static class UAthenaBlade_CameraAnim_BP1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBlade_CameraAnim_BP1_C*>(UAthenaBlade_CameraAnim_BP1_C::StaticClass()->DefaultObject);

	return Default;
}

}


