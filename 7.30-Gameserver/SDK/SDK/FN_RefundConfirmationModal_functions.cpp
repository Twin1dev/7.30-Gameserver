#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RefundConfirmationModal.RefundConfirmationModal_C
// (None)

class UClass* URefundConfirmationModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RefundConfirmationModal_C");

	return Clss;
}


// RefundConfirmationModal_C RefundConfirmationModal.Default__RefundConfirmationModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URefundConfirmationModal_C* URefundConfirmationModal_C::GetDefaultObj()
{
	static class URefundConfirmationModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URefundConfirmationModal_C*>(URefundConfirmationModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RefundConfirmationModal.RefundConfirmationModal_C.SetRefundsRemainingText
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RefundsRemaining                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalRefunds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URefundConfirmationModal_C::SetRefundsRemainingText(int32 RefundsRemaining, int32 TotalRefunds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RefundConfirmationModal_C", "SetRefundsRemainingText");

	Params::URefundConfirmationModal_C_SetRefundsRemainingText_Params Parms{};

	Parms.RefundsRemaining = RefundsRemaining;
	Parms.TotalRefunds = TotalRefunds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RefundConfirmationModal.RefundConfirmationModal_C.ExecuteUbergraph_RefundConfirmationModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RefundsRemaining                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalRefunds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue1                                     (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URefundConfirmationModal_C::ExecuteUbergraph_RefundConfirmationModal(int32 EntryPoint, int32 K2Node_Event_RefundsRemaining, int32 K2Node_Event_TotalRefunds, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RefundConfirmationModal_C", "ExecuteUbergraph_RefundConfirmationModal");

	Params::URefundConfirmationModal_C_ExecuteUbergraph_RefundConfirmationModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RefundsRemaining = K2Node_Event_RefundsRemaining;
	Parms.K2Node_Event_TotalRefunds = K2Node_Event_TotalRefunds;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


