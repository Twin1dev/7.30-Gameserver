#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionDetailsModifierRow.MissionDetailsModifierRow_C
// (None)

class UClass* UMissionDetailsModifierRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionDetailsModifierRow_C");

	return Clss;
}


// MissionDetailsModifierRow_C MissionDetailsModifierRow.Default__MissionDetailsModifierRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionDetailsModifierRow_C* UMissionDetailsModifierRow_C::GetDefaultObj()
{
	static class UMissionDetailsModifierRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionDetailsModifierRow_C*>(UMissionDetailsModifierRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        In_Name                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               In_Show_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      In_Name_Text_Style                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        In_Description                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               In_Show_Description                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      In_Desc_Text_Style                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  In_Icon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               In_Use_Small_Icon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   In_Icon_Asset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::SetData(class FText In_Name, bool In_Show_Name, class UClass* In_Name_Text_Style, class FText In_Description, bool In_Show_Description, class UClass* In_Desc_Text_Style, class UTexture2D* In_Icon, bool In_Use_Small_Icon, TSoftObjectPtr<class UTexture2D> In_Icon_Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetData");

	Params::UMissionDetailsModifierRow_C_SetData_Params Parms{};

	Parms.In_Name = In_Name;
	Parms.In_Show_Name = In_Show_Name;
	Parms.In_Name_Text_Style = In_Name_Text_Style;
	Parms.In_Description = In_Description;
	Parms.In_Show_Description = In_Show_Description;
	Parms.In_Desc_Text_Style = In_Desc_Text_Style;
	Parms.In_Icon = In_Icon;
	Parms.In_Use_Small_Icon = In_Use_Small_Icon;
	Parms.In_Icon_Asset = In_Icon_Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetIconAsset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   In_Icon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_SoftObjectReference_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetIconAsset(TSoftObjectPtr<class UTexture2D> In_Icon, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetIconAsset");

	Params::UMissionDetailsModifierRow_C_SetIconAsset_Params Parms{};

	Parms.In_Icon = In_Icon;
	Parms.CallFunc_NotEqual_SoftObjectReference_ReturnValue = CallFunc_NotEqual_SoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  In_Icon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetIcon(class UTexture2D* In_Icon, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetIcon");

	Params::UMissionDetailsModifierRow_C_SetIcon_Params Parms{};

	Parms.In_Icon = In_Icon;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetUseSmallIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_Use                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetUseSmallIcon(bool In_Use, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetUseSmallIcon");

	Params::UMissionDetailsModifierRow_C_SetUseSmallIcon_Params Parms{};

	Parms.In_Use = In_Use;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateDescriptionTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionDetailsModifierRow_C::UpdateDescriptionTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "UpdateDescriptionTextStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescriptionTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      In_Style                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetDescriptionTextStyle(class UClass* In_Style, bool CallFunc_NotEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetDescriptionTextStyle");

	Params::UMissionDetailsModifierRow_C_SetDescriptionTextStyle_Params Parms{};

	Parms.In_Style = In_Style;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateShowDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::UpdateShowDescription(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "UpdateShowDescription");

	Params::UMissionDetailsModifierRow_C_UpdateShowDescription_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_Show                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetShowDescription(bool In_Show, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetShowDescription");

	Params::UMissionDetailsModifierRow_C_SetShowDescription_Params Parms{};

	Parms.In_Show = In_Show;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        In_Description                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetDescription(class FText In_Description, bool CallFunc_NotEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetDescription");

	Params::UMissionDetailsModifierRow_C_SetDescription_Params Parms{};

	Parms.In_Description = In_Description;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateNameTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionDetailsModifierRow_C::UpdateNameTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "UpdateNameTextStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateShowName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::UpdateShowName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "UpdateShowName");

	Params::UMissionDetailsModifierRow_C_UpdateShowName_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetNameTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      In_Style                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetNameTextStyle(class UClass* In_Style, bool CallFunc_NotEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetNameTextStyle");

	Params::UMissionDetailsModifierRow_C_SetNameTextStyle_Params Parms{};

	Parms.In_Style = In_Style;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_Show                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetShowName(bool In_Show, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetShowName");

	Params::UMissionDetailsModifierRow_C_SetShowName_Params Parms{};

	Parms.In_Show = In_Show;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        In_Name                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::SetName(class FText In_Name, bool CallFunc_NotEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "SetName");

	Params::UMissionDetailsModifierRow_C_SetName_Params Parms{};

	Parms.In_Name = In_Name;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Normal_Size                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Small_Size                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::UpdateIcon(const struct FVector2D& Normal_Size, const struct FVector2D& Small_Size, bool Temp_bool_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, bool Temp_bool_Variable1, float K2Node_Select_Default, float K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "UpdateIcon");

	Params::UMissionDetailsModifierRow_C_UpdateIcon_Params Parms{};

	Parms.Normal_Size = Normal_Size;
	Parms.Small_Size = Small_Size;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X1 = CallFunc_BreakVector2D_X1;
	Parms.CallFunc_BreakVector2D_Y1 = CallFunc_BreakVector2D_Y1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionDetailsModifierRow_C::UpdateDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "UpdateDescription");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionDetailsModifierRow_C::UpdateName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "UpdateName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Show Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::Show_Label(bool ShowLabel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "Show Label");

	Params::UMissionDetailsModifierRow_C_Show_Label_Params Parms{};

	Parms.ShowLabel = ShowLabel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::PlayIntroAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "PlayIntroAnimation");

	Params::UMissionDetailsModifierRow_C_PlayIntroAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NormalSize                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::Update(const struct FVector2D& NormalSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "Update");

	Params::UMissionDetailsModifierRow_C_Update_Params Parms{};

	Parms.NormalSize = NormalSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionDetailsModifierRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::ExecuteUbergraph_MissionDetailsModifierRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDetailsModifierRow_C", "ExecuteUbergraph_MissionDetailsModifierRow");

	Params::UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


