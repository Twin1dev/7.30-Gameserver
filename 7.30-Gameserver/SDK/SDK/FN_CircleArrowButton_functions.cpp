#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CircleArrowButton.CircleArrowButton_C
// (None)

class UClass* UCircleArrowButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircleArrowButton_C");

	return Clss;
}


// CircleArrowButton_C CircleArrowButton.Default__CircleArrowButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCircleArrowButton_C* UCircleArrowButton_C::GetDefaultObj()
{
	static class UCircleArrowButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircleArrowButton_C*>(UCircleArrowButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CircleArrowButton.CircleArrowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircleArrowButton_C", "PreConstruct");

	Params::UCircleArrowButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCircleArrowButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCircleArrowButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCircleArrowButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircleArrowButton_C::ExecuteUbergraph_CircleArrowButton(int32 EntryPoint, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool K2Node_Event_IsDesignTime, const struct FVector2D& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircleArrowButton_C", "ExecuteUbergraph_CircleArrowButton");

	Params::UCircleArrowButton_C_ExecuteUbergraph_CircleArrowButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.CallFunc_PlayAnimation_ReturnValue2 = CallFunc_PlayAnimation_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


