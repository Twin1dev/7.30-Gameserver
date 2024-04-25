#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TransferKnockback.GE_TransferKnockback_C
// (None)

class UClass* UGE_TransferKnockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TransferKnockback_C");

	return Clss;
}


// GE_TransferKnockback_C GE_TransferKnockback.Default__GE_TransferKnockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TransferKnockback_C* UGE_TransferKnockback_C::GetDefaultObj()
{
	static class UGE_TransferKnockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TransferKnockback_C*>(UGE_TransferKnockback_C::StaticClass()->DefaultObject);

	return Default;
}

}


