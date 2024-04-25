#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C
// (None)

class UClass* UHeroLoadoutActiveAbilityDetailColumn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeroLoadoutActiveAbilityDetailColumn_C");

	return Clss;
}


// HeroLoadoutActiveAbilityDetailColumn_C HeroLoadoutActiveAbilityDetailColumn.Default__HeroLoadoutActiveAbilityDetailColumn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeroLoadoutActiveAbilityDetailColumn_C* UHeroLoadoutActiveAbilityDetailColumn_C::GetDefaultObj()
{
	static class UHeroLoadoutActiveAbilityDetailColumn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeroLoadoutActiveAbilityDetailColumn_C*>(UHeroLoadoutActiveAbilityDetailColumn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetAbilityKit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*             AbilityKit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailColumn_C::SetAbilityKit(class UFortAbilityKit* AbilityKit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "SetAbilityKit");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit_Params Parms{};

	Parms.AbilityKit = AbilityKit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.IsAbilityUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHeroLoadoutActiveAbilityDetailColumn_C::IsAbilityUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "IsAbilityUnlocked");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.GetAbilityKit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortAbilityKit* UHeroLoadoutActiveAbilityDetailColumn_C::GetAbilityKit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "GetAbilityKit");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*                   Hero                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailColumn_C::SetHero(class UFortHero* Hero)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "SetHero");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_SetHero_Params Parms{};

	Parms.Hero = Hero;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAbilityUnlocked_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetAbilityKit_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             (None)
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush                                (None)
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush1                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailColumn_C::UpdateFromState(bool CallFunc_IsAbilityUnlocked_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "UpdateFromState");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState_Params Parms{};

	Parms.CallFunc_IsAbilityUnlocked_ReturnValue = CallFunc_IsAbilityUnlocked_ReturnValue;
	Parms.CallFunc_GetAbilityKit_ReturnValue = CallFunc_GetAbilityKit_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.CallFunc_ResizeBrush_ResizedBrush = CallFunc_ResizeBrush_ResizedBrush;
	Parms.CallFunc_ResizeBrush_ResizedBrush1 = CallFunc_ResizeBrush_ResizedBrush1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetStandardBrushSize_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailColumn_C::UpdateFromStyle(const struct FVector2D& CallFunc_GetStandardBrushSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "UpdateFromStyle");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle_Params Parms{};

	Parms.CallFunc_GetStandardBrushSize_ReturnValue = CallFunc_GetStandardBrushSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailColumn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "PreConstruct");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHeroLoadoutActiveAbilityDetailColumn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailColumn_C::ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


