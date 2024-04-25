#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PartySuggestionButton.PartySuggestionButton_C
// (None)

class UClass* UPartySuggestionButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartySuggestionButton_C");

	return Clss;
}


// PartySuggestionButton_C PartySuggestionButton.Default__PartySuggestionButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartySuggestionButton_C* UPartySuggestionButton_C::GetDefaultObj()
{
	static class UPartySuggestionButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartySuggestionButton_C*>(UPartySuggestionButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PartySuggestionButton.PartySuggestionButton_C.SetupMIDReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartySuggestionButton_C::SetupMIDReferences(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "SetupMIDReferences");

	Params::UPartySuggestionButton_C_SetupMIDReferences_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartySuggestionButton.PartySuggestionButton_C.SetMainMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    BorderMID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    TailMID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    SparklesMID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LC_Cur_Border_L                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LC_CurBorder_R                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurMIDScalar_ShapeChange                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartySuggestionButton_C::SetMainMIDs(class UMaterialInstanceDynamic* BorderMID, class UMaterialInstanceDynamic* TailMID, class UMaterialInstanceDynamic* SparklesMID, const struct FLinearColor& LC_Cur_Border_L, const struct FLinearColor& LC_CurBorder_R, float CurMIDScalar_ShapeChange, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, float CallFunc_K2_GetScalarParameterValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "SetMainMIDs");

	Params::UPartySuggestionButton_C_SetMainMIDs_Params Parms{};

	Parms.BorderMID = BorderMID;
	Parms.TailMID = TailMID;
	Parms.SparklesMID = SparklesMID;
	Parms.LC_Cur_Border_L = LC_Cur_Border_L;
	Parms.LC_CurBorder_R = LC_CurBorder_R;
	Parms.CurMIDScalar_ShapeChange = CurMIDScalar_ShapeChange;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue1 = CallFunc_K2_GetVectorParameterValue_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartySuggestionButton.PartySuggestionButton_C.InitPhysAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFloatSpringState           K2Node_MakeStruct_FloatSpringState                               (NoDestructor)
// struct FFloatSpringState           K2Node_MakeStruct_FloatSpringState1                              (NoDestructor)

void UPartySuggestionButton_C::InitPhysAnim(const struct FFloatSpringState& K2Node_MakeStruct_FloatSpringState, const struct FFloatSpringState& K2Node_MakeStruct_FloatSpringState1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "InitPhysAnim");

	Params::UPartySuggestionButton_C_InitPhysAnim_Params Parms{};

	Parms.K2Node_MakeStruct_FloatSpringState = K2Node_MakeStruct_FloatSpringState;
	Parms.K2Node_MakeStruct_FloatSpringState1 = K2Node_MakeStruct_FloatSpringState1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartySuggestionButton.PartySuggestionButton_C.InitMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::InitMIDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "InitMIDs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.HandleOutroAnimationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::HandleOutroAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "HandleOutroAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartySuggestionButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "Tick");

	Params::UPartySuggestionButton_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartySuggestionButton.PartySuggestionButton_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "PlayIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.OnDisplayInfoUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDateTime                   LFGTime                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInvited                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsPlaying                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartySuggestionButton_C::OnDisplayInfoUpdated(struct FDateTime& LFGTime, bool bIsInvited, bool bIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnDisplayInfoUpdated");

	Params::UPartySuggestionButton_C_OnDisplayInfoUpdated_Params Parms{};

	Parms.LFGTime = LFGTime;
	Parms.bIsInvited = bIsInvited;
	Parms.bIsPlaying = bIsPlaying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartySuggestionButton.PartySuggestionButton_C.OnSuggestionAccepted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::OnSuggestionAccepted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnSuggestionAccepted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.OnDismissSuggestion
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::OnDismissSuggestion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnDismissSuggestion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.OnNewSuggestionAdded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::OnNewSuggestionAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnNewSuggestionAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::PlayOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "PlayOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartySuggestionButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySuggestionButton.PartySuggestionButton_C.ExecuteUbergraph_PartySuggestionButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_DateTimeMinValue_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FloatSpringInterp_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyInProgressEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   K2Node_Event_LFGTime                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsInvited                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsPlaying                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartySuggestionButton_C::ExecuteUbergraph_PartySuggestionButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, float Temp_float_Variable, bool Temp_bool_Variable3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FDateTime& CallFunc_DateTimeMinValue_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, bool CallFunc_IsAnimationPlaying_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Less_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FloatSpringInterp_ReturnValue, class UMaterialInstanceDynamic* K2Node_Select1_Default, class UMaterialInstanceDynamic* K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default, bool CallFunc_IsPartyInProgressEnabled_ReturnValue, const struct FDateTime& K2Node_Event_LFGTime, bool K2Node_Event_bIsInvited, bool K2Node_Event_bIsPlaying, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySuggestionButton_C", "ExecuteUbergraph_PartySuggestionButton");

	Params::UPartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_DateTimeMinValue_ReturnValue = CallFunc_DateTimeMinValue_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue4 = CallFunc_PlayAnimation_ReturnValue4;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_FloatSpringInterp_ReturnValue = CallFunc_FloatSpringInterp_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_IsPartyInProgressEnabled_ReturnValue = CallFunc_IsPartyInProgressEnabled_ReturnValue;
	Parms.K2Node_Event_LFGTime = K2Node_Event_LFGTime;
	Parms.K2Node_Event_bIsInvited = K2Node_Event_bIsInvited;
	Parms.K2Node_Event_bIsPlaying = K2Node_Event_bIsPlaying;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue = CallFunc_NotEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue1 = CallFunc_IsAnimationPlaying_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue5 = CallFunc_PlayAnimation_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}

}


