#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Athena_Backpack.GCN_Athena_Backpack_C
// (Actor)

class UClass* AGCN_Athena_Backpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Athena_Backpack_C");

	return Clss;
}


// GCN_Athena_Backpack_C GCN_Athena_Backpack.Default__GCN_Athena_Backpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Athena_Backpack_C* AGCN_Athena_Backpack_C::GetDefaultObj()
{
	static class AGCN_Athena_Backpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Athena_Backpack_C*>(AGCN_Athena_Backpack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Athena_Backpack.GCN_Athena_Backpack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Athena_Backpack_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Athena_Backpack_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


