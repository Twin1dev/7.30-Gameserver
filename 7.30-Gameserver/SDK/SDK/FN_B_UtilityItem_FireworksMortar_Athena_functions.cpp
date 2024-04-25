#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_UtilityItem_FireworksMortar_Athena.B_UtilityItem_FireworksMortar_Athena_C
// (Actor)

class UClass* AB_UtilityItem_FireworksMortar_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_UtilityItem_FireworksMortar_Athena_C");

	return Clss;
}


// B_UtilityItem_FireworksMortar_Athena_C B_UtilityItem_FireworksMortar_Athena.Default__B_UtilityItem_FireworksMortar_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_UtilityItem_FireworksMortar_Athena_C* AB_UtilityItem_FireworksMortar_Athena_C::GetDefaultObj()
{
	static class AB_UtilityItem_FireworksMortar_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_UtilityItem_FireworksMortar_Athena_C*>(AB_UtilityItem_FireworksMortar_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_UtilityItem_FireworksMortar_Athena.B_UtilityItem_FireworksMortar_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_UtilityItem_FireworksMortar_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_UtilityItem_FireworksMortar_Athena_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


