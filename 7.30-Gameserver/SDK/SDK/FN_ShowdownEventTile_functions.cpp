#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownEventTile.ShowdownEventTile_C
// (None)

class UClass* UShowdownEventTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownEventTile_C");

	return Clss;
}


// ShowdownEventTile_C ShowdownEventTile.Default__ShowdownEventTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownEventTile_C* UShowdownEventTile_C::GetDefaultObj()
{
	static class UShowdownEventTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownEventTile_C*>(UShowdownEventTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownEventTile.ShowdownEventTile_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TournamentInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShowdownEventTile_C::SetData(const class FString& TournamentInfo, const class FString& EventInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "SetData");

	Params::UShowdownEventTile_C_SetData_Params Parms{};

	Parms.TournamentInfo = TournamentInfo;
	Parms.EventInfo = EventInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTile_C::EventIntro(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventIntro");

	Params::UShowdownEventTile_C_EventIntro_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventResize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Out                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownEventTile_C::EventResize(bool Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventResize");

	Params::UShowdownEventTile_C_EventResize_Params Parms{};

	Parms.Out = Out;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UShowdownEventTile_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "OnAddedToFocusPath");

	Params::UShowdownEventTile_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UShowdownEventTile_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "OnRemovedFromFocusPath");

	Params::UShowdownEventTile_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventSetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortShowdownEventState EventState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTile_C::EventSetState(enum class EFortShowdownEventState EventState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventSetState");

	Params::UShowdownEventTile_C_EventSetState_Params Parms{};

	Parms.EventState = EventState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTile_C::EventColorize(const struct FFortTournamentDisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventColorize");

	Params::UShowdownEventTile_C_EventColorize_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTile_C::EventColorizeDispatch(const struct FFortTournamentDisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventColorizeDispatch");

	Params::UShowdownEventTile_C_EventColorizeDispatch_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Out                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent1                                       (NoDestructor)
// float                              CallFunc_PauseAnimation_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// enum class EFortShowdownEventState K2Node_CustomEvent_EventState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_DisplayInfo1                                  (None)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_DisplayInfo                                   (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTile_C::ExecuteUbergraph_ShowdownEventTile(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable2, bool Temp_bool_Variable2, int32 K2Node_CustomEvent_Index, float CallFunc_Multiply_IntFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_Out, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetStartTime_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue4, float CallFunc_PauseAnimation_ReturnValue5, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, float CallFunc_GetEndTime_ReturnValue2, float CallFunc_GetStartTime_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, float CallFunc_GetEndTime_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue2, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5, float Temp_float_Variable3, const struct FFocusEvent& K2Node_Event_InFocusEvent1, float CallFunc_PauseAnimation_ReturnValue6, float CallFunc_GetStartTime_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue7, bool CallFunc_LessEqual_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_GetEndTime_ReturnValue4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue8, float CallFunc_GetStartTime_ReturnValue4, float CallFunc_PauseAnimation_ReturnValue9, bool CallFunc_LessEqual_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_GetEndTime_ReturnValue5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue7, float CallFunc_Subtract_FloatFloat_ReturnValue4, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class EFortShowdownEventState K2Node_CustomEvent_EventState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, float Temp_float_Variable4, bool Temp_bool_Variable3, float K2Node_Select1_Default, float CallFunc_PauseAnimation_ReturnValue10, float CallFunc_GetStartTime_ReturnValue5, float CallFunc_PauseAnimation_ReturnValue11, bool CallFunc_LessEqual_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue8, float CallFunc_GetEndTime_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float K2Node_Select2_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue9, bool Temp_bool_Variable4, float K2Node_Select3_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue10, float Temp_float_Variable5, bool Temp_bool_Variable5, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo1, float K2Node_Select4_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue11, float Temp_float_Variable6, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable6, float Temp_float_Variable7, float K2Node_Select5_Default, float K2Node_Select6_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue12, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "ExecuteUbergraph_ShowdownEventTile");

	Params::UShowdownEventTile_C_ExecuteUbergraph_ShowdownEventTile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Out = K2Node_CustomEvent_Out;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue1 = CallFunc_PauseAnimation_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue1 = CallFunc_GetEndTime_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue1 = CallFunc_GetStartTime_ReturnValue1;
	Parms.CallFunc_PauseAnimation_ReturnValue2 = CallFunc_PauseAnimation_ReturnValue2;
	Parms.CallFunc_PauseAnimation_ReturnValue3 = CallFunc_PauseAnimation_ReturnValue3;
	Parms.CallFunc_PauseAnimation_ReturnValue4 = CallFunc_PauseAnimation_ReturnValue4;
	Parms.CallFunc_PauseAnimation_ReturnValue5 = CallFunc_PauseAnimation_ReturnValue5;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue1 = CallFunc_LessEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;
	Parms.CallFunc_GetEndTime_ReturnValue2 = CallFunc_GetEndTime_ReturnValue2;
	Parms.CallFunc_GetStartTime_ReturnValue2 = CallFunc_GetStartTime_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue2 = CallFunc_LessEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_PlayAnimation_ReturnValue4 = CallFunc_PlayAnimation_ReturnValue4;
	Parms.CallFunc_GetEndTime_ReturnValue3 = CallFunc_GetEndTime_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue5 = CallFunc_PlayAnimation_ReturnValue5;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.K2Node_Event_InFocusEvent1 = K2Node_Event_InFocusEvent1;
	Parms.CallFunc_PauseAnimation_ReturnValue6 = CallFunc_PauseAnimation_ReturnValue6;
	Parms.CallFunc_GetStartTime_ReturnValue3 = CallFunc_GetStartTime_ReturnValue3;
	Parms.CallFunc_PauseAnimation_ReturnValue7 = CallFunc_PauseAnimation_ReturnValue7;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue3 = CallFunc_LessEqual_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetEndTime_ReturnValue4 = CallFunc_GetEndTime_ReturnValue4;
	Parms.CallFunc_PlayAnimation_ReturnValue6 = CallFunc_PlayAnimation_ReturnValue6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue3;
	Parms.CallFunc_PauseAnimation_ReturnValue8 = CallFunc_PauseAnimation_ReturnValue8;
	Parms.CallFunc_GetStartTime_ReturnValue4 = CallFunc_GetStartTime_ReturnValue4;
	Parms.CallFunc_PauseAnimation_ReturnValue9 = CallFunc_PauseAnimation_ReturnValue9;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue4 = CallFunc_LessEqual_FloatFloat_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_GetEndTime_ReturnValue5 = CallFunc_GetEndTime_ReturnValue5;
	Parms.CallFunc_PlayAnimation_ReturnValue7 = CallFunc_PlayAnimation_ReturnValue7;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue4;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_CustomEvent_EventState = K2Node_CustomEvent_EventState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.Temp_float_Variable4 = Temp_float_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_PauseAnimation_ReturnValue10 = CallFunc_PauseAnimation_ReturnValue10;
	Parms.CallFunc_GetStartTime_ReturnValue5 = CallFunc_GetStartTime_ReturnValue5;
	Parms.CallFunc_PauseAnimation_ReturnValue11 = CallFunc_PauseAnimation_ReturnValue11;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue5 = CallFunc_LessEqual_FloatFloat_ReturnValue5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_PlayAnimation_ReturnValue8 = CallFunc_PlayAnimation_ReturnValue8;
	Parms.CallFunc_GetEndTime_ReturnValue6 = CallFunc_GetEndTime_ReturnValue6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue5 = CallFunc_Subtract_FloatFloat_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue9 = CallFunc_PlayAnimation_ReturnValue9;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue10 = CallFunc_PlayAnimation_ReturnValue10;
	Parms.Temp_float_Variable5 = Temp_float_Variable5;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_CustomEvent_DisplayInfo1 = K2Node_CustomEvent_DisplayInfo1;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue11 = CallFunc_PlayAnimation_ReturnValue11;
	Parms.Temp_float_Variable6 = Temp_float_Variable6;
	Parms.K2Node_CustomEvent_DisplayInfo = K2Node_CustomEvent_DisplayInfo;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_float_Variable7 = Temp_float_Variable7;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue12 = CallFunc_PlayAnimation_ReturnValue12;
	Parms.CallFunc_PlayAnimation_ReturnValue13 = CallFunc_PlayAnimation_ReturnValue13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::OnWindowSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTile_C", "OnWindowSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


