#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C
// (None)

class UClass* UInviteListEntry_PartyInvite_XS1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InviteListEntry_PartyInvite_XS1_C");

	return Clss;
}


// InviteListEntry_PartyInvite_XS1_C InviteListEntry_PartyInvite_XS1.Default__InviteListEntry_PartyInvite_XS1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInviteListEntry_PartyInvite_XS1_C* UInviteListEntry_PartyInvite_XS1_C::GetDefaultObj()
{
	static class UInviteListEntry_PartyInvite_XS1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInviteListEntry_PartyInvite_XS1_C*>(UInviteListEntry_PartyInvite_XS1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.HandleOnlineIndicatorView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnlineStatus           OnlineStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnlineStatus           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInviteListEntry_PartyInvite_XS1_C::HandleOnlineIndicatorView(enum class EOnlineStatus OnlineStatus, enum class EOnlineStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "HandleOnlineIndicatorView");

	Params::UInviteListEntry_PartyInvite_XS1_C_HandleOnlineIndicatorView_Params Parms{};

	Parms.OnlineStatus = OnlineStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInviteListEntry_PartyInvite_XS1_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInviteListEntry_PartyInvite_XS1_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInviteListEntry_PartyInvite_XS1_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UInviteListEntry_PartyInvite_XS1_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.ExecuteUbergraph_InviteListEntry_PartyInvite_XS1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInviteListEntry_PartyInvite_XS1_C::ExecuteUbergraph_InviteListEntry_PartyInvite_XS1(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, bool K2Node_ComponentBoundEvent_bIsOpen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "ExecuteUbergraph_InviteListEntry_PartyInvite_XS1");

	Params::UInviteListEntry_PartyInvite_XS1_C_ExecuteUbergraph_InviteListEntry_PartyInvite_XS1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


