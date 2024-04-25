#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C
// (None)

class UClass* UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C");

	return Clss;
}


// GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C GA_Athena_Instance_PlaysetGrenadeWithTrajectory.Default__GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C* UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::GetDefaultObj()
{
	static class UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C*>(UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaysetItemDefinition*  OutData                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C", "GetActivePlaysetData");

	Params::UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_GetActivePlaysetData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutData != nullptr)
		*OutData = Parms.OutData;

}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetPlaysetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         Projectile_Reference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::SetPlaysetData(class AFortProjectileBase* Projectile_Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C", "SetPlaysetData");

	Params::UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_SetPlaysetData_Params Parms{};

	Parms.Projectile_Reference = Projectile_Reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::SetActivePlaysetOnPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C", "SetActivePlaysetOnPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         K2Node_Event_Projectile_Reference                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Prj_Athena_PlaysetGrenade_C*K2Node_DynamicCast_AsB_Prj_Athena_Playset_Grenade                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_PlayerController_C*  K2Node_DynamicCast_AsAthena_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory(int32 EntryPoint, class AFortProjectileBase* K2Node_Event_Projectile_Reference, class AB_Prj_Athena_PlaysetGrenade_C* K2Node_DynamicCast_AsB_Prj_Athena_Playset_Grenade, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C", "ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory");

	Params::UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Projectile_Reference = K2Node_Event_Projectile_Reference;
	Parms.K2Node_DynamicCast_AsB_Prj_Athena_Playset_Grenade = K2Node_DynamicCast_AsB_Prj_Athena_Playset_Grenade;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Player_Controller = K2Node_DynamicCast_AsAthena_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


