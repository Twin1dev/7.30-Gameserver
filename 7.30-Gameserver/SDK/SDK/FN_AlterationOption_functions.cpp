#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AlterationOption.AlterationOption_C
// (None)

class UClass* UAlterationOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlterationOption_C");

	return Clss;
}


// AlterationOption_C AlterationOption.Default__AlterationOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlterationOption_C* UAlterationOption_C::GetDefaultObj()
{
	static class UAlterationOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlterationOption_C*>(UAlterationOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AlterationOption.AlterationOption_C.SetWidgetSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortBrushSize          InIconSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOption_C::SetWidgetSettings(enum class EFortBrushSize InIconSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "SetWidgetSettings");

	Params::UAlterationOption_C_SetWidgetSettings_Params Parms{};

	Parms.InIconSize = InIconSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.GetValidBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefinition_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     (None)

struct FSlateBrush UAlterationOption_C::GetValidBrush(class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "GetValidBrush");

	Params::UAlterationOption_C_GetValidBrush_Params Parms{};

	Parms.CallFunc_GetAlterationDefinition_ReturnValue = CallFunc_GetAlterationDefinition_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationOption.AlterationOption_C.HasValidBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ValidBrush                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefinition_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     (None)
// class UObject*                     CallFunc_GetBrushResource_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOption_C::HasValidBrush(bool* ValidBrush, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "HasValidBrush");

	Params::UAlterationOption_C_HasValidBrush_Params Parms{};

	Parms.CallFunc_GetAlterationDefinition_ReturnValue = CallFunc_GetAlterationDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetBrushResource_ReturnValue = CallFunc_GetBrushResource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidBrush != nullptr)
		*ValidBrush = Parms.ValidBrush;

}


// Function AlterationOption.AlterationOption_C.InitIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasValidBrush_ValidBrush                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetValidBrush_ReturnValue                               (None)
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush                                (None)

void UAlterationOption_C::InitIcon(bool CallFunc_HasValidBrush_ValidBrush, const struct FSlateBrush& CallFunc_GetValidBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "InitIcon");

	Params::UAlterationOption_C_InitIcon_Params Parms{};

	Parms.CallFunc_HasValidBrush_ValidBrush = CallFunc_HasValidBrush_ValidBrush;
	Parms.CallFunc_GetValidBrush_ReturnValue = CallFunc_GetValidBrush_ReturnValue;
	Parms.CallFunc_ResizeBrush_ResizedBrush = CallFunc_ResizeBrush_ResizedBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.IntroPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOption_C::IntroPlay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "IntroPlay");

	Params::UAlterationOption_C_IntroPlay_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.IntroReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOption_C::IntroReset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "IntroReset");

	Params::UAlterationOption_C_IntroReset_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.SetupPips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefinition_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)
// float                              CallFunc_GetNextPipCount_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentPipCount_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOption_C::SetupPips(class UMaterialInstanceDynamic* Mid, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, float CallFunc_GetNextPipCount_ReturnValue, float CallFunc_GetCurrentPipCount_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "SetupPips");

	Params::UAlterationOption_C_SetupPips_Params Parms{};

	Parms.Mid = Mid;
	Parms.CallFunc_GetAlterationDefinition_ReturnValue = CallFunc_GetAlterationDefinition_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetNextPipCount_ReturnValue = CallFunc_GetNextPipCount_ReturnValue;
	Parms.CallFunc_GetCurrentPipCount_ReturnValue = CallFunc_GetCurrentPipCount_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.OnSetup
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationOption_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationOption.AlterationOption_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOption_C::HandleInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "HandleInputMethodChanged");

	Params::UAlterationOption_C_HandleInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.ExecuteUbergraph_AlterationOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefinition_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAlterationOption_C::ExecuteUbergraph_AlterationOption(int32 EntryPoint, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOption_C", "ExecuteUbergraph_AlterationOption");

	Params::UAlterationOption_C_ExecuteUbergraph_AlterationOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAlterationDefinition_ReturnValue = CallFunc_GetAlterationDefinition_ReturnValue;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


