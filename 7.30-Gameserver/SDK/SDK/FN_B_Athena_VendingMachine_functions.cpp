#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C
// (Actor)

class UClass* AB_Athena_VendingMachine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Athena_VendingMachine_C");

	return Clss;
}


// B_Athena_VendingMachine_C B_Athena_VendingMachine.Default__B_Athena_VendingMachine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Athena_VendingMachine_C* AB_Athena_VendingMachine_C::GetDefaultObj()
{
	static class AB_Athena_VendingMachine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Athena_VendingMachine_C*>(AB_Athena_VendingMachine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.GetOverrideRarity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFortRarity             Rarity                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               bHasOverride                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             NewRarity                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetOverrideRarity_Rarity                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOverrideRarity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AB_Athena_VendingMachine_C::GetOverrideRarity(enum class EFortRarity* Rarity, bool bHasOverride, enum class EFortRarity NewRarity, enum class EFortRarity CallFunc_GetOverrideRarity_Rarity, bool CallFunc_GetOverrideRarity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "GetOverrideRarity");

	Params::AB_Athena_VendingMachine_C_GetOverrideRarity_Params Parms{};

	Parms.bHasOverride = bHasOverride;
	Parms.NewRarity = NewRarity;
	Parms.CallFunc_GetOverrideRarity_Rarity = CallFunc_GetOverrideRarity_Rarity;
	Parms.CallFunc_GetOverrideRarity_ReturnValue = CallFunc_GetOverrideRarity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rarity != nullptr)
		*Rarity = Parms.Rarity;

	return Parms.ReturnValue;

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SetRarityColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_VendingMachine_C::SetRarityColors(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "SetRarityColors");

	Params::AB_Athena_VendingMachine_C_SetRarityColors_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText AB_Athena_VendingMachine_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "BlueprintGetInteractionString");

	Params::AB_Athena_VendingMachine_C_BlueprintGetInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::SwitchHitch__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "SwitchHitch__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::SwitchHitch__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "SwitchHitch__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::VendWobble__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "VendWobble__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::VendWobble__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "VendWobble__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__Start FF Time__EventFunc
// (BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::VendWobble__Start_FF_Time__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "VendWobble__Start FF Time__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_VendingMachine_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "BlueprintOnInteract");

	Params::AB_Athena_VendingMachine_C_BlueprintOnInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::BlueprintOnBeginInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "BlueprintOnBeginInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::PlayVendFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "PlayVendFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UpdateCollectorsActiveItem
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              StartingSeedValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    InputItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    InputTexture                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentGoal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentCollectedAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentCaptureCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    OutputTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_VendingMachine_C::UpdateCollectorsActiveItem(int32 StartingSeedValue, class UFortWorldItemDefinition* InputItem, class UTexture* InputTexture, int32 CurrentGoal, int32 CurrentCollectedAmount, int32 CurrentCaptureCount, class UTexture* OutputTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "UpdateCollectorsActiveItem");

	Params::AB_Athena_VendingMachine_C_UpdateCollectorsActiveItem_Params Parms{};

	Parms.StartingSeedValue = StartingSeedValue;
	Parms.InputItem = InputItem;
	Parms.InputTexture = InputTexture;
	Parms.CurrentGoal = CurrentGoal;
	Parms.CurrentCollectedAmount = CurrentCollectedAmount;
	Parms.CurrentCaptureCount = CurrentCaptureCount;
	Parms.OutputTexture = OutputTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFailFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::PlayVendFailFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "PlayVendFailFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.OnForcedCycle
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::OnForcedCycle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "OnForcedCycle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Athena_VendingMachine_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ExecuteUbergraph_B_Athena_VendingMachine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              K2Node_Event_StartingSeedValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    K2Node_Event_InputItem                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Event_InputTexture                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CurrentGoal                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CurrentCollectedAmount                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CurrentCaptureCount                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Event_OutputTexture                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult1                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EvaluateCurveTableRow_OutXY1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetOverrideRarity_Rarity                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOverrideRarity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Athena_VendingMachine_C::ExecuteUbergraph_B_Athena_VendingMachine(int32 EntryPoint, bool Temp_bool_Variable, const struct FRotator& CallFunc_RLerp_ReturnValue, class FName Temp_name_Variable, class FName Temp_name_Variable1, bool Temp_bool_Variable1, class AFortPawn* K2Node_Event_InteractingPawn, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 K2Node_Event_StartingSeedValue, class UFortWorldItemDefinition* K2Node_Event_InputItem, class UTexture* K2Node_Event_InputTexture, int32 K2Node_Event_CurrentGoal, int32 K2Node_Event_CurrentCollectedAmount, int32 K2Node_Event_CurrentCaptureCount, class UTexture* K2Node_Event_OutputTexture, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class FName K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, float CallFunc_SelectFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY1, bool CallFunc_EvaluateCurveTableRow_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, enum class EFortRarity CallFunc_GetOverrideRarity_Rarity, bool CallFunc_GetOverrideRarity_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 K2Node_Select1_Default, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "ExecuteUbergraph_B_Athena_VendingMachine");

	Params::AB_Athena_VendingMachine_C_ExecuteUbergraph_B_Athena_VendingMachine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.K2Node_Event_StartingSeedValue = K2Node_Event_StartingSeedValue;
	Parms.K2Node_Event_InputItem = K2Node_Event_InputItem;
	Parms.K2Node_Event_InputTexture = K2Node_Event_InputTexture;
	Parms.K2Node_Event_CurrentGoal = K2Node_Event_CurrentGoal;
	Parms.K2Node_Event_CurrentCollectedAmount = K2Node_Event_CurrentCollectedAmount;
	Parms.K2Node_Event_CurrentCaptureCount = K2Node_Event_CurrentCaptureCount;
	Parms.K2Node_Event_OutputTexture = K2Node_Event_OutputTexture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_SelectFloat_ReturnValue1 = CallFunc_SelectFloat_ReturnValue1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult1 = CallFunc_K2_SetRelativeRotation_SweepHitResult1;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY1 = CallFunc_EvaluateCurveTableRow_OutXY1;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue1 = CallFunc_EvaluateCurveTableRow_ReturnValue1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOverrideRarity_Rarity = CallFunc_GetOverrideRarity_Rarity;
	Parms.CallFunc_GetOverrideRarity_ReturnValue = CallFunc_GetOverrideRarity_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


