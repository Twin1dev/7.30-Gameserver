#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuestInteractionProp_Parent.QuestInteractionProp_Parent_C
// (Actor)

class UClass* AQuestInteractionProp_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestInteractionProp_Parent_C");

	return Clss;
}


// QuestInteractionProp_Parent_C QuestInteractionProp_Parent.Default__QuestInteractionProp_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuestInteractionProp_Parent_C* AQuestInteractionProp_Parent_C::GetDefaultObj()
{
	static class AQuestInteractionProp_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuestInteractionProp_Parent_C*>(AQuestInteractionProp_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ClientInteractActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::ClientInteractActor(bool CallFunc_IsValidClass_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ClientInteractActor");

	Params::AQuestInteractionProp_Parent_C_ClientInteractActor_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OverrideDefaultMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::OverrideDefaultMaterialInstance(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable2, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_GetNumMaterials_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OverrideDefaultMaterialInstance");

	Params::AQuestInteractionProp_Parent_C_OverrideDefaultMaterialInstance_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue1 = CallFunc_GetNumMaterials_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetNumMaterials_ReturnValue2 = CallFunc_GetNumMaterials_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.FadeInAmbientSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::FadeInAmbientSound(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "FadeInAmbientSound");

	Params::AQuestInteractionProp_Parent_C_FadeInAmbientSound_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ChangeMaterialElements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::ChangeMaterialElements(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Variable2, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_GetNumMaterials_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_GetNumMaterials_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ChangeMaterialElements");

	Params::AQuestInteractionProp_Parent_C_ChangeMaterialElements_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetNumMaterials_ReturnValue1 = CallFunc_GetNumMaterials_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_GetNumMaterials_ReturnValue2 = CallFunc_GetNumMaterials_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnAmbientSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::SpawnAmbientSound(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "SpawnAmbientSound");

	Params::AQuestInteractionProp_Parent_C_SpawnAmbientSound_Params Parms{};

	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.FadeOutAmbientSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::FadeOutAmbientSound(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "FadeOutAmbientSound");

	Params::AQuestInteractionProp_Parent_C_FadeOutAmbientSound_Params Parms{};

	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SwapMeshOnInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::SwapMeshOnInteract(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "SwapMeshOnInteract");

	Params::AQuestInteractionProp_Parent_C_SwapMeshOnInteract_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ScaleEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::ScaleEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ScaleEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnRep_InteractedPlayerNetIDRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnRep_InteractedPlayerNetIDRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnRep_InteractedPlayerNetIDRef");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.StorePlayerInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       InteractingPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::StorePlayerInteract(class AFortPlayerController* InteractingPlayer, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "StorePlayerInteract");

	Params::AQuestInteractionProp_Parent_C_StorePlayerInteract_Params Parms{};

	Parms.InteractingPlayer = InteractingPlayer;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnRep_InteractionEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnRep_InteractionEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnRep_InteractionEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.WhereToSpawnRobot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPlayerPawnRef                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  RobotSpawnTransform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue1                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::WhereToSpawnRobot(class AFortPlayerPawn* InteractingPlayerPawnRef, struct FTransform* RobotSpawnTransform, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "WhereToSpawnRobot");

	Params::AQuestInteractionProp_Parent_C_WhereToSpawnRobot_Params Parms{};

	Parms.InteractingPlayerPawnRef = InteractingPlayerPawnRef;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue1 = CallFunc_GetTransform_ReturnValue1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RobotSpawnTransform != nullptr)
		*RobotSpawnTransform = std::move(Parms.RobotSpawnTransform);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.DoesPlayerHaveQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuestValid                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       PlayerControllerRef                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, bool* QuestValid, class AFortPlayerController** PlayerControllerRef, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "DoesPlayerHaveQuest");

	Params::AQuestInteractionProp_Parent_C_DoesPlayerHaveQuest_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestValid != nullptr)
		*QuestValid = Parms.QuestValid;

	if (PlayerControllerRef != nullptr)
		*PlayerControllerRef = Parms.PlayerControllerRef;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.GiveQuestItemToInteractingPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       Player_Controller_Ref                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DropChance_DropResult                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::GiveQuestItemToInteractingPlayer(class AFortPlayerController* Player_Controller_Ref, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_DropChance_DropResult, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "GiveQuestItemToInteractingPlayer");

	Params::AQuestInteractionProp_Parent_C_GiveQuestItemToInteractingPlayer_Params Parms{};

	Parms.Player_Controller_Ref = Player_Controller_Ref;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_DropChance_DropResult = CallFunc_DropChance_DropResult;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue = CallFunc_K2_SpawnPickupInWorld_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.WhatStageIsPlayerOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerControllerRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Stage                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::WhatStageIsPlayerOn(class AFortPlayerController* PlayerControllerRef, int32* Stage, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "WhatStageIsPlayerOn");

	Params::AQuestInteractionProp_Parent_C_WhatStageIsPlayerOn_Params Parms{};

	Parms.PlayerControllerRef = PlayerControllerRef;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Stage != nullptr)
		*Stage = Parms.Stage;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText AQuestInteractionProp_Parent_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BlueprintGetInteractionString");

	Params::AQuestInteractionProp_Parent_C_BlueprintGetInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AQuestInteractionProp_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue1, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue1, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BlueprintCanInteract");

	Params::AQuestInteractionProp_Parent_C_BlueprintCanInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue1 = CallFunc_GetQuestManager_ReturnValue1;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue1 = CallFunc_GetQuestWithDefinition_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue1 = CallFunc_HasCompletedObjectiveWithName_ReturnValue1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult1                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult3                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult4                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult5                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AQuestInteractionProp_Parent_C::UserConstructionScript(bool K2Node_SwitchEnum_CmpSuccess, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue1, bool CallFunc_SetStaticMesh_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "UserConstructionScript");

	Params::AQuestInteractionProp_Parent_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult1 = CallFunc_K2_SetRelativeLocation_SweepHitResult1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_AddComponent_ReturnValue1 = CallFunc_AddComponent_ReturnValue1;
	Parms.CallFunc_SetStaticMesh_ReturnValue1 = CallFunc_SetStaticMesh_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult2 = CallFunc_K2_SetRelativeLocation_SweepHitResult2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult3 = CallFunc_K2_SetRelativeLocation_SweepHitResult3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult4 = CallFunc_K2_SetRelativeLocation_SweepHitResult4;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult5 = CallFunc_K2_SetRelativeLocation_SweepHitResult5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0AEE0A17A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0AEE0A17A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0AEE0A17A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0AEE0A17A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0AEE0A17A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0AEE0A17A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB021A73FE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB021A73FE5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB021A73FE5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB021A73FE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB021A73FE5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB021A73FE5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1ED02ED748A4140AEF73B29E08F75B65
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1ED02ED748A4140AEF73B29E08F75B65()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1ED02ED748A4140AEF73B29E08F75B65");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E08F75B65
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E08F75B65()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1ED02ED748A4140AEF73B29E08F75B65");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1ED02ED748A4140AEF73B29EDC77F3FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1ED02ED748A4140AEF73B29EDC77F3FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1ED02ED748A4140AEF73B29EDC77F3FB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EDC77F3FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EDC77F3FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1ED02ED748A4140AEF73B29EDC77F3FB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0334306E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0334306E5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0334306E5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0334306E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0334306E5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0334306E5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0722EFBB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0722EFBB9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0722EFBB9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0722EFBB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0722EFBB9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0722EFBB9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0F7D8BA26
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0F7D8BA26()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0F7D8BA26");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7D8BA26
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7D8BA26()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7D8BA26");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0B90F3977
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0B90F3977()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0B90F3977");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0B90F3977
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0B90F3977()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0B90F3977");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0DA8A243C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0DA8A243C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0DA8A243C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA8A243C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA8A243C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA8A243C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0AB0CB1DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0AB0CB1DA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0AB0CB1DA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB0CB1DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB0CB1DA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB0CB1DA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB064E4CE12
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB064E4CE12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB064E4CE12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB064E4CE12
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB064E4CE12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB064E4CE12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB079CD2CBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB079CD2CBC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB079CD2CBC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB079CD2CBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB079CD2CBC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB079CD2CBC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB03BF18E76
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB03BF18E76()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB03BF18E76");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03BF18E76
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB03BF18E76()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB03BF18E76");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0E3F17DF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0E3F17DF4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0E3F17DF4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0E3F17DF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0E3F17DF4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0E3F17DF4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0FE3AB7EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0FE3AB7EE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0FE3AB7EE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0FE3AB7EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0FE3AB7EE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0FE3AB7EE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB01375B3EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB01375B3EF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB01375B3EF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB01375B3EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB01375B3EF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB01375B3EF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0AB911DFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0AB911DFF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0AB911DFF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB911DFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB911DFF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB911DFF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB07FA78F41
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB07FA78F41()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB07FA78F41");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB07FA78F41
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB07FA78F41()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB07FA78F41");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BlueprintOnInteract");

	Params::AQuestInteractionProp_Parent_C_BlueprintOnInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.PlayDialogOrLocalizedAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              QuestCountInt                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       InteractedController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::PlayDialogOrLocalizedAudio(int32 QuestCountInt, class AFortPlayerController* InteractedController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "PlayDialogOrLocalizedAudio");

	Params::AQuestInteractionProp_Parent_C_PlayDialogOrLocalizedAudio_Params Parms{};

	Parms.QuestCountInt = QuestCountInt;
	Parms.InteractedController = InteractedController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::BlueprintOnBeginInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BlueprintOnBeginInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnRobot
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPlayerPawnRef                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::SpawnRobot(class AFortPlayerPawn* InteractingPlayerPawnRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "SpawnRobot");

	Params::AQuestInteractionProp_Parent_C_SpawnRobot_Params Parms{};

	Parms.InteractingPlayerPawnRef = InteractingPlayerPawnRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.EffectsEvents
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPlayerPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::EffectsEvents(class AFortPlayerPawn* InteractingPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "EffectsEvents");

	Params::AQuestInteractionProp_Parent_C_EffectsEvents_Params Parms{};

	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnQuestUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnQuestUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnQuestUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.UpdateQuestState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::UpdateQuestState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "UpdateQuestState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ServerSuccessfulInteract
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::ServerSuccessfulInteract(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ServerSuccessfulInteract");

	Params::AQuestInteractionProp_Parent_C_ServerSuccessfulInteract_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BindActorHit
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::BindActorHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BindActorHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Damaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "Damaged");

	Params::AQuestInteractionProp_Parent_C_Damaged_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.resethitcheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::Resethitcheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "resethitcheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.HandleMissionEvent_LocateQuestItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AQuestInteractionProp_Parent_C::HandleMissionEvent_LocateQuestItem(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "HandleMissionEvent_LocateQuestItem");

	Params::AQuestInteractionProp_Parent_C_HandleMissionEvent_LocateQuestItem_Params Parms{};

	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnDebugParticle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::SpawnDebugParticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "SpawnDebugParticle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.QuestItemNoQuestMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerControllerRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::QuestItemNoQuestMessage(class AFortPlayerController* PlayerControllerRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "QuestItemNoQuestMessage");

	Params::AQuestInteractionProp_Parent_C_QuestItemNoQuestMessage_Params Parms{};

	Parms.PlayerControllerRef = PlayerControllerRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AQuestInteractionProp_Parent_C::BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AQuestInteractionProp_Parent_C_BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AQuestInteractionProp_Parent_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnDamageServer");

	Params::AQuestInteractionProp_Parent_C_OnDamageServer_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Explode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "Explode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.CheckProximity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::CheckProximity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "CheckProximity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.IsPlayerNear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::IsPlayerNear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "IsPlayerNear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Proximity_Conversation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::Proximity_Conversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "Proximity_Conversation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TouchedMe
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AQuestInteractionProp_Parent_C::TouchedMe(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "TouchedMe");

	Params::AQuestInteractionProp_Parent_C_TouchedMe_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.InteractionSpawnActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::InteractionSpawnActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "InteractionSpawnActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TriggerParticlePreActivate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::TriggerParticlePreActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "TriggerParticlePreActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TriggerParticleInteractionSucceeded
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::TriggerParticleInteractionSucceeded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "TriggerParticleInteractionSucceeded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ExecuteUbergraph_QuestInteractionProp_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_Gen_Basic_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_Gen_Basic_C*       CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue4                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue5                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue6                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue7                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue8                              (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue9                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue9           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue10                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue10          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue11                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue11          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate19                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate20                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue12                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate21                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate22                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate23                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue13                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue13          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate24                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate25                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate26                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue14                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue14          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue14                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate27                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue13                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate28                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate29                           (ZeroConstructor, NoDestructor)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_QuestCountInt                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_CustomEvent_InteractedController                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesPlayerHaveQuest_QuestValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_DoesPlayerHaveQuest_PlayerControllerRef                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue15                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue15          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue15                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_CustomEvent_InteractingPlayerPawnRef                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_WhereToSpawnRobot_RobotSpawnTransform                   (IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_CustomEvent_InteractingPlayerPawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate30                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate31                           (ZeroConstructor, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlayerHaveQuest_QuestValid1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_DoesPlayerHaveQuest_PlayerControllerRef1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue14                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation        (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation1       (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation2       (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation3       (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation4       (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation5       (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation6       (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation7       (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle                        (None)
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText                            (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags                           (None)
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent                           (ConstParm)
// bool                               Temp_bool_IsClosed_Variable3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic               (None)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate32                           (ZeroConstructor, NoDestructor)
// class AFortPlayerController*       K2Node_CustomEvent_PlayerControllerRef                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue1                       (None)
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic1              (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate33                           (ZeroConstructor, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation8       (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation9       (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue16                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue16          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue16                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue16                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue15                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue1              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue1                           (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate34                           (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate35                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue16                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate36                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       (None)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue17          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue17                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue17                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AnyPawnNearActor_IsPawnNearActor                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPawn*>           CallFunc_AnyPawnNearActor_PawnsNearActor                         (ZeroConstructor, ReferenceParm)
// class AFortPawn*                   CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_DoesPlayerHaveQuest_QuestValid2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_DoesPlayerHaveQuest_PlayerControllerRef2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate37                           (ZeroConstructor, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array6                                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array7                                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array8                                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array9                                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array10                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array11                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array13                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array14                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array15                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array16                                         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate38                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation10      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation11      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation12      (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation13      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation14      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_HasPlayerCompletedQuestObjective_PlayerControllerOut    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPlayerCompletedQuestObjective_CompletedQuestObjective(ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate39                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue40                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue41                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue42                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USphereComponent*            CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OverlappedComponent                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OtherBodyIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFromSweep                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_CustomEvent_SweepResult                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array17                                         (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class AQuestInteractionProp_Parent_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AQuestInteractionProp_Parent_C*CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue17                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue18          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue18                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue17                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue43                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate40                           (ZeroConstructor, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation15      (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue18                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue19          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue19                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::ExecuteUbergraph_QuestInteractionProp_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, bool CallFunc_IsValidClass_ReturnValue, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue2, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue3, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTransform& CallFunc_MakeTransform_ReturnValue4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4, bool CallFunc_IsValidClass_ReturnValue2, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue4, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValidClass_ReturnValue3, const struct FTransform& CallFunc_MakeTransform_ReturnValue5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue5, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_HasAuthority_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc_HasAuthority_ReturnValue2, bool CallFunc_IsValidClass_ReturnValue4, const struct FTransform& CallFunc_MakeTransform_ReturnValue6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue6, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue6, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc_IsValid_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_HasAuthority_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_IsValidClass_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, bool CallFunc_IsValidClass_ReturnValue6, const struct FTransform& CallFunc_MakeTransform_ReturnValue7, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue7, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue7, int32 Temp_int_Array_Index_Variable1, bool CallFunc_IsValid_ReturnValue7, const struct FTransform& CallFunc_MakeTransform_ReturnValue8, bool Temp_bool_IsClosed_Variable2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue8, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue8, bool CallFunc_IsValid_ReturnValue8, bool Temp_bool_Has_Been_Initd_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, const struct FTransform& CallFunc_MakeTransform_ReturnValue9, bool CallFunc_IsValidClass_ReturnValue7, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue9, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue9, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsValid_ReturnValue9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, bool CallFunc_Not_PreBool_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, const struct FTransform& CallFunc_MakeTransform_ReturnValue10, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue10, bool CallFunc_IsValidClass_ReturnValue8, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue10, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, bool CallFunc_IsValid_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, bool CallFunc_Not_PreBool_ReturnValue8, bool CallFunc_Not_PreBool_ReturnValue9, const struct FTransform& CallFunc_MakeTransform_ReturnValue11, bool CallFunc_IsValidClass_ReturnValue9, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue11, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue11, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, bool CallFunc_IsValid_ReturnValue11, bool CallFunc_Not_PreBool_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, const struct FTransform& CallFunc_MakeTransform_ReturnValue12, bool CallFunc_IsValidClass_ReturnValue10, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue12, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate22, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate23, const struct FTransform& CallFunc_MakeTransform_ReturnValue13, bool CallFunc_IsValidClass_ReturnValue11, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue13, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue13, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate24, bool CallFunc_IsValid_ReturnValue13, bool CallFunc_Not_PreBool_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate25, int32 Temp_int_Loop_Counter_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate26, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FTransform& CallFunc_MakeTransform_ReturnValue14, bool CallFunc_IsValidClass_ReturnValue12, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue14, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue14, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate27, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_Not_PreBool_ReturnValue13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate28, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_HasAuthority_ReturnValue4, bool CallFunc_HasAuthority_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate29, class AFortPawn* K2Node_Event_InteractingPawn, int32 K2Node_CustomEvent_QuestCountInt, class AFortPlayerController* K2Node_CustomEvent_InteractedController, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_DoesPlayerHaveQuest_QuestValid, class AFortPlayerController* CallFunc_DoesPlayerHaveQuest_PlayerControllerRef, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValidClass_ReturnValue13, const struct FTransform& CallFunc_MakeTransform_ReturnValue15, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue15, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue15, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue15, bool CallFunc_IsValid_ReturnValue15, class AFortPlayerPawn* K2Node_CustomEvent_InteractingPlayerPawnRef, const struct FTransform& CallFunc_WhereToSpawnRobot_RobotSpawnTransform, class AFortPlayerPawn* K2Node_CustomEvent_InteractingPlayerPawn, bool Temp_bool_Has_Been_Initd_Variable3, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate30, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate31, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_DoesPlayerHaveQuest_QuestValid1, class AFortPlayerController* CallFunc_DoesPlayerHaveQuest_PlayerControllerRef1, class AFortPlayerController* K2Node_CustomEvent_PlayerController, bool CallFunc_IsValid_ReturnValue16, bool CallFunc_IsLocalPlayerController_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool CallFunc_Not_PreBool_ReturnValue14, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation1, bool CallFunc_IsValid_ReturnValue17, bool CallFunc_IsValid_ReturnValue18, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation2, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation3, bool CallFunc_IsValid_ReturnValue19, bool CallFunc_IsValid_ReturnValue20, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation4, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation5, bool CallFunc_IsValid_ReturnValue21, bool CallFunc_IsValid_ReturnValue22, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation6, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation7, bool CallFunc_IsValid_ReturnValue23, bool CallFunc_IsValid_ReturnValue24, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, bool Temp_bool_IsClosed_Variable3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller1, bool K2Node_DynamicCast_bSuccess1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate32, class AFortPlayerController* K2Node_CustomEvent_PlayerControllerRef, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate33, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation8, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation9, bool CallFunc_IsValid_ReturnValue25, bool CallFunc_IsValid_ReturnValue26, bool CallFunc_IsValidClass_ReturnValue14, bool CallFunc_IsValid_ReturnValue27, const struct FTransform& CallFunc_MakeTransform_ReturnValue16, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue16, bool CallFunc_IsValid_ReturnValue28, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue16, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue16, bool CallFunc_IsValid_ReturnValue29, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue15, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item1, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue1, bool CallFunc_Array_Contains_ReturnValue1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate34, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HasAuthority_ReturnValue6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate35, bool CallFunc_Not_PreBool_ReturnValue16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate36, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue17, class AActor* CallFunc_FinishSpawningActor_ReturnValue17, bool CallFunc_IsValid_ReturnValue30, bool CallFunc_Not_PreBool_ReturnValue17, bool CallFunc_IsValid_ReturnValue31, bool CallFunc_IsValid_ReturnValue32, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, bool CallFunc_AnyPawnNearActor_IsPawnNearActor, TArray<class AFortPawn*>& CallFunc_AnyPawnNearActor_PawnsNearActor, class AFortPawn* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue33, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_DoesPlayerHaveQuest_QuestValid2, class AFortPlayerController* CallFunc_DoesPlayerHaveQuest_PlayerControllerRef2, class AActor* CallFunc_Array_Get_Item3, int32 CallFunc_Array_AddUnique_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue1, int32 CallFunc_Array_AddUnique_ReturnValue1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller3, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_Array_Contains_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate37, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array2, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array3, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array4, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array5, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array6, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array7, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array8, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array9, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array10, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array11, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array12, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array13, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array14, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array15, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array16, bool CallFunc_IsValid_ReturnValue34, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate38, int32 CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved, int32 CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required, bool CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation10, bool CallFunc_IsValid_ReturnValue35, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation11, bool CallFunc_IsValid_ReturnValue36, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation12, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation13, bool CallFunc_IsValid_ReturnValue37, bool CallFunc_IsValid_ReturnValue38, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation14, bool CallFunc_IsValid_ReturnValue39, class AFortPlayerController* CallFunc_HasPlayerCompletedQuestObjective_PlayerControllerOut, bool CallFunc_HasPlayerCompletedQuestObjective_CompletedQuestObjective, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate39, bool CallFunc_IsValid_ReturnValue40, bool CallFunc_IsValid_ReturnValue41, bool CallFunc_IsValidClass_ReturnValue15, bool CallFunc_IsValid_ReturnValue42, class USphereComponent* CallFunc_AddComponent_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess5, class AController* CallFunc_GetInstigatorController_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller4, bool K2Node_DynamicCast_bSuccess6, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array17, TArray<class AQuestInteractionProp_Parent_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AQuestInteractionProp_Parent_C* CallFunc_Array_Get_Item4, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue17, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue18, int32 CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved1, int32 CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required1, bool CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue18, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue17, bool CallFunc_Array_Contains_ReturnValue3, bool CallFunc_IsValid_ReturnValue43, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate40, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation15, bool CallFunc_HasAuthority_ReturnValue7, bool CallFunc_IsValidClass_ReturnValue16, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, const struct FTransform& CallFunc_MakeTransform_ReturnValue18, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue19, class AActor* CallFunc_FinishSpawningActor_ReturnValue19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ExecuteUbergraph_QuestInteractionProp_Parent");

	Params::AQuestInteractionProp_Parent_C_ExecuteUbergraph_QuestInteractionProp_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue = CallFunc_WaitForClientAnnouncement_ReturnValue;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue1 = CallFunc_WaitForClientAnnouncement_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue2 = CallFunc_FinishSpawningActor_ReturnValue2;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue2 = CallFunc_WaitForClientAnnouncement_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_IsValidClass_ReturnValue1 = CallFunc_IsValidClass_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue3 = CallFunc_FinishSpawningActor_ReturnValue3;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue3 = CallFunc_WaitForClientAnnouncement_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_MakeTransform_ReturnValue4 = CallFunc_MakeTransform_ReturnValue4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4;
	Parms.CallFunc_IsValidClass_ReturnValue2 = CallFunc_IsValidClass_ReturnValue2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue4 = CallFunc_FinishSpawningActor_ReturnValue4;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue4 = CallFunc_WaitForClientAnnouncement_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsValidClass_ReturnValue3 = CallFunc_IsValidClass_ReturnValue3;
	Parms.CallFunc_MakeTransform_ReturnValue5 = CallFunc_MakeTransform_ReturnValue5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5;
	Parms.CallFunc_FinishSpawningActor_ReturnValue5 = CallFunc_FinishSpawningActor_ReturnValue5;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue5 = CallFunc_WaitForClientAnnouncement_ReturnValue5;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue5 = CallFunc_Not_PreBool_ReturnValue5;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.CallFunc_IsValidClass_ReturnValue4 = CallFunc_IsValidClass_ReturnValue4;
	Parms.CallFunc_MakeTransform_ReturnValue6 = CallFunc_MakeTransform_ReturnValue6;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6;
	Parms.CallFunc_FinishSpawningActor_ReturnValue6 = CallFunc_FinishSpawningActor_ReturnValue6;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue6 = CallFunc_WaitForClientAnnouncement_ReturnValue6;
	Parms.CallFunc_Not_PreBool_ReturnValue6 = CallFunc_Not_PreBool_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_IsValidClass_ReturnValue5 = CallFunc_IsValidClass_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_IsValidClass_ReturnValue6 = CallFunc_IsValidClass_ReturnValue6;
	Parms.CallFunc_MakeTransform_ReturnValue7 = CallFunc_MakeTransform_ReturnValue7;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue7 = CallFunc_FinishSpawningActor_ReturnValue7;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue7 = CallFunc_WaitForClientAnnouncement_ReturnValue7;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_MakeTransform_ReturnValue8 = CallFunc_MakeTransform_ReturnValue8;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8;
	Parms.CallFunc_FinishSpawningActor_ReturnValue8 = CallFunc_FinishSpawningActor_ReturnValue8;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue8 = CallFunc_WaitForClientAnnouncement_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.CallFunc_MakeTransform_ReturnValue9 = CallFunc_MakeTransform_ReturnValue9;
	Parms.CallFunc_IsValidClass_ReturnValue7 = CallFunc_IsValidClass_ReturnValue7;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue9 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue9;
	Parms.CallFunc_FinishSpawningActor_ReturnValue9 = CallFunc_FinishSpawningActor_ReturnValue9;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue9 = CallFunc_WaitForClientAnnouncement_ReturnValue9;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.CallFunc_Not_PreBool_ReturnValue7 = CallFunc_Not_PreBool_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.CallFunc_MakeTransform_ReturnValue10 = CallFunc_MakeTransform_ReturnValue10;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue10 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue10;
	Parms.CallFunc_IsValidClass_ReturnValue8 = CallFunc_IsValidClass_ReturnValue8;
	Parms.CallFunc_FinishSpawningActor_ReturnValue10 = CallFunc_FinishSpawningActor_ReturnValue10;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue10 = CallFunc_WaitForClientAnnouncement_ReturnValue10;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.CallFunc_Not_PreBool_ReturnValue8 = CallFunc_Not_PreBool_ReturnValue8;
	Parms.CallFunc_Not_PreBool_ReturnValue9 = CallFunc_Not_PreBool_ReturnValue9;
	Parms.CallFunc_MakeTransform_ReturnValue11 = CallFunc_MakeTransform_ReturnValue11;
	Parms.CallFunc_IsValidClass_ReturnValue9 = CallFunc_IsValidClass_ReturnValue9;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue11 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue11;
	Parms.CallFunc_FinishSpawningActor_ReturnValue11 = CallFunc_FinishSpawningActor_ReturnValue11;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue11 = CallFunc_WaitForClientAnnouncement_ReturnValue11;
	Parms.K2Node_CreateDelegate_OutputDelegate19 = K2Node_CreateDelegate_OutputDelegate19;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.CallFunc_Not_PreBool_ReturnValue10 = CallFunc_Not_PreBool_ReturnValue10;
	Parms.K2Node_CreateDelegate_OutputDelegate20 = K2Node_CreateDelegate_OutputDelegate20;
	Parms.CallFunc_MakeTransform_ReturnValue12 = CallFunc_MakeTransform_ReturnValue12;
	Parms.CallFunc_IsValidClass_ReturnValue10 = CallFunc_IsValidClass_ReturnValue10;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12;
	Parms.CallFunc_FinishSpawningActor_ReturnValue12 = CallFunc_FinishSpawningActor_ReturnValue12;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue12 = CallFunc_WaitForClientAnnouncement_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate21 = K2Node_CreateDelegate_OutputDelegate21;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_Not_PreBool_ReturnValue11 = CallFunc_Not_PreBool_ReturnValue11;
	Parms.K2Node_CreateDelegate_OutputDelegate22 = K2Node_CreateDelegate_OutputDelegate22;
	Parms.K2Node_CreateDelegate_OutputDelegate23 = K2Node_CreateDelegate_OutputDelegate23;
	Parms.CallFunc_MakeTransform_ReturnValue13 = CallFunc_MakeTransform_ReturnValue13;
	Parms.CallFunc_IsValidClass_ReturnValue11 = CallFunc_IsValidClass_ReturnValue11;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue13 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue13;
	Parms.CallFunc_FinishSpawningActor_ReturnValue13 = CallFunc_FinishSpawningActor_ReturnValue13;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue13 = CallFunc_WaitForClientAnnouncement_ReturnValue13;
	Parms.K2Node_CreateDelegate_OutputDelegate24 = K2Node_CreateDelegate_OutputDelegate24;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
	Parms.CallFunc_Not_PreBool_ReturnValue12 = CallFunc_Not_PreBool_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate25 = K2Node_CreateDelegate_OutputDelegate25;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate26 = K2Node_CreateDelegate_OutputDelegate26;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_MakeTransform_ReturnValue14 = CallFunc_MakeTransform_ReturnValue14;
	Parms.CallFunc_IsValidClass_ReturnValue12 = CallFunc_IsValidClass_ReturnValue12;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue14 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue14;
	Parms.CallFunc_FinishSpawningActor_ReturnValue14 = CallFunc_FinishSpawningActor_ReturnValue14;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue14 = CallFunc_WaitForClientAnnouncement_ReturnValue14;
	Parms.K2Node_CreateDelegate_OutputDelegate27 = K2Node_CreateDelegate_OutputDelegate27;
	Parms.CallFunc_IsValid_ReturnValue14 = CallFunc_IsValid_ReturnValue14;
	Parms.CallFunc_Not_PreBool_ReturnValue13 = CallFunc_Not_PreBool_ReturnValue13;
	Parms.K2Node_CreateDelegate_OutputDelegate28 = K2Node_CreateDelegate_OutputDelegate28;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_HasAuthority_ReturnValue4 = CallFunc_HasAuthority_ReturnValue4;
	Parms.CallFunc_HasAuthority_ReturnValue5 = CallFunc_HasAuthority_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate29 = K2Node_CreateDelegate_OutputDelegate29;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_CustomEvent_QuestCountInt = K2Node_CustomEvent_QuestCountInt;
	Parms.K2Node_CustomEvent_InteractedController = K2Node_CustomEvent_InteractedController;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_DoesPlayerHaveQuest_QuestValid = CallFunc_DoesPlayerHaveQuest_QuestValid;
	Parms.CallFunc_DoesPlayerHaveQuest_PlayerControllerRef = CallFunc_DoesPlayerHaveQuest_PlayerControllerRef;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue13 = CallFunc_IsValidClass_ReturnValue13;
	Parms.CallFunc_MakeTransform_ReturnValue15 = CallFunc_MakeTransform_ReturnValue15;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue15 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue15;
	Parms.CallFunc_FinishSpawningActor_ReturnValue15 = CallFunc_FinishSpawningActor_ReturnValue15;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue15 = CallFunc_WaitForClientAnnouncement_ReturnValue15;
	Parms.CallFunc_IsValid_ReturnValue15 = CallFunc_IsValid_ReturnValue15;
	Parms.K2Node_CustomEvent_InteractingPlayerPawnRef = K2Node_CustomEvent_InteractingPlayerPawnRef;
	Parms.CallFunc_WhereToSpawnRobot_RobotSpawnTransform = CallFunc_WhereToSpawnRobot_RobotSpawnTransform;
	Parms.K2Node_CustomEvent_InteractingPlayerPawn = K2Node_CustomEvent_InteractingPlayerPawn;
	Parms.Temp_bool_Has_Been_Initd_Variable3 = Temp_bool_Has_Been_Initd_Variable3;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate30 = K2Node_CreateDelegate_OutputDelegate30;
	Parms.K2Node_CreateDelegate_OutputDelegate31 = K2Node_CreateDelegate_OutputDelegate31;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_DoesPlayerHaveQuest_QuestValid1 = CallFunc_DoesPlayerHaveQuest_QuestValid1;
	Parms.CallFunc_DoesPlayerHaveQuest_PlayerControllerRef1 = CallFunc_DoesPlayerHaveQuest_PlayerControllerRef1;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_IsValid_ReturnValue16 = CallFunc_IsValid_ReturnValue16;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.CallFunc_Not_PreBool_ReturnValue14 = CallFunc_Not_PreBool_ReturnValue14;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation = K2Node_MakeStruct_FortClientAnnouncementData_Conversation;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation1 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation1;
	Parms.CallFunc_IsValid_ReturnValue17 = CallFunc_IsValid_ReturnValue17;
	Parms.CallFunc_IsValid_ReturnValue18 = CallFunc_IsValid_ReturnValue18;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation2 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation2;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation3 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation3;
	Parms.CallFunc_IsValid_ReturnValue19 = CallFunc_IsValid_ReturnValue19;
	Parms.CallFunc_IsValid_ReturnValue20 = CallFunc_IsValid_ReturnValue20;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation4 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation4;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation5 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation5;
	Parms.CallFunc_IsValid_ReturnValue21 = CallFunc_IsValid_ReturnValue21;
	Parms.CallFunc_IsValid_ReturnValue22 = CallFunc_IsValid_ReturnValue22;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation6 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation6;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation7 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation7;
	Parms.CallFunc_IsValid_ReturnValue23 = CallFunc_IsValid_ReturnValue23;
	Parms.CallFunc_IsValid_ReturnValue24 = CallFunc_IsValid_ReturnValue24;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.K2Node_HandleMissionEvent_InMissionGuid = K2Node_HandleMissionEvent_InMissionGuid;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle = K2Node_HandleMissionEvent_ObjectiveHandle;
	Parms.K2Node_HandleMissionEvent_Params = K2Node_HandleMissionEvent_Params;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.K2Node_HandleMissionEvent_EventFocus = K2Node_HandleMissionEvent_EventFocus;
	Parms.K2Node_HandleMissionEvent_EventContent = K2Node_HandleMissionEvent_EventContent;
	Parms.K2Node_HandleMissionEvent_EventInstigator = K2Node_HandleMissionEvent_EventInstigator;
	Parms.K2Node_HandleMissionEvent_GenericInt = K2Node_HandleMissionEvent_GenericInt;
	Parms.K2Node_HandleMissionEvent_GenericFloat = K2Node_HandleMissionEvent_GenericFloat;
	Parms.K2Node_HandleMissionEvent_GenericText = K2Node_HandleMissionEvent_GenericText;
	Parms.K2Node_HandleMissionEvent_GameplayTags = K2Node_HandleMissionEvent_GameplayTags;
	Parms.K2Node_HandleMissionEvent_MissionEvent = K2Node_HandleMissionEvent_MissionEvent;
	Parms.Temp_bool_IsClosed_Variable3 = Temp_bool_IsClosed_Variable3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic = K2Node_MakeStruct_FortClientAnnouncementData_Basic;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller1 = K2Node_DynamicCast_AsFort_Player_Controller1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate32 = K2Node_CreateDelegate_OutputDelegate32;
	Parms.K2Node_CustomEvent_PlayerControllerRef = K2Node_CustomEvent_PlayerControllerRef;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue1 = CallFunc_MakeBrushFromTexture_ReturnValue1;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic1 = K2Node_MakeStruct_FortClientAnnouncementData_Basic1;
	Parms.K2Node_CreateDelegate_OutputDelegate33 = K2Node_CreateDelegate_OutputDelegate33;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation8 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation8;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation9 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation9;
	Parms.CallFunc_IsValid_ReturnValue25 = CallFunc_IsValid_ReturnValue25;
	Parms.CallFunc_IsValid_ReturnValue26 = CallFunc_IsValid_ReturnValue26;
	Parms.CallFunc_IsValidClass_ReturnValue14 = CallFunc_IsValidClass_ReturnValue14;
	Parms.CallFunc_IsValid_ReturnValue27 = CallFunc_IsValid_ReturnValue27;
	Parms.CallFunc_MakeTransform_ReturnValue16 = CallFunc_MakeTransform_ReturnValue16;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue16 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue16;
	Parms.CallFunc_IsValid_ReturnValue28 = CallFunc_IsValid_ReturnValue28;
	Parms.CallFunc_FinishSpawningActor_ReturnValue16 = CallFunc_FinishSpawningActor_ReturnValue16;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue16 = CallFunc_WaitForClientAnnouncement_ReturnValue16;
	Parms.CallFunc_IsValid_ReturnValue29 = CallFunc_IsValid_ReturnValue29;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue15 = CallFunc_Not_PreBool_ReturnValue15;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue1 = CallFunc_GetLocalFortPlayerControllers_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetGameAccountId_ReturnValue1 = CallFunc_GetGameAccountId_ReturnValue1;
	Parms.CallFunc_Array_Contains_ReturnValue1 = CallFunc_Array_Contains_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CreateDelegate_OutputDelegate34 = K2Node_CreateDelegate_OutputDelegate34;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller2 = K2Node_DynamicCast_AsFort_Player_Controller2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_HasAuthority_ReturnValue6 = CallFunc_HasAuthority_ReturnValue6;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate35 = K2Node_CreateDelegate_OutputDelegate35;
	Parms.CallFunc_Not_PreBool_ReturnValue16 = CallFunc_Not_PreBool_ReturnValue16;
	Parms.K2Node_CreateDelegate_OutputDelegate36 = K2Node_CreateDelegate_OutputDelegate36;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue17 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue17;
	Parms.CallFunc_FinishSpawningActor_ReturnValue17 = CallFunc_FinishSpawningActor_ReturnValue17;
	Parms.CallFunc_IsValid_ReturnValue30 = CallFunc_IsValid_ReturnValue30;
	Parms.CallFunc_Not_PreBool_ReturnValue17 = CallFunc_Not_PreBool_ReturnValue17;
	Parms.CallFunc_IsValid_ReturnValue31 = CallFunc_IsValid_ReturnValue31;
	Parms.CallFunc_IsValid_ReturnValue32 = CallFunc_IsValid_ReturnValue32;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue4 = CallFunc_K2_GetActorLocation_ReturnValue4;
	Parms.CallFunc_AnyPawnNearActor_IsPawnNearActor = CallFunc_AnyPawnNearActor_IsPawnNearActor;
	Parms.CallFunc_AnyPawnNearActor_PawnsNearActor = CallFunc_AnyPawnNearActor_PawnsNearActor;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_IsValid_ReturnValue33 = CallFunc_IsValid_ReturnValue33;
	Parms.CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue = CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue1 = CallFunc_SpawnEmitterAtLocation_ReturnValue1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_DoesPlayerHaveQuest_QuestValid2 = CallFunc_DoesPlayerHaveQuest_QuestValid2;
	Parms.CallFunc_DoesPlayerHaveQuest_PlayerControllerRef2 = CallFunc_DoesPlayerHaveQuest_PlayerControllerRef2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue1 = CallFunc_GetInstigatorController_ReturnValue1;
	Parms.CallFunc_Array_AddUnique_ReturnValue1 = CallFunc_Array_AddUnique_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller3 = K2Node_DynamicCast_AsFort_Player_Controller3;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_Array_Contains_ReturnValue2 = CallFunc_Array_Contains_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate37 = K2Node_CreateDelegate_OutputDelegate37;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.K2Node_MakeArray_Array6 = K2Node_MakeArray_Array6;
	Parms.K2Node_MakeArray_Array7 = K2Node_MakeArray_Array7;
	Parms.K2Node_MakeArray_Array8 = K2Node_MakeArray_Array8;
	Parms.K2Node_MakeArray_Array9 = K2Node_MakeArray_Array9;
	Parms.K2Node_MakeArray_Array10 = K2Node_MakeArray_Array10;
	Parms.K2Node_MakeArray_Array11 = K2Node_MakeArray_Array11;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.K2Node_MakeArray_Array13 = K2Node_MakeArray_Array13;
	Parms.K2Node_MakeArray_Array14 = K2Node_MakeArray_Array14;
	Parms.K2Node_MakeArray_Array15 = K2Node_MakeArray_Array15;
	Parms.K2Node_MakeArray_Array16 = K2Node_MakeArray_Array16;
	Parms.CallFunc_IsValid_ReturnValue34 = CallFunc_IsValid_ReturnValue34;
	Parms.K2Node_CreateDelegate_OutputDelegate38 = K2Node_CreateDelegate_OutputDelegate38;
	Parms.CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved = CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved;
	Parms.CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required = CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required;
	Parms.CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount = CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation10 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation10;
	Parms.CallFunc_IsValid_ReturnValue35 = CallFunc_IsValid_ReturnValue35;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation11 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation11;
	Parms.CallFunc_IsValid_ReturnValue36 = CallFunc_IsValid_ReturnValue36;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation12 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation12;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation13 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation13;
	Parms.CallFunc_IsValid_ReturnValue37 = CallFunc_IsValid_ReturnValue37;
	Parms.CallFunc_IsValid_ReturnValue38 = CallFunc_IsValid_ReturnValue38;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation14 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation14;
	Parms.CallFunc_IsValid_ReturnValue39 = CallFunc_IsValid_ReturnValue39;
	Parms.CallFunc_HasPlayerCompletedQuestObjective_PlayerControllerOut = CallFunc_HasPlayerCompletedQuestObjective_PlayerControllerOut;
	Parms.CallFunc_HasPlayerCompletedQuestObjective_CompletedQuestObjective = CallFunc_HasPlayerCompletedQuestObjective_CompletedQuestObjective;
	Parms.K2Node_CreateDelegate_OutputDelegate39 = K2Node_CreateDelegate_OutputDelegate39;
	Parms.CallFunc_IsValid_ReturnValue40 = CallFunc_IsValid_ReturnValue40;
	Parms.CallFunc_IsValid_ReturnValue41 = CallFunc_IsValid_ReturnValue41;
	Parms.CallFunc_IsValidClass_ReturnValue15 = CallFunc_IsValidClass_ReturnValue15;
	Parms.CallFunc_IsValid_ReturnValue42 = CallFunc_IsValid_ReturnValue42;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_CustomEvent_OverlappedComponent = K2Node_CustomEvent_OverlappedComponent;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_CustomEvent_OtherComp = K2Node_CustomEvent_OtherComp;
	Parms.K2Node_CustomEvent_OtherBodyIndex = K2Node_CustomEvent_OtherBodyIndex;
	Parms.K2Node_CustomEvent_bFromSweep = K2Node_CustomEvent_bFromSweep;
	Parms.K2Node_CustomEvent_SweepResult = K2Node_CustomEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn1 = K2Node_DynamicCast_AsFort_Player_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_GetInstigatorController_ReturnValue2 = CallFunc_GetInstigatorController_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller4 = K2Node_DynamicCast_AsFort_Player_Controller4;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_MakeArray_Array17 = K2Node_MakeArray_Array17;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Array_AddUnique_ReturnValue2 = CallFunc_Array_AddUnique_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_Array_Length_ReturnValue5 = CallFunc_Array_Length_ReturnValue5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;
	Parms.CallFunc_MakeTransform_ReturnValue17 = CallFunc_MakeTransform_ReturnValue17;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue18 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue18;
	Parms.CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved1 = CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved1;
	Parms.CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required1 = CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required1;
	Parms.CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount1 = CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue18 = CallFunc_FinishSpawningActor_ReturnValue18;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue17 = CallFunc_WaitForClientAnnouncement_ReturnValue17;
	Parms.CallFunc_Array_Contains_ReturnValue3 = CallFunc_Array_Contains_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue43 = CallFunc_IsValid_ReturnValue43;
	Parms.K2Node_CreateDelegate_OutputDelegate40 = K2Node_CreateDelegate_OutputDelegate40;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation15 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation15;
	Parms.CallFunc_HasAuthority_ReturnValue7 = CallFunc_HasAuthority_ReturnValue7;
	Parms.CallFunc_IsValidClass_ReturnValue16 = CallFunc_IsValidClass_ReturnValue16;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue5 = CallFunc_K2_GetActorLocation_ReturnValue5;
	Parms.CallFunc_MakeTransform_ReturnValue18 = CallFunc_MakeTransform_ReturnValue18;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue19 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue19;
	Parms.CallFunc_FinishSpawningActor_ReturnValue19 = CallFunc_FinishSpawningActor_ReturnValue19;

	UObject::ProcessEvent(Func, &Parms);

}

}


