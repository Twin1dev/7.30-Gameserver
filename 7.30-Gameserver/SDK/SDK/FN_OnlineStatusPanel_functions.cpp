#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OnlineStatusPanel.OnlineStatusPanel_C
// (None)

class UClass* UOnlineStatusPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineStatusPanel_C");

	return Clss;
}


// OnlineStatusPanel_C OnlineStatusPanel.Default__OnlineStatusPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnlineStatusPanel_C* UOnlineStatusPanel_C::GetDefaultObj()
{
	static class UOnlineStatusPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineStatusPanel_C*>(UOnlineStatusPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineStatusPanel.OnlineStatusPanel_C.OnFocused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOnlineStatusPanel_C::OnFocused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineStatusPanel_C", "OnFocused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OnlineStatusPanel.OnlineStatusPanel_C.ExecuteUbergraph_OnlineStatusPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnlineStatusPanel_C::ExecuteUbergraph_OnlineStatusPanel(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineStatusPanel_C", "ExecuteUbergraph_OnlineStatusPanel");

	Params::UOnlineStatusPanel_C_ExecuteUbergraph_OnlineStatusPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


