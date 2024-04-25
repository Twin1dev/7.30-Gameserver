#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Node_Arrows.Node_Arrows_C
// (None)

class UClass* UNode_Arrows_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Node_Arrows_C");

	return Clss;
}


// Node_Arrows_C Node_Arrows.Default__Node_Arrows_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNode_Arrows_C* UNode_Arrows_C::GetDefaultObj()
{
	static class UNode_Arrows_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNode_Arrows_C*>(UNode_Arrows_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Node_Arrows.Node_Arrows_C.OverideColorOnBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      InBrush                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UNode_Arrows_C::OverideColorOnBrush(class UImage* InBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Node_Arrows_C", "OverideColorOnBrush");

	Params::UNode_Arrows_C_OverideColorOnBrush_Params Parms{};

	Parms.InBrush = InBrush;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node_Arrows.Node_Arrows_C.ApplyOverideColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNode_Arrows_C::ApplyOverideColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Node_Arrows_C", "ApplyOverideColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Node_Arrows.Node_Arrows_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNode_Arrows_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Node_Arrows_C", "PreConstruct");

	Params::UNode_Arrows_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Node_Arrows.Node_Arrows_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNode_Arrows_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Node_Arrows_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Node_Arrows.Node_Arrows_C.ExecuteUbergraph_Node_Arrows
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNode_Arrows_C::ExecuteUbergraph_Node_Arrows(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Node_Arrows_C", "ExecuteUbergraph_Node_Arrows");

	Params::UNode_Arrows_C_ExecuteUbergraph_Node_Arrows_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


