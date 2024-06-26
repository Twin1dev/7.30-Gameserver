#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FriendLink.FriendLink_C
// (None)

class UClass* UFriendLink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendLink_C");

	return Clss;
}


// FriendLink_C FriendLink.Default__FriendLink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFriendLink_C* UFriendLink_C::GetDefaultObj()
{
	static class UFriendLink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendLink_C*>(UFriendLink_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FriendLink.FriendLink_C.GetStartingShareText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Button_Text                                                      (Parm, OutParm)
// enum class EShareButtonType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            (None)
// class FText                        K2Node_Select_Default                                            (None)

void UFriendLink_C::GetStartingShareText(class FText* Button_Text, enum class EShareButtonType Temp_byte_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendLink_C", "GetStartingShareText");

	Params::UFriendLink_C_GetStartingShareText_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Button_Text != nullptr)
		*Button_Text = Parms.Button_Text;

}


// Function FriendLink.FriendLink_C.OnCopiedToClipboard
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendLink_C::OnCopiedToClipboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendLink_C", "OnCopiedToClipboard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendLink.FriendLink_C.OnShareButtonTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EShareButtonType        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendLink_C::OnShareButtonTypeSet(enum class EShareButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendLink_C", "OnShareButtonTypeSet");

	Params::UFriendLink_C_OnShareButtonTypeSet_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendLink.FriendLink_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendLink_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendLink_C", "PreConstruct");

	Params::UFriendLink_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendLink.FriendLink_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendLink_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendLink_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature");

	Params::UFriendLink_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendLink.FriendLink_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendLink_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendLink_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendLink.FriendLink_C.ExecuteUbergraph_FriendLink
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShareButtonType        K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetStartingShareText_Button_Text                        (None)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetStartingShareText_Button_Text1                       (None)
// enum class EShareButtonType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromMaterial_ReturnValue                       (None)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendLink_C::ExecuteUbergraph_FriendLink(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, enum class EShareButtonType K2Node_Event_Type, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetStartingShareText_Button_Text, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button1, bool K2Node_DynamicCast_bSuccess1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button2, bool K2Node_DynamicCast_bSuccess2, class FText CallFunc_GetStartingShareText_Button_Text1, enum class EShareButtonType Temp_byte_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, class UMaterialInterface* K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendLink_C", "ExecuteUbergraph_FriendLink");

	Params::UFriendLink_C_ExecuteUbergraph_FriendLink_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetStartingShareText_Button_Text = CallFunc_GetStartingShareText_Button_Text;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button1 = K2Node_DynamicCast_AsIcon_Text_Button1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button2 = K2Node_DynamicCast_AsIcon_Text_Button2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetStartingShareText_Button_Text1 = CallFunc_GetStartingShareText_Button_Text1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_MakeBrushFromMaterial_ReturnValue = CallFunc_MakeBrushFromMaterial_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


