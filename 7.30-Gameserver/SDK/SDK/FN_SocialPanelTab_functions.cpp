#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SocialPanelTab.SocialPanelTab_C
// (None)

class UClass* USocialPanelTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialPanelTab_C");

	return Clss;
}


// SocialPanelTab_C SocialPanelTab.Default__SocialPanelTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USocialPanelTab_C* USocialPanelTab_C::GetDefaultObj()
{
	static class USocialPanelTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialPanelTab_C*>(USocialPanelTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialPanelTab.SocialPanelTab_C.PlayUnselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USocialPanelTab_C::PlayUnselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialPanelTab_C", "PlayUnselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanelTab_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanelTab_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialPanelTab.SocialPanelTab_C.PlaySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USocialPanelTab_C::PlaySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialPanelTab_C", "PlaySelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanelTab_C::ExecuteUbergraph_SocialPanelTab(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialPanelTab_C", "ExecuteUbergraph_SocialPanelTab");

	Params::USocialPanelTab_C_ExecuteUbergraph_SocialPanelTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;
	Parms.CallFunc_PlayAnimation_ReturnValue3 = CallFunc_PlayAnimation_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


