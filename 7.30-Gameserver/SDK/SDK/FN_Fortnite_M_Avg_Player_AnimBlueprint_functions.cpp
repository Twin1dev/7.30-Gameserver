#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C
// (None)

class UClass* UFortnite_M_Avg_Player_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fortnite_M_Avg_Player_AnimBlueprint_C");

	return Clss;
}


// Fortnite_M_Avg_Player_AnimBlueprint_C Fortnite_M_Avg_Player_AnimBlueprint.Default__Fortnite_M_Avg_Player_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortnite_M_Avg_Player_AnimBlueprint_C* UFortnite_M_Avg_Player_AnimBlueprint_C::GetDefaultObj()
{
	static class UFortnite_M_Avg_Player_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortnite_M_Avg_Player_AnimBlueprint_C*>(UFortnite_M_Avg_Player_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharPartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance*     CharPart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CharPartEvent(class UFortPlayerAnimInstance* CharPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "CharPartEvent");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent_Params Parms{};

	Parms.CharPart = CharPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_playFacialAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_playFacialAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimInstance*     K2Node_CustomEvent_CharPart                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn1, bool K2Node_DynamicCast_bSuccess3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UFortPlayerAnimInstance* K2Node_CustomEvent_CharPart, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue1 = CallFunc_TryGetPawnOwner_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Pawn1 = K2Node_DynamicCast_AsFort_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn = K2Node_DynamicCast_AsInterface_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn1 = K2Node_DynamicCast_AsInterface_Player_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CustomEvent_CharPart = K2Node_CustomEvent_CharPart;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance*     CharPart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MenuScreenDispatcher__DelegateSignature(class UFortPlayerAnimInstance* CharPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MenuScreenDispatcher__DelegateSignature");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MenuScreenDispatcher__DelegateSignature_Params Parms{};

	Parms.CharPart = CharPart;

	UObject::ProcessEvent(Func, &Parms);

}

}


