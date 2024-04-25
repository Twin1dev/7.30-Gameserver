#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Trap_BouncePad_LowGravity_NoFX.GE_Trap_BouncePad_LowGravity_NoFX_C
// (None)

class UClass* UGE_Trap_BouncePad_LowGravity_NoFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Trap_BouncePad_LowGravity_NoFX_C");

	return Clss;
}


// GE_Trap_BouncePad_LowGravity_NoFX_C GE_Trap_BouncePad_LowGravity_NoFX.Default__GE_Trap_BouncePad_LowGravity_NoFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Trap_BouncePad_LowGravity_NoFX_C* UGE_Trap_BouncePad_LowGravity_NoFX_C::GetDefaultObj()
{
	static class UGE_Trap_BouncePad_LowGravity_NoFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Trap_BouncePad_LowGravity_NoFX_C*>(UGE_Trap_BouncePad_LowGravity_NoFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


