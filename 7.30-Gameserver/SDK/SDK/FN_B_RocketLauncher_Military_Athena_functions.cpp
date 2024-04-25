#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C
// (Actor)

class UClass* AB_RocketLauncher_Military_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_RocketLauncher_Military_Athena_C");

	return Clss;
}


// B_RocketLauncher_Military_Athena_C B_RocketLauncher_Military_Athena.Default__B_RocketLauncher_Military_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_RocketLauncher_Military_Athena_C* AB_RocketLauncher_Military_Athena_C::GetDefaultObj()
{
	static class AB_RocketLauncher_Military_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_RocketLauncher_Military_Athena_C*>(AB_RocketLauncher_Military_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Military_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_RocketLauncher_Military_Athena_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Persistent_Fire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Military_Athena_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_RocketLauncher_Military_Athena_C", "Muzzle Flash FX");

	Params::AB_RocketLauncher_Military_Athena_C_Muzzle_Flash_FX_Params Parms{};

	Parms.Persistent_Fire = Persistent_Fire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      ReloadStage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_RocketLauncher_Military_Athena_C::OnPlayReloadFX(enum class EFortReloadFXState ReloadStage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_RocketLauncher_Military_Athena_C", "OnPlayReloadFX");

	Params::AB_RocketLauncher_Military_Athena_C_OnPlayReloadFX_Params Parms{};

	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.SoundFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmitterTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParticleTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PhysMat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_RocketLauncher_Military_Athena_C::SoundFX(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_RocketLauncher_Military_Athena_C", "SoundFX");

	Params::AB_RocketLauncher_Military_Athena_C_SoundFX_Params Parms{};

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;
	Parms.Direction = Direction;
	Parms.Normal = Normal;
	Parms.BoneName = BoneName;
	Parms.PhysMat = PhysMat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Military_Athena_C::ResetDoOnce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_RocketLauncher_Military_Athena_C", "ResetDoOnce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.ExecuteUbergraph_B_RocketLauncher_Military_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Persistent_Fire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EFortReloadFXState      K2Node_Event_ReloadStage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReloading_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult1                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FName                        K2Node_CustomEvent_EventName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EmitterTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ParticleTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Velocity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Normal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           K2Node_CustomEvent_PhysMat                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_RocketLauncher_Military_Athena_C::ExecuteUbergraph_B_RocketLauncher_Military_Athena(int32 EntryPoint, const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable1, const struct FVector& Temp_struct_Variable2, int32 Temp_int_Variable, const struct FVector& Temp_struct_Variable3, const struct FVector& Temp_struct_Variable4, const struct FVector& Temp_struct_Variable5, const struct FVector& Temp_struct_Variable6, const struct FVector& Temp_struct_Variable7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable1, bool K2Node_Event_Persistent_Fire, bool Temp_bool_IsClosed_Variable1, const struct FVector& Temp_struct_Variable8, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool CallFunc_IsReloading_ReturnValue, const struct FVector& Temp_struct_Variable9, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& K2Node_Select1_Default, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult1, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, int32 K2Node_CustomEvent_ParticleTime, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Velocity, const struct FVector& K2Node_CustomEvent_Direction, const struct FVector& K2Node_CustomEvent_Normal, class FName K2Node_CustomEvent_BoneName, class UPhysicalMaterial* K2Node_CustomEvent_PhysMat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_RocketLauncher_Military_Athena_C", "ExecuteUbergraph_B_RocketLauncher_Military_Athena");

	Params::AB_RocketLauncher_Military_Athena_C_ExecuteUbergraph_B_RocketLauncher_Military_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.Temp_struct_Variable7 = Temp_struct_Variable7;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.K2Node_Event_Persistent_Fire = K2Node_Event_Persistent_Fire;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.Temp_struct_Variable8 = Temp_struct_Variable8;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.K2Node_Event_ReloadStage = K2Node_Event_ReloadStage;
	Parms.CallFunc_IsReloading_ReturnValue = CallFunc_IsReloading_ReturnValue;
	Parms.Temp_struct_Variable9 = Temp_struct_Variable9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult1 = CallFunc_K2_SetRelativeLocation_SweepHitResult1;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_EmitterTime = K2Node_CustomEvent_EmitterTime;
	Parms.K2Node_CustomEvent_ParticleTime = K2Node_CustomEvent_ParticleTime;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Velocity = K2Node_CustomEvent_Velocity;
	Parms.K2Node_CustomEvent_Direction = K2Node_CustomEvent_Direction;
	Parms.K2Node_CustomEvent_Normal = K2Node_CustomEvent_Normal;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_PhysMat = K2Node_CustomEvent_PhysMat;

	UObject::ProcessEvent(Func, &Parms);

}

}


