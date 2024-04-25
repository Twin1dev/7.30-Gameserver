#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMainStatTile.AthenaMainStatTile_C
// (None)

class UClass* UAthenaMainStatTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMainStatTile_C");

	return Clss;
}


// AthenaMainStatTile_C AthenaMainStatTile.Default__AthenaMainStatTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMainStatTile_C* UAthenaMainStatTile_C::GetDefaultObj()
{
	static class UAthenaMainStatTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMainStatTile_C*>(UAthenaMainStatTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatValueAsText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UAthenaMainStatTile_C::SetStatValue(class FText StatValueAsText, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMainStatTile_C", "SetStatValue");

	Params::UAthenaMainStatTile_C_SetStatValue_Params Parms{};

	Parms.StatValueAsText = StatValueAsText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UAthenaMainStatTile_C::SetTagAndDisplayName(const class FString& Tag, class FText DisplayName, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMainStatTile_C", "SetTagAndDisplayName");

	Params::UAthenaMainStatTile_C_SetTagAndDisplayName_Params Parms{};

	Parms.Tag = Tag;
	Parms.DisplayName = DisplayName;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMainStatTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMainStatTile_C", "PreConstruct");

	Params::UAthenaMainStatTile_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMainStatTile_C::ExecuteUbergraph_AthenaMainStatTile(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMainStatTile_C", "ExecuteUbergraph_AthenaMainStatTile");

	Params::UAthenaMainStatTile_C_ExecuteUbergraph_AthenaMainStatTile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


