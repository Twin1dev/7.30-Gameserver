#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StorePinataMaster_BP.StorePinataMaster_BP_C
// (Actor)

class UClass* AStorePinataMaster_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StorePinataMaster_BP_C");

	return Clss;
}


// StorePinataMaster_BP_C StorePinataMaster_BP.Default__StorePinataMaster_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStorePinataMaster_BP_C* AStorePinataMaster_BP_C::GetDefaultObj()
{
	static class AStorePinataMaster_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStorePinataMaster_BP_C*>(AStorePinataMaster_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.SwitchLightingLOW
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::SwitchLightingLOW(bool Visibility, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "SwitchLightingLOW");

	Params::AStorePinataMaster_BP_C_SwitchLightingLOW_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.SwitchLightingPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::SwitchLightingPC(bool Visibility, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "SwitchLightingPC");

	Params::AStorePinataMaster_BP_C_SwitchLightingPC_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ChooseRandomWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue7                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue8                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue9                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue10                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue11                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::ChooseRandomWeapon(int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue5, bool CallFunc_EqualEqual_IntInt_ReturnValue6, bool CallFunc_EqualEqual_IntInt_ReturnValue7, bool CallFunc_EqualEqual_IntInt_ReturnValue8, bool CallFunc_EqualEqual_IntInt_ReturnValue9, bool CallFunc_EqualEqual_IntInt_ReturnValue10, bool CallFunc_EqualEqual_IntInt_ReturnValue11, int32 CallFunc_RandomIntegerInRange_ReturnValue2, int32 CallFunc_RandomIntegerInRange_ReturnValue3, int32 CallFunc_RandomIntegerInRange_ReturnValue4, int32 CallFunc_RandomIntegerInRange_ReturnValue5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "ChooseRandomWeapon");

	Params::AStorePinataMaster_BP_C_ChooseRandomWeapon_Params Parms{};

	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue1 = CallFunc_RandomIntegerInRange_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue3 = CallFunc_EqualEqual_IntInt_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue4 = CallFunc_EqualEqual_IntInt_ReturnValue4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue5 = CallFunc_EqualEqual_IntInt_ReturnValue5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue6 = CallFunc_EqualEqual_IntInt_ReturnValue6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue7 = CallFunc_EqualEqual_IntInt_ReturnValue7;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue8 = CallFunc_EqualEqual_IntInt_ReturnValue8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue9 = CallFunc_EqualEqual_IntInt_ReturnValue9;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue10 = CallFunc_EqualEqual_IntInt_ReturnValue10;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue11 = CallFunc_EqualEqual_IntInt_ReturnValue11;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue2 = CallFunc_RandomIntegerInRange_ReturnValue2;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue3 = CallFunc_RandomIntegerInRange_ReturnValue3;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue4 = CallFunc_RandomIntegerInRange_ReturnValue4;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue5 = CallFunc_RandomIntegerInRange_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.PackPersonalitySounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USoundBase*>          K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPackPersonality*        CallFunc_GetPackPersonality_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::PackPersonalitySounds(TArray<class USoundBase*>& K2Node_MakeArray_Array, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class USoundBase* CallFunc_Array_Get_Item, class UFortPackPersonality* CallFunc_GetPackPersonality_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "PackPersonalitySounds");

	Params::AStorePinataMaster_BP_C_PackPersonalitySounds_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPackPersonality_ReturnValue = CallFunc_GetPackPersonality_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.DefinePinataAssets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_GetPackImage_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue15             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue16             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable3                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue17             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue18             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue19             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue20             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue21             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue22             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable4                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue23             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue5                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue24             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue25             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue26             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue27             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue28             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue29             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue30             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue31             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue32             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue33             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue34             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable5                                            (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable6                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue6                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue7                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable7                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue35             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue8                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue36             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue37             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue38             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue39             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue40             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable8                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue9                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue41             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue42             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue43             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue44             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue45             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue46             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable9                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue10                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue47             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue48             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue49             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue50             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue51             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue52             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable10                                           (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue11                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue53             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue54             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue55             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue56             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue57             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue58             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue59             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable11                                           (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue60             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue61             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue62             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue63             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue64             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue65             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable12                                           (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue66             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue13                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue67             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue68             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue69             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue70             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue71             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue72             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue73             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable13                                           (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue14                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue74             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue75             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue76             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue77             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue78             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue79             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable14                                           (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue15                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue80             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue81             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue82             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue83             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue84             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue85             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::DefinePinataAssets(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue11, class UFortStoreContext* CallFunc_GetContext_ReturnValue, const struct FTransform& Temp_struct_Variable, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue1, class UTexture* CallFunc_GetPackImage_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FTransform& Temp_struct_Variable1, const struct FTransform& Temp_struct_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue14, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue15, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue16, const struct FTransform& Temp_struct_Variable3, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue17, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue18, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue19, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue20, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue21, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue22, const struct FTransform& Temp_struct_Variable4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue23, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue24, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue25, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue26, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue27, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue28, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue29, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue30, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue31, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue32, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue33, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue34, const struct FTransform& Temp_struct_Variable5, const struct FTransform& Temp_struct_Variable6, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue6, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue7, const struct FTransform& Temp_struct_Variable7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue35, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue36, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue37, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue38, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue39, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue40, const struct FTransform& Temp_struct_Variable8, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue41, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue42, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue43, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue44, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue45, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue46, const struct FTransform& Temp_struct_Variable9, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue47, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue48, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue49, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue50, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue51, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue52, const struct FTransform& Temp_struct_Variable10, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue53, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue54, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue55, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue56, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue57, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue58, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue59, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& Temp_struct_Variable11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue60, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue61, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue62, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue63, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue64, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue65, const struct FTransform& Temp_struct_Variable12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue66, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue67, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue68, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue69, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue70, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue71, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue72, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue73, const struct FTransform& Temp_struct_Variable13, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue14, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue74, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue75, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue76, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue77, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue78, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue79, const struct FTransform& Temp_struct_Variable14, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue15, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue80, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue81, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue82, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue83, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue84, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue85)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "DefinePinataAssets");

	Params::AStorePinataMaster_BP_C_DefinePinataAssets_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue11;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue1 = CallFunc_AddComponent_ReturnValue1;
	Parms.CallFunc_GetPackImage_ReturnValue = CallFunc_GetPackImage_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue1 = CallFunc_GetDisplayName_ReturnValue1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue13;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue14 = CallFunc_CreateDynamicMaterialInstance_ReturnValue14;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue15 = CallFunc_CreateDynamicMaterialInstance_ReturnValue15;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue16 = CallFunc_CreateDynamicMaterialInstance_ReturnValue16;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_AddComponent_ReturnValue4 = CallFunc_AddComponent_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue17 = CallFunc_CreateDynamicMaterialInstance_ReturnValue17;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue18 = CallFunc_CreateDynamicMaterialInstance_ReturnValue18;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue19 = CallFunc_CreateDynamicMaterialInstance_ReturnValue19;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue20 = CallFunc_CreateDynamicMaterialInstance_ReturnValue20;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue21 = CallFunc_CreateDynamicMaterialInstance_ReturnValue21;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue22 = CallFunc_CreateDynamicMaterialInstance_ReturnValue22;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue23 = CallFunc_CreateDynamicMaterialInstance_ReturnValue23;
	Parms.CallFunc_AddComponent_ReturnValue5 = CallFunc_AddComponent_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue24 = CallFunc_CreateDynamicMaterialInstance_ReturnValue24;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue25 = CallFunc_CreateDynamicMaterialInstance_ReturnValue25;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue26 = CallFunc_CreateDynamicMaterialInstance_ReturnValue26;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue27 = CallFunc_CreateDynamicMaterialInstance_ReturnValue27;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue28 = CallFunc_CreateDynamicMaterialInstance_ReturnValue28;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue29 = CallFunc_CreateDynamicMaterialInstance_ReturnValue29;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue30 = CallFunc_CreateDynamicMaterialInstance_ReturnValue30;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue31 = CallFunc_CreateDynamicMaterialInstance_ReturnValue31;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue32 = CallFunc_CreateDynamicMaterialInstance_ReturnValue32;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue33 = CallFunc_CreateDynamicMaterialInstance_ReturnValue33;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue34 = CallFunc_CreateDynamicMaterialInstance_ReturnValue34;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.CallFunc_AddComponent_ReturnValue6 = CallFunc_AddComponent_ReturnValue6;
	Parms.CallFunc_AddComponent_ReturnValue7 = CallFunc_AddComponent_ReturnValue7;
	Parms.Temp_struct_Variable7 = Temp_struct_Variable7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue35 = CallFunc_CreateDynamicMaterialInstance_ReturnValue35;
	Parms.CallFunc_AddComponent_ReturnValue8 = CallFunc_AddComponent_ReturnValue8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue36 = CallFunc_CreateDynamicMaterialInstance_ReturnValue36;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue37 = CallFunc_CreateDynamicMaterialInstance_ReturnValue37;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue38 = CallFunc_CreateDynamicMaterialInstance_ReturnValue38;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue39 = CallFunc_CreateDynamicMaterialInstance_ReturnValue39;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue40 = CallFunc_CreateDynamicMaterialInstance_ReturnValue40;
	Parms.Temp_struct_Variable8 = Temp_struct_Variable8;
	Parms.CallFunc_AddComponent_ReturnValue9 = CallFunc_AddComponent_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue41 = CallFunc_CreateDynamicMaterialInstance_ReturnValue41;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue42 = CallFunc_CreateDynamicMaterialInstance_ReturnValue42;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue43 = CallFunc_CreateDynamicMaterialInstance_ReturnValue43;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue44 = CallFunc_CreateDynamicMaterialInstance_ReturnValue44;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue45 = CallFunc_CreateDynamicMaterialInstance_ReturnValue45;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue46 = CallFunc_CreateDynamicMaterialInstance_ReturnValue46;
	Parms.Temp_struct_Variable9 = Temp_struct_Variable9;
	Parms.CallFunc_AddComponent_ReturnValue10 = CallFunc_AddComponent_ReturnValue10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue47 = CallFunc_CreateDynamicMaterialInstance_ReturnValue47;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue48 = CallFunc_CreateDynamicMaterialInstance_ReturnValue48;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue49 = CallFunc_CreateDynamicMaterialInstance_ReturnValue49;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue50 = CallFunc_CreateDynamicMaterialInstance_ReturnValue50;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue51 = CallFunc_CreateDynamicMaterialInstance_ReturnValue51;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue52 = CallFunc_CreateDynamicMaterialInstance_ReturnValue52;
	Parms.Temp_struct_Variable10 = Temp_struct_Variable10;
	Parms.CallFunc_AddComponent_ReturnValue11 = CallFunc_AddComponent_ReturnValue11;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue53 = CallFunc_CreateDynamicMaterialInstance_ReturnValue53;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue54 = CallFunc_CreateDynamicMaterialInstance_ReturnValue54;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue55 = CallFunc_CreateDynamicMaterialInstance_ReturnValue55;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue56 = CallFunc_CreateDynamicMaterialInstance_ReturnValue56;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue57 = CallFunc_CreateDynamicMaterialInstance_ReturnValue57;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue58 = CallFunc_CreateDynamicMaterialInstance_ReturnValue58;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue59 = CallFunc_CreateDynamicMaterialInstance_ReturnValue59;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.Temp_struct_Variable11 = Temp_struct_Variable11;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue60 = CallFunc_CreateDynamicMaterialInstance_ReturnValue60;
	Parms.CallFunc_AddComponent_ReturnValue12 = CallFunc_AddComponent_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue61 = CallFunc_CreateDynamicMaterialInstance_ReturnValue61;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue62 = CallFunc_CreateDynamicMaterialInstance_ReturnValue62;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue63 = CallFunc_CreateDynamicMaterialInstance_ReturnValue63;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue64 = CallFunc_CreateDynamicMaterialInstance_ReturnValue64;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue65 = CallFunc_CreateDynamicMaterialInstance_ReturnValue65;
	Parms.Temp_struct_Variable12 = Temp_struct_Variable12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue66 = CallFunc_CreateDynamicMaterialInstance_ReturnValue66;
	Parms.CallFunc_AddComponent_ReturnValue13 = CallFunc_AddComponent_ReturnValue13;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue67 = CallFunc_CreateDynamicMaterialInstance_ReturnValue67;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue68 = CallFunc_CreateDynamicMaterialInstance_ReturnValue68;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue69 = CallFunc_CreateDynamicMaterialInstance_ReturnValue69;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue70 = CallFunc_CreateDynamicMaterialInstance_ReturnValue70;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue71 = CallFunc_CreateDynamicMaterialInstance_ReturnValue71;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue72 = CallFunc_CreateDynamicMaterialInstance_ReturnValue72;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue73 = CallFunc_CreateDynamicMaterialInstance_ReturnValue73;
	Parms.Temp_struct_Variable13 = Temp_struct_Variable13;
	Parms.CallFunc_AddComponent_ReturnValue14 = CallFunc_AddComponent_ReturnValue14;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue74 = CallFunc_CreateDynamicMaterialInstance_ReturnValue74;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue75 = CallFunc_CreateDynamicMaterialInstance_ReturnValue75;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue76 = CallFunc_CreateDynamicMaterialInstance_ReturnValue76;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue77 = CallFunc_CreateDynamicMaterialInstance_ReturnValue77;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue78 = CallFunc_CreateDynamicMaterialInstance_ReturnValue78;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue79 = CallFunc_CreateDynamicMaterialInstance_ReturnValue79;
	Parms.Temp_struct_Variable14 = Temp_struct_Variable14;
	Parms.CallFunc_AddComponent_ReturnValue15 = CallFunc_AddComponent_ReturnValue15;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue80 = CallFunc_CreateDynamicMaterialInstance_ReturnValue80;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue81 = CallFunc_CreateDynamicMaterialInstance_ReturnValue81;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue82 = CallFunc_CreateDynamicMaterialInstance_ReturnValue82;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue83 = CallFunc_CreateDynamicMaterialInstance_ReturnValue83;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue84 = CallFunc_CreateDynamicMaterialInstance_ReturnValue84;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue85 = CallFunc_CreateDynamicMaterialInstance_ReturnValue85;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue1                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue3                     (IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue1, const struct FTransform& Temp_struct_Variable1, bool CallFunc_K2_AttachToComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue13, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, const struct FTransform& Temp_struct_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "UserConstructionScript");

	Params::AStorePinataMaster_BP_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue1 = CallFunc_AddComponent_ReturnValue1;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue11;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue13;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue1 = CallFunc_K2_GetComponentToWorld_ReturnValue1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue3 = CallFunc_K2_GetComponentToWorld_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DarkenBG__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusDarkenBG__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DarkenBG__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DarkenBG__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusDarkenBG__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DarkenBG__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-UndarkenBG__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUndarkenBG__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-UndarkenBG__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-UndarkenBG__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUndarkenBG__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-UndarkenBG__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-WeaponCharge__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusWeaponCharge__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-WeaponCharge__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-WeaponCharge__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusWeaponCharge__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-WeaponCharge__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-RegularEyes__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusRegularEyes__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-RegularEyes__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-RegularEyes__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusRegularEyes__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-RegularEyes__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EyesFollowMouseAgain__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusEyesFollowMouseAgain__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EyesFollowMouseAgain__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EyesFollowMouseAgain__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusEyesFollowMouseAgain__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EyesFollowMouseAgain__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-ChangeLighting__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusChangeLighting__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-ChangeLighting__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-ChangeLighting__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusChangeLighting__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-ChangeLighting__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_CardCough__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_CardCough__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_CardCough__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_CardCough__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_CardCough__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_CardCough__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PhaseBFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PhaseBFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PhaseBFade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PhaseBFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PhaseBFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PhaseBFade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__TasslesDropOff2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade2__TasslesDropOff2__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__TasslesDropOff2__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__TasslesDropOffEvent__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade1__TasslesDropOffEvent__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__TasslesDropOffEvent__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__Trigger Particles__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__Trigger_Particles__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__Trigger Particles__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusAttack__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusAttack__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__EventTrackHit__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusAttack__EventTrackHit__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__EventTrackHit__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-SuspiciousEyes__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusSuspiciousEyes__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-SuspiciousEyes__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-SuspiciousEyes__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusSuspiciousEyes__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-SuspiciousEyes__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-PupilContracts__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusPupilContracts__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-PupilContracts__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-PupilContracts__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusPupilContracts__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-PupilContracts__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DropEyeAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusDropEyeAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DropEyeAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DropEyeAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusDropEyeAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DropEyeAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__TasslesDropOff2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusUpgrade3__TasslesDropOff2__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__TasslesDropOff2__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EquipWeapon__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusEquipWeapon__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EquipWeapon__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EquipWeapon__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TLMinusEquipWeapon__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EquipWeapon__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::AStorePinataMaster_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::AStorePinataMaster_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1");

	Params::AStorePinataMaster_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0");

	Params::AStorePinataMaster_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpTchEvt_Released(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "InpTchEvt_Released");

	Params::AStorePinataMaster_BP_C_InpTchEvt_Released_Params Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "InpTchEvt_Pressed");

	Params::AStorePinataMaster_BP_C_InpTchEvt_Pressed_Params Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OnLoaded_34AE763040BC26E1AD2CE4842CE48F91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::OnLoaded_34AE763040BC26E1AD2CE4842CE48F91(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "OnLoaded_34AE763040BC26E1AD2CE4842CE48F91");

	Params::AStorePinataMaster_BP_C_OnLoaded_34AE763040BC26E1AD2CE4842CE48F91_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CardPackStoreStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CardPackStoreStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "CardPackStoreStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReadyToAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ReadyToAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "ReadyToAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OpenPinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::OpenPinata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "OpenPinata");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.PackDestroyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::PackDestroyStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "PackDestroyStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CardEnterStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CardEnterStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "CardEnterStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.StartPackOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::StartPackOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "StartPackOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OnStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStoreState         NewStoreState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::OnStoreStateChanged(enum class EFortStoreState NewStoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "OnStoreStateChanged");

	Params::AStorePinataMaster_BP_C_OnStoreStateChanged_Params Parms{};

	Parms.NewStoreState = NewStoreState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ExitCardPackStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ExitCardPackStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "ExitCardPackStore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.Stop-DropEyeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::StopMinusDropEyeAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "Stop-DropEyeAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.Stop-SwingingEyeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::StopMinusSwingingEyeAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "Stop-SwingingEyeAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "ReceiveTick");

	Params::AStorePinataMaster_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.SpawnCandy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::SpawnCandy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "SpawnCandy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "InitiatePinata");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CameraResetComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CameraResetComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "CameraResetComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CameraTransitionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CameraTransitionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "CameraTransitionComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ExecuteUbergraph_StorePinataMaster_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AStoreCamera_Blueprint_C*>CallFunc_GetAllActorsOfClass_OutActors1                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AStoreCardReveal_BP_C*>CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortStoreState         K2Node_CustomEvent_NewStoreState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue1                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue1                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Loudness                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Duration                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Loudness1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Duration1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue2                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpeningDirectPack_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>>Temp_softclass_Variable                                          (ZeroConstructor, ReferenceParm)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseSpecificPinataWeapon_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreWeaponMaster_BP_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLimitedToES2Features_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable1                                            (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key1                                        (HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue1                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult4                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult1                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardPackDestroyComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CardPackOpeningComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RandomRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate1_FirstRun                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate1_Data                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate2_FirstRun                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate2_Data                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue2                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult5                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FKey                        Temp_struct_Variable2                                            (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key2                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key3                                        (HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate3_FirstRun                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate3_Data                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult6                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class AStoreWeaponMaster_BP_C>CallFunc_Array_Get_Item2                                         (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreCardReveal_BP_C*       CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreCamera_Blueprint_C*    CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::ExecuteUbergraph_StorePinataMaster_BP(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class USoundBase* K2Node_DynamicCast_AsSound_Base1, bool K2Node_DynamicCast_bSuccess1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue2, class USoundBase* K2Node_DynamicCast_AsSound_Base2, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AStoreCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors1, int32 CallFunc_Array_Length_ReturnValue1, TArray<class AStoreCardReveal_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Array_Index_Variable, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, bool K2Node_SwitchEnum_CmpSuccess, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult2, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, float CallFunc_GetMousePosition_LocationX1, float CallFunc_GetMousePosition_LocationY1, bool CallFunc_GetMousePosition_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, float CallFunc_BroadcastPlayerImpactAtLocation_Loudness, float CallFunc_BroadcastPlayerImpactAtLocation_Duration, bool CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue, float CallFunc_BroadcastPlayerImpactAtLocation_Loudness1, float CallFunc_BroadcastPlayerImpactAtLocation_Duration1, bool CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue1, float CallFunc_GetTimelineLength_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsOpeningDirectPack_ReturnValue, TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>>& Temp_softclass_Variable, class UClass* Temp_class_Variable, class UClass* K2Node_CustomEvent_Loaded, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_UseSpecificPinataWeapon_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AStoreWeaponMaster_BP_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsLimitedToES2Features_ReturnValue, const struct FVector& Temp_struct_Variable, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex, const struct FVector& K2Node_InputTouchEvent_Location, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex1, const struct FVector& K2Node_InputTouchEvent_Location1, const struct FKey& Temp_struct_Variable1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue1, const struct FKey& K2Node_InputKeyEvent_Key1, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult3, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, int32 Temp_int_Variable, const struct FTransform& CallFunc_TLerp_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortStoreContext* CallFunc_GetContext_ReturnValue5, class UFortStoreContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_CardPackDestroyComplete_ReturnValue, bool CallFunc_CardPackOpeningComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue7, bool K2Node_Select_Default, bool Temp_bool_Variable4, bool Temp_bool_Variable5, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_Variable6, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable1, bool Temp_bool_Variable7, bool K2Node_Select1_Default, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue2, float K2Node_Event_DeltaSeconds, bool Temp_bool_Variable8, bool Temp_bool_Variable9, int32 Temp_int_Variable2, bool Temp_bool_Variable10, bool K2Node_Select2_Default, bool Temp_bool_Variable11, bool Temp_bool_Variable12, int32 Temp_int_Variable3, bool K2Node_Select3_Default, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue2, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, int32 CallFunc_Array_Length_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue1, bool K2Node_MultiGate1_FirstRun, int32 K2Node_MultiGate1_Data, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue1, float CallFunc_Lerp_ReturnValue2, bool K2Node_MultiGate2_FirstRun, int32 K2Node_MultiGate2_Data, int32 CallFunc_Array_Add_ReturnValue2, float CallFunc_Lerp_ReturnValue3, float CallFunc_Lerp_ReturnValue4, float CallFunc_Lerp_ReturnValue5, float CallFunc_Lerp_ReturnValue6, float CallFunc_Lerp_ReturnValue7, float CallFunc_Lerp_ReturnValue8, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortStoreContext* CallFunc_GetContext_ReturnValue8, const struct FTransform& CallFunc_TLerp_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult5, const struct FKey& Temp_struct_Variable2, const struct FKey& K2Node_InputKeyEvent_Key2, const struct FKey& K2Node_InputKeyEvent_Key3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, bool K2Node_MultiGate3_FirstRun, int32 K2Node_MultiGate3_Data, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UStaticMeshComponent* CallFunc_Array_Get_Item1, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult6, bool CallFunc_K2_AttachToComponent_ReturnValue1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, TSoftClassPtr<class AStoreWeaponMaster_BP_C> CallFunc_Array_Get_Item2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 Temp_int_Array_Index_Variable2, class AStoreCardReveal_BP_C* CallFunc_Array_Get_Item3, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue4, bool Temp_bool_Has_Been_Initd_Variable1, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, int32 Temp_int_Array_Index_Variable3, class AStoreCamera_Blueprint_C* CallFunc_Array_Get_Item4, bool CallFunc_IsMobilePlatform_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue5, bool Temp_bool_IsClosed_Variable1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_BP_C", "ExecuteUbergraph_StorePinataMaster_BP");

	Params::AStorePinataMaster_BP_C_ExecuteUbergraph_StorePinataMaster_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSound_Base1 = K2Node_DynamicCast_AsSound_Base1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue2;
	Parms.K2Node_DynamicCast_AsSound_Base2 = K2Node_DynamicCast_AsSound_Base2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors1 = CallFunc_GetAllActorsOfClass_OutActors1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.K2Node_CustomEvent_NewStoreState = K2Node_CustomEvent_NewStoreState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue3 = CallFunc_SpawnSoundAttached_ReturnValue3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue1 = CallFunc_K2_GetComponentToWorld_ReturnValue1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult1 = CallFunc_K2_SetWorldTransform_SweepHitResult1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult2 = CallFunc_K2_SetWorldTransform_SweepHitResult2;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.CallFunc_GetMousePosition_LocationX1 = CallFunc_GetMousePosition_LocationX1;
	Parms.CallFunc_GetMousePosition_LocationY1 = CallFunc_GetMousePosition_LocationY1;
	Parms.CallFunc_GetMousePosition_ReturnValue1 = CallFunc_GetMousePosition_ReturnValue1;
	Parms.CallFunc_MakeVector2D_ReturnValue1 = CallFunc_MakeVector2D_ReturnValue1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue1 = CallFunc_GetSocketTransform_ReturnValue1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Loudness = CallFunc_BroadcastPlayerImpactAtLocation_Loudness;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Duration = CallFunc_BroadcastPlayerImpactAtLocation_Duration;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue = CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Loudness1 = CallFunc_BroadcastPlayerImpactAtLocation_Loudness1;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Duration1 = CallFunc_BroadcastPlayerImpactAtLocation_Duration1;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue1 = CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue1;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue3 = CallFunc_MakeVector2D_ReturnValue3;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X1 = CallFunc_BreakVector2D_X1;
	Parms.CallFunc_BreakVector2D_Y1 = CallFunc_BreakVector2D_Y1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor1 = K2Node_MakeStruct_LinearColor1;
	Parms.CallFunc_GetSocketTransform_ReturnValue2 = CallFunc_GetSocketTransform_ReturnValue2;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue1 = CallFunc_GetVectorParameterValue_ReturnValue1;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsOpeningDirectPack_ReturnValue = CallFunc_IsOpeningDirectPack_ReturnValue;
	Parms.Temp_softclass_Variable = Temp_softclass_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP = K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_UseSpecificPinataWeapon_ReturnValue = CallFunc_UseSpecificPinataWeapon_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsLimitedToES2Features_ReturnValue = CallFunc_IsLimitedToES2Features_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_InputTouchEvent_FingerIndex = K2Node_InputTouchEvent_FingerIndex;
	Parms.K2Node_InputTouchEvent_Location = K2Node_InputTouchEvent_Location;
	Parms.K2Node_InputTouchEvent_FingerIndex1 = K2Node_InputTouchEvent_FingerIndex1;
	Parms.K2Node_InputTouchEvent_Location1 = K2Node_InputTouchEvent_Location1;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue1 = CallFunc_Conv_LinearColorToColor_ReturnValue1;
	Parms.K2Node_InputKeyEvent_Key1 = K2Node_InputKeyEvent_Key1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue1 = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult3 = CallFunc_K2_SetWorldTransform_SweepHitResult3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_TLerp_ReturnValue1 = CallFunc_TLerp_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult4 = CallFunc_K2_SetWorldTransform_SweepHitResult4;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult1 = CallFunc_K2_SetWorldLocation_SweepHitResult1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_CardPackDestroyComplete_ReturnValue = CallFunc_CardPackDestroyComplete_ReturnValue;
	Parms.CallFunc_CardPackOpeningComplete_ReturnValue = CallFunc_CardPackOpeningComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue2 = CallFunc_GetVectorParameterValue_ReturnValue2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue2 = CallFunc_Conv_LinearColorToColor_ReturnValue2;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomRotator_ReturnValue = CallFunc_RandomRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue1 = CallFunc_AddComponent_ReturnValue1;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.K2Node_MultiGate1_FirstRun = K2Node_MultiGate1_FirstRun;
	Parms.K2Node_MultiGate1_Data = K2Node_MultiGate1_Data;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;
	Parms.K2Node_MultiGate2_FirstRun = K2Node_MultiGate2_FirstRun;
	Parms.K2Node_MultiGate2_Data = K2Node_MultiGate2_Data;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Lerp_ReturnValue3 = CallFunc_Lerp_ReturnValue3;
	Parms.CallFunc_Lerp_ReturnValue4 = CallFunc_Lerp_ReturnValue4;
	Parms.CallFunc_Lerp_ReturnValue5 = CallFunc_Lerp_ReturnValue5;
	Parms.CallFunc_Lerp_ReturnValue6 = CallFunc_Lerp_ReturnValue6;
	Parms.CallFunc_Lerp_ReturnValue7 = CallFunc_Lerp_ReturnValue7;
	Parms.CallFunc_Lerp_ReturnValue8 = CallFunc_Lerp_ReturnValue8;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_TLerp_ReturnValue2 = CallFunc_TLerp_ReturnValue2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult5 = CallFunc_K2_SetWorldTransform_SweepHitResult5;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_InputKeyEvent_Key2 = K2Node_InputKeyEvent_Key2;
	Parms.K2Node_InputKeyEvent_Key3 = K2Node_InputKeyEvent_Key3;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.K2Node_MultiGate3_FirstRun = K2Node_MultiGate3_FirstRun;
	Parms.K2Node_MultiGate3_Data = K2Node_MultiGate3_Data;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult6 = CallFunc_K2_SetWorldTransform_SweepHitResult6;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue1 = CallFunc_K2_AttachToComponent_ReturnValue1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_BreakTransform_Location3 = CallFunc_BreakTransform_Location3;
	Parms.CallFunc_BreakTransform_Rotation3 = CallFunc_BreakTransform_Rotation3;
	Parms.CallFunc_BreakTransform_Scale3 = CallFunc_BreakTransform_Scale3;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;

	UObject::ProcessEvent(Func, &Parms);

}

}


