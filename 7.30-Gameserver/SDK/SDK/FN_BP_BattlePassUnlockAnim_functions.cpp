#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C
// (None)

class UClass* UBP_BattlePassUnlockAnim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattlePassUnlockAnim_C");

	return Clss;
}


// BP_BattlePassUnlockAnim_C BP_BattlePassUnlockAnim.Default__BP_BattlePassUnlockAnim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BattlePassUnlockAnim_C* UBP_BattlePassUnlockAnim_C::GetDefaultObj()
{
	static class UBP_BattlePassUnlockAnim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BattlePassUnlockAnim_C*>(UBP_BattlePassUnlockAnim_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBP_BattlePassUnlockAnim_C::GetWidgetForFramingViewedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "GetWidgetForFramingViewedItem");

	Params::UBP_BattlePassUnlockAnim_C_GetWidgetForFramingViewedItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattlePassUnlockAnim_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "PreConstruct");

	Params::UBP_BattlePassUnlockAnim_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.AnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BattlePassUnlockAnim_C::AnimComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "AnimComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BattlePassUnlockAnim_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_BattlePassUnlockAnim_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BattlePassUnlockAnim_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "PlayIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.ExecuteUbergraph_BP_BattlePassUnlockAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemReceived_Base_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattlePassUnlockAnim_C::ExecuteUbergraph_BP_BattlePassUnlockAnim(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UItemReceived_Base_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "ExecuteUbergraph_BP_BattlePassUnlockAnim");

	Params::UBP_BattlePassUnlockAnim_C_ExecuteUbergraph_BP_BattlePassUnlockAnim_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


