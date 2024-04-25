#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownTournamentScreen.ShowdownTournamentScreen_C
// (None)

class UClass* UShowdownTournamentScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownTournamentScreen_C");

	return Clss;
}


// ShowdownTournamentScreen_C ShowdownTournamentScreen.Default__ShowdownTournamentScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownTournamentScreen_C* UShowdownTournamentScreen_C::GetDefaultObj()
{
	static class UShowdownTournamentScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownTournamentScreen_C*>(UShowdownTournamentScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.SetTournamentToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TournamentId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownTournamentScreen_C::SetTournamentToRepresent(const class FString& TournamentId, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentScreen_C", "SetTournamentToRepresent");

	Params::UShowdownTournamentScreen_C_SetTournamentToRepresent_Params Parms{};

	Parms.TournamentId = TournamentId;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.Handle_Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Handle_Back_PassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownTournamentScreen_C::Handle_Back(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_Handle_Back_PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentScreen_C", "Handle_Back");

	Params::UShowdownTournamentScreen_C_Handle_Back_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Handle_Back_PassThrough = CallFunc_Handle_Back_PassThrough;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShowdownTournamentScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownTournamentScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentScreen_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UShowdownTournamentScreen_C::BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentScreen_C", "BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.ExecuteUbergraph_ShowdownTournamentScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Handle_Back_PassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownTournamentScreen_C::ExecuteUbergraph_ShowdownTournamentScreen(int32 EntryPoint, bool CallFunc_Handle_Back_PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownTournamentScreen_C", "ExecuteUbergraph_ShowdownTournamentScreen");

	Params::UShowdownTournamentScreen_C_ExecuteUbergraph_ShowdownTournamentScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Handle_Back_PassThrough = CallFunc_Handle_Back_PassThrough;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


