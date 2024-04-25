#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C
// (Actor)

class UClass* AMinigameMode_FiringRangeV2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameMode_FiringRangeV2_C");

	return Clss;
}


// MinigameMode_FiringRangeV2_C MinigameMode_FiringRangeV2.Default__MinigameMode_FiringRangeV2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMinigameMode_FiringRangeV2_C* AMinigameMode_FiringRangeV2_C::GetDefaultObj()
{
	static class AMinigameMode_FiringRangeV2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMinigameMode_FiringRangeV2_C*>(AMinigameMode_FiringRangeV2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.GiftWeapons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolumeManager*          CallFunc_GetVolumeManager_OutVolumeManager                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVolumeValidityResult   CallFunc_GetVolumeManager_OutIsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AController*>         CallFunc_GetAllPlayersInVolume_ReturnValue                       (ZeroConstructor, ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameMode_FiringRangeV2_C::GiftWeapons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "GiftWeapons");

	Params::AMinigameMode_FiringRangeV2_C_GiftWeapons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetVolumeManager_OutVolumeManager = CallFunc_GetVolumeManager_OutVolumeManager;
	Parms.CallFunc_GetVolumeManager_OutIsValid = CallFunc_GetVolumeManager_OutIsValid;
	Parms.CallFunc_GetAllPlayersInVolume_ReturnValue = CallFunc_GetAllPlayersInVolume_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameMode_FiringRangeV2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.HandleMinigameStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_FiringRangeV2_C::HandleMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "HandleMinigameStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.ExecuteUbergraph_MinigameMode_FiringRangeV2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameMode_FiringRangeV2_C::ExecuteUbergraph_MinigameMode_FiringRangeV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "ExecuteUbergraph_MinigameMode_FiringRangeV2");

	Params::AMinigameMode_FiringRangeV2_C_ExecuteUbergraph_MinigameMode_FiringRangeV2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


