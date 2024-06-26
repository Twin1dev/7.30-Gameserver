#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UserListHeaderEntry.UserListHeaderEntry_C
// (None)

class UClass* UUserListHeaderEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserListHeaderEntry_C");

	return Clss;
}


// UserListHeaderEntry_C UserListHeaderEntry.Default__UserListHeaderEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUserListHeaderEntry_C* UUserListHeaderEntry_C::GetDefaultObj()
{
	static class UUserListHeaderEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserListHeaderEntry_C*>(UUserListHeaderEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserListHeaderEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListHeaderEntry_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUserListHeaderEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListHeaderEntry_C", "BP_OnItemExpansionChanged");

	Params::UUserListHeaderEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserListHeaderEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListHeaderEntry_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UserListHeaderEntry.UserListHeaderEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUserListHeaderEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListHeaderEntry_C", "OnListItemObjectSet");

	Params::UUserListHeaderEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UserListHeaderEntry.UserListHeaderEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserListHeaderEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListHeaderEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsListItemExpanded_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo1                                 (HasGetValueTypeHash)

void UUserListHeaderEntry_C::ExecuteUbergraph_UserListHeaderEntry(int32 EntryPoint, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable1, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable2, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool K2Node_Event_bIsExpanded, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_IsListItemExpanded_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsMobileGame_ReturnValue, float K2Node_Select1_Default, int32 K2Node_Select2_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListHeaderEntry_C", "ExecuteUbergraph_UserListHeaderEntry");

	Params::UUserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_IsListItemExpanded_ReturnValue = CallFunc_IsListItemExpanded_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateFontInfo1 = K2Node_MakeStruct_SlateFontInfo1;

	UObject::ProcessEvent(Func, &Parms);

}

}


