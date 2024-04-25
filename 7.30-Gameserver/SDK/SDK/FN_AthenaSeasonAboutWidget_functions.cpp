#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C
// (None)

class UClass* UAthenaSeasonAboutWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSeasonAboutWidget_C");

	return Clss;
}


// AthenaSeasonAboutWidget_C AthenaSeasonAboutWidget.Default__AthenaSeasonAboutWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSeasonAboutWidget_C* UAthenaSeasonAboutWidget_C::GetDefaultObj()
{
	static class UAthenaSeasonAboutWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSeasonAboutWidget_C*>(UAthenaSeasonAboutWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonAboutWidget_C::HandlePageLeft(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "HandlePageLeft");

	Params::UAthenaSeasonAboutWidget_C_HandlePageLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonAboutWidget_C::HandlePageRight(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "HandlePageRight");

	Params::UAthenaSeasonAboutWidget_C_HandlePageRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandleWidgetCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::HandleWidgetCreated(class UWidget* Widget, class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "HandleWidgetCreated");

	Params::UAthenaSeasonAboutWidget_C_HandleWidgetCreated_Params Parms{};

	Parms.Widget = Widget;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.ExecuteUbergraph_AthenaSeasonAboutWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandlePageLeft_bPassThrough                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHelpPanel_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonReward_C*       K2Node_DynamicCast_AsAthena_Season_Reward                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandlePageRight_bPassThrough                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonAboutWidget_C::ExecuteUbergraph_AthenaSeasonAboutWidget(int32 EntryPoint, bool CallFunc_HandlePageLeft_bPassThrough, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText Temp_text_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHelpPanel_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class UUIManager_C* K2Node_DynamicCast_AsUIManager1, bool K2Node_DynamicCast_bSuccess1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UWidget* K2Node_CustomEvent_Widget, class UFortItem* K2Node_CustomEvent_Item, class UAthenaSeasonReward_C* K2Node_DynamicCast_AsAthena_Season_Reward, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_HandlePageRight_bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "ExecuteUbergraph_AthenaSeasonAboutWidget");

	Params::UAthenaSeasonAboutWidget_C_ExecuteUbergraph_AthenaSeasonAboutWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HandlePageLeft_bPassThrough = CallFunc_HandlePageLeft_bPassThrough;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIManager = K2Node_DynamicCast_AsUIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.K2Node_DynamicCast_AsUIManager1 = K2Node_DynamicCast_AsUIManager1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_DynamicCast_AsAthena_Season_Reward = K2Node_DynamicCast_AsAthena_Season_Reward;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_HandlePageRight_bPassThrough = CallFunc_HandlePageRight_bPassThrough;

	UObject::ProcessEvent(Func, &Parms);

}

}


