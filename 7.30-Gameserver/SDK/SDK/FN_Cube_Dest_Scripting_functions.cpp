#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cube_Dest_Scripting.Cube_Dest_Scripting_C
// (Actor)

class UClass* ACube_Dest_Scripting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cube_Dest_Scripting_C");

	return Clss;
}


// Cube_Dest_Scripting_C Cube_Dest_Scripting.Default__Cube_Dest_Scripting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACube_Dest_Scripting_C* ACube_Dest_Scripting_C::GetDefaultObj()
{
	static class ACube_Dest_Scripting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACube_Dest_Scripting_C*>(ACube_Dest_Scripting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.OnRep_IsCubeSinking
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACUBE_C*                     K2Node_DynamicCast_AsCUBE                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACube_Dest_Scripting_C::OnRep_IsCubeSinking(class ACUBE_C* K2Node_DynamicCast_AsCUBE, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Conv_ByteToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "OnRep_IsCubeSinking");

	Params::ACube_Dest_Scripting_C_OnRep_IsCubeSinking_Params Parms{};

	Parms.K2Node_DynamicCast_AsCUBE = K2Node_DynamicCast_AsCUBE;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.OnRep_LakeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACube_Dest_Scripting_C::OnRep_LakeState(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "OnRep_LakeState");

	Params::ACube_Dest_Scripting_C_OnRep_LakeState_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.UpdateCorruption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PercentComplete                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACube_Dest_Scripting_C::UpdateCorruption(float PercentComplete, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "UpdateCorruption");

	Params::ACube_Dest_Scripting_C_UpdateCorruption_Params Parms{};

	Parms.PercentComplete = PercentComplete;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.ConvertLakeAudioActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AmbientLakeAudioActor_C* Lake                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACube_Dest_Scripting_C::ConvertLakeAudioActor(class ABP_AmbientLakeAudioActor_C* Lake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "ConvertLakeAudioActor");

	Params::ACube_Dest_Scripting_C_ConvertLakeAudioActor_Params Parms{};

	Parms.Lake = Lake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CorruptRiverAudioActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AmbientSplineActor_C*    River                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AmbientSplineActor_C*    RiverL                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACube_Dest_Scripting_C::CorruptRiverAudioActor(class ABP_AmbientSplineActor_C* River, class ABP_AmbientSplineActor_C* RiverL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "CorruptRiverAudioActor");

	Params::ACube_Dest_Scripting_C_CorruptRiverAudioActor_Params Parms{};

	Parms.River = River;
	Parms.RiverL = RiverL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.OnRep_LakeTurnedOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AmbientLakeAudioActor_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AmbientSplineActor_C*    CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACube_Dest_Scripting_C::OnRep_LakeTurnedOn(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class ABP_AmbientLakeAudioActor_C* CallFunc_Array_Get_Item, class ABP_AmbientSplineActor_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "OnRep_LakeTurnedOn");

	Params::ACube_Dest_Scripting_C_OnRep_LakeTurnedOn_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.OnRep_CubeSinking
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACube_Dest_Scripting_C::OnRep_CubeSinking(const class FString& CallFunc_Conv_ByteToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "OnRep_CubeSinking");

	Params::ACube_Dest_Scripting_C_OnRep_CubeSinking_Params Parms{};

	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACube_Dest_Scripting_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CubeStartSinking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACube_Dest_Scripting_C::CubeStartSinking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "CubeStartSinking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CubeStopSinking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACube_Dest_Scripting_C::CubeStopSinking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "CubeStopSinking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CubeSplash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACube_Dest_Scripting_C::CubeSplash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "CubeSplash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.LakeTurnOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACube_Dest_Scripting_C::LakeTurnOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "LakeTurnOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACube_Dest_Scripting_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CubeDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACube_Dest_Scripting_C::CubeDone(int32 CurrentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "CubeDone");

	Params::ACube_Dest_Scripting_C_CubeDone_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.ExecuteUbergraph_Cube_Dest_Scripting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACUBE_C*>             CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ACUBE_C*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CurrentIndex                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACube_Dest_Scripting_C::ExecuteUbergraph_Cube_Dest_Scripting(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, TArray<class ACUBE_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ACUBE_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 K2Node_CustomEvent_CurrentIndex, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cube_Dest_Scripting_C", "ExecuteUbergraph_Cube_Dest_Scripting");

	Params::ACube_Dest_Scripting_C_ExecuteUbergraph_Cube_Dest_Scripting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue1 = CallFunc_SpawnEmitterAtLocation_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue2 = CallFunc_SpawnEmitterAtLocation_ReturnValue2;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentIndex = K2Node_CustomEvent_CurrentIndex;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue1 = CallFunc_SpawnSoundAtLocation_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


