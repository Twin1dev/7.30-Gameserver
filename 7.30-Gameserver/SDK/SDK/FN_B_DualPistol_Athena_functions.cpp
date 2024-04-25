#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_DualPistol_Athena.B_DualPistol_Athena_C
// (Actor)

class UClass* AB_DualPistol_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_DualPistol_Athena_C");

	return Clss;
}


// B_DualPistol_Athena_C B_DualPistol_Athena.Default__B_DualPistol_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_DualPistol_Athena_C* AB_DualPistol_Athena_C::GetDefaultObj()
{
	static class AB_DualPistol_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_DualPistol_Athena_C*>(AB_DualPistol_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_DualPistol_Athena.B_DualPistol_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_DualPistol_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_DualPistol_Athena_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_DualPistol_Athena.B_DualPistol_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_DualPistol_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_DualPistol_Athena_C", "OnPlayWeaponFireFX");

	Params::AB_DualPistol_Athena_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_DualPistol_Athena.B_DualPistol_Athena_C.ExecuteUbergraph_B_DualPistol_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_DualPistol_Athena_C::ExecuteUbergraph_B_DualPistol_Athena(int32 EntryPoint, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_DualPistol_Athena_C", "ExecuteUbergraph_B_DualPistol_Athena");

	Params::AB_DualPistol_Athena_C_ExecuteUbergraph_B_DualPistol_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}

}


