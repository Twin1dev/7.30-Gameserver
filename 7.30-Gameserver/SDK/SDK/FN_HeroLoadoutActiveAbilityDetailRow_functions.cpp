#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C
// (None)

class UClass* UHeroLoadoutActiveAbilityDetailRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeroLoadoutActiveAbilityDetailRow_C");

	return Clss;
}


// HeroLoadoutActiveAbilityDetailRow_C HeroLoadoutActiveAbilityDetailRow.Default__HeroLoadoutActiveAbilityDetailRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeroLoadoutActiveAbilityDetailRow_C* UHeroLoadoutActiveAbilityDetailRow_C::GetDefaultObj()
{
	static class UHeroLoadoutActiveAbilityDetailRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeroLoadoutActiveAbilityDetailRow_C*>(UHeroLoadoutActiveAbilityDetailRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetDisplayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDescription                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseVerboseDescription                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailRow_C::SetDisplayState(bool ShowName, bool ShowDescription, bool UseVerboseDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "SetDisplayState");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_SetDisplayState_Params Parms{};

	Parms.ShowName = ShowName;
	Parms.ShowDescription = ShowDescription;
	Parms.UseVerboseDescription = UseVerboseDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetAbilityKit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*             AbilityKit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailRow_C::SetAbilityKit(class UFortAbilityKit* AbilityKit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "SetAbilityKit");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_SetAbilityKit_Params Parms{};

	Parms.AbilityKit = AbilityKit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.IsAbilityUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHeroLoadoutActiveAbilityDetailRow_C::IsAbilityUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "IsAbilityUnlocked");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_IsAbilityUnlocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.GetAbilityKit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortAbilityKit* UHeroLoadoutActiveAbilityDetailRow_C::GetAbilityKit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "GetAbilityKit");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_GetAbilityKit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*                   Hero                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailRow_C::SetHero(class UFortHero* Hero)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "SetHero");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_SetHero_Params Parms{};

	Parms.Hero = Hero;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateTextStyles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityUnlocked_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityUnlocked_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateTextStyles(bool Temp_bool_Variable, bool CallFunc_IsAbilityUnlocked_ReturnValue, bool CallFunc_IsAbilityUnlocked_ReturnValue1, bool Temp_bool_Variable1, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "UpdateTextStyles");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_UpdateTextStyles_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsAbilityUnlocked_ReturnValue = CallFunc_IsAbilityUnlocked_ReturnValue;
	Parms.CallFunc_IsAbilityUnlocked_ReturnValue1 = CallFunc_IsAbilityUnlocked_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAbilityUnlocked_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetAbilityKit_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityKit*             CallFunc_GetAbilityKit_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortGadgetItemDefinition*>CallFunc_BP_GetGadgets_GadgetItemDefinitions                     (ZeroConstructor, ReferenceParm)
// class UFortGadgetItemDefinition*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetAbilityKit_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             (None)
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush                                (None)
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush1                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   (None)
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        K2Node_Select2_Default                                           (None)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateFromState(bool CallFunc_IsAbilityUnlocked_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue1, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, class UFortGadgetItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush1, bool Temp_bool_Variable, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select1_Default, class FText Temp_text_Variable, class FText K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "UpdateFromState");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_UpdateFromState_Params Parms{};

	Parms.CallFunc_IsAbilityUnlocked_ReturnValue = CallFunc_IsAbilityUnlocked_ReturnValue;
	Parms.CallFunc_GetAbilityKit_ReturnValue = CallFunc_GetAbilityKit_ReturnValue;
	Parms.CallFunc_GetAbilityKit_ReturnValue1 = CallFunc_GetAbilityKit_ReturnValue1;
	Parms.CallFunc_BP_GetGadgets_GadgetItemDefinitions = CallFunc_BP_GetGadgets_GadgetItemDefinitions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetAbilityKit_ReturnValue2 = CallFunc_GetAbilityKit_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.CallFunc_ResizeBrush_ResizedBrush = CallFunc_ResizeBrush_ResizedBrush;
	Parms.CallFunc_ResizeBrush_ResizedBrush1 = CallFunc_ResizeBrush_ResizedBrush1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateBrushDrawType     Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetStandardBrushSize_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateBrushDrawType     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class UWidget*                     K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateFromStyle(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateBrushDrawType Temp_byte_Variable2, const struct FVector2D& CallFunc_GetStandardBrushSize_ReturnValue, enum class ESlateBrushDrawType Temp_byte_Variable3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Variable2, enum class ESlateBrushDrawType K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UWidget* K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "UpdateFromStyle");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_UpdateFromStyle_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetStandardBrushSize_ReturnValue = CallFunc_GetStandardBrushSize_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "PreConstruct");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHeroLoadoutActiveAbilityDetailRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailRow_C::ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow");

	Params::UHeroLoadoutActiveAbilityDetailRow_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


