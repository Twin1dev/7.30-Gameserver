#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
// (None)

class UClass* UGA_Athena_HookDestroy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_HookDestroy_C");

	return Clss;
}


// GA_Athena_HookDestroy_C GA_Athena_HookDestroy.Default__GA_Athena_HookDestroy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_HookDestroy_C* UGA_Athena_HookDestroy_C::GetDefaultObj()
{
	static class UGA_Athena_HookDestroy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_HookDestroy_C*>(UGA_Athena_HookDestroy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_HookDestroy_C::K2_OnEndAbility(bool bWasCancelled, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "K2_OnEndAbility");

	Params::UGA_Athena_HookDestroy_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Ability_System_Component = K2Node_DynamicCast_AsFort_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.PickGrappleMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              PitchAngle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SectionName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAngle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToyAngleSelectorInfo       CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_HookDestroy_C::PickGrappleMontage(float PitchAngle, class FName* SectionName, int32 Temp_int_Array_Index_Variable, float CallFunc_ClampAngle_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FToyAngleSelectorInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "PickGrappleMontage");

	Params::UGA_Athena_HookDestroy_C_PickGrappleMontage_Params Parms{};

	Parms.PitchAngle = PitchAngle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_ClampAngle_ReturnValue = CallFunc_ClampAngle_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SectionName != nullptr)
		*SectionName = Parms.SectionName;

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_AmmoReserves
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_HookDestroy_C::OnRep_AmmoReserves()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnRep_AmmoReserves");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263");

	Params::UGA_Athena_HookDestroy_C_OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263");

	Params::UGA_Athena_HookDestroy_C_OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263");

	Params::UGA_Athena_HookDestroy_C_OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263");

	Params::UGA_Athena_HookDestroy_C_OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnCompleted_CB1C85E64FAE092AD81A04933C6C3263");

	Params::UGA_Athena_HookDestroy_C_OnCompleted_CB1C85E64FAE092AD81A04933C6C3263_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_056D82C6464BB95E4DA717BEB307DB74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HookDestroy_C::EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "EventReceived_056D82C6464BB95E4DA717BEB307DB74");

	Params::UGA_Athena_HookDestroy_C_EventReceived_056D82C6464BB95E4DA717BEB307DB74_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC");

	Params::UGA_Athena_HookDestroy_C_OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC");

	Params::UGA_Athena_HookDestroy_C_OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnInterrupted_556AB31A412041E7414C21AA5F4A70CC");

	Params::UGA_Athena_HookDestroy_C_OnInterrupted_556AB31A412041E7414C21AA5F4A70CC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnBlendOut_556AB31A412041E7414C21AA5F4A70CC");

	Params::UGA_Athena_HookDestroy_C_OnBlendOut_556AB31A412041E7414C21AA5F4A70CC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnCompleted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnCompleted_556AB31A412041E7414C21AA5F4A70CC");

	Params::UGA_Athena_HookDestroy_C_OnCompleted_556AB31A412041E7414C21AA5F4A70CC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_3FEADD91456C78D266936684DE918289
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HookDestroy_C::EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "EventReceived_3FEADD91456C78D266936684DE918289");

	Params::UGA_Athena_HookDestroy_C_EventReceived_3FEADD91456C78D266936684DE918289_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62");

	Params::UGA_Athena_HookDestroy_C_OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62");

	Params::UGA_Athena_HookDestroy_C_OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62");

	Params::UGA_Athena_HookDestroy_C_OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62");

	Params::UGA_Athena_HookDestroy_C_OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnCompleted_28C962BC449D96C668F3C4BE36E6CA62");

	Params::UGA_Athena_HookDestroy_C_OnCompleted_28C962BC449D96C668F3C4BE36E6CA62_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282");

	Params::UGA_Athena_HookDestroy_C_OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282");

	Params::UGA_Athena_HookDestroy_C_OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnInterrupted_7CDAB77949F908D1F388AB845AE6C282");

	Params::UGA_Athena_HookDestroy_C_OnInterrupted_7CDAB77949F908D1F388AB845AE6C282_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnBlendOut_7CDAB77949F908D1F388AB845AE6C282");

	Params::UGA_Athena_HookDestroy_C_OnBlendOut_7CDAB77949F908D1F388AB845AE6C282_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnCompleted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnCompleted_7CDAB77949F908D1F388AB845AE6C282");

	Params::UGA_Athena_HookDestroy_C_OnCompleted_7CDAB77949F908D1F388AB845AE6C282_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_HookDestroy_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_HookDestroy_C::ResetDoOnce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "ResetDoOnce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ExecuteUbergraph_GA_Athena_HookDestroy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload1                                      (None)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Prj_Hook_Athena_C*        K2Node_DynamicCast_AsB_Prj_Hook_Athena                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PickGrappleMontage_SectionName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable1                                            (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInventoryGUID_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLocalMagazineAmmoCount_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate19                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate20                           (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Hookgun_Athena_C*         K2Node_DynamicCast_AsB_Hookgun_Athena                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate21                           (ZeroConstructor, NoDestructor)
// class AFortAthenaVehicle*          CallFunc_GetVehicle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaJackalVehicle*    K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::ExecuteUbergraph_GA_Athena_HookDestroy(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayEventData& K2Node_CustomEvent_Payload1, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AB_Prj_Hook_Athena_C* K2Node_DynamicCast_AsB_Prj_Hook_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName K2Node_CustomEvent_NotifyName14, class FName CallFunc_PickGrappleMontage_SectionName, class FName K2Node_CustomEvent_NotifyName13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName K2Node_CustomEvent_NotifyName12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName K2Node_CustomEvent_NotifyName11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName K2Node_CustomEvent_NotifyName10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class FName Temp_name_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class FName K2Node_CustomEvent_NotifyName9, class FName K2Node_CustomEvent_NotifyName8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class FName K2Node_CustomEvent_NotifyName7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class FName K2Node_CustomEvent_NotifyName6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class FName K2Node_CustomEvent_NotifyName5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class FName Temp_name_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, class FName K2Node_CustomEvent_NotifyName4, class FName K2Node_CustomEvent_NotifyName3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class FName K2Node_CustomEvent_NotifyName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class FName K2Node_CustomEvent_NotifyName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, class FName Temp_name_Variable3, class FName K2Node_CustomEvent_NotifyName16, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class FName K2Node_CustomEvent_NotifyName19, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, class FName K2Node_CustomEvent_NotifyName17, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess2, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, class AFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle, bool K2Node_DynamicCast_bSuccess4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue5, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, class FName K2Node_CustomEvent_NotifyName18)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "ExecuteUbergraph_GA_Athena_HookDestroy");

	Params::UGA_Athena_HookDestroy_C_ExecuteUbergraph_GA_Athena_HookDestroy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName15 = K2Node_CustomEvent_NotifyName15;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_Payload1 = K2Node_CustomEvent_Payload1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Prj_Hook_Athena = K2Node_DynamicCast_AsB_Prj_Hook_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_NotifyName14 = K2Node_CustomEvent_NotifyName14;
	Parms.CallFunc_PickGrappleMontage_SectionName = CallFunc_PickGrappleMontage_SectionName;
	Parms.K2Node_CustomEvent_NotifyName13 = K2Node_CustomEvent_NotifyName13;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_NotifyName12 = K2Node_CustomEvent_NotifyName12;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_NotifyName11 = K2Node_CustomEvent_NotifyName11;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CustomEvent_NotifyName10 = K2Node_CustomEvent_NotifyName10;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue1 = CallFunc_WaitGameplayEvent_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CustomEvent_NotifyName9 = K2Node_CustomEvent_NotifyName9;
	Parms.K2Node_CustomEvent_NotifyName8 = K2Node_CustomEvent_NotifyName8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CustomEvent_NotifyName7 = K2Node_CustomEvent_NotifyName7;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CustomEvent_NotifyName6 = K2Node_CustomEvent_NotifyName6;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CustomEvent_NotifyName5 = K2Node_CustomEvent_NotifyName5;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_CustomEvent_NotifyName4 = K2Node_CustomEvent_NotifyName4;
	Parms.K2Node_CustomEvent_NotifyName3 = K2Node_CustomEvent_NotifyName3;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_CustomEvent_NotifyName2 = K2Node_CustomEvent_NotifyName2;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_CustomEvent_NotifyName1 = K2Node_CustomEvent_NotifyName1;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.Temp_name_Variable3 = Temp_name_Variable3;
	Parms.K2Node_CustomEvent_NotifyName16 = K2Node_CustomEvent_NotifyName16;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue = CallFunc_GetCurrentSourceWeapon_ReturnValue;
	Parms.CallFunc_GetInventoryGUID_ReturnValue = CallFunc_GetInventoryGUID_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue = CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.K2Node_CustomEvent_NotifyName19 = K2Node_CustomEvent_NotifyName19;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetLocalMagazineAmmoCount_ReturnValue = CallFunc_GetLocalMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate19 = K2Node_CreateDelegate_OutputDelegate19;
	Parms.K2Node_CreateDelegate_OutputDelegate20 = K2Node_CreateDelegate_OutputDelegate20;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_CustomEvent_NotifyName17 = K2Node_CustomEvent_NotifyName17;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue1 = CallFunc_GetCurrentSourceWeapon_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Ability_System_Component = K2Node_DynamicCast_AsFort_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsB_Hookgun_Athena = K2Node_DynamicCast_AsB_Hookgun_Athena;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CreateDelegate_OutputDelegate21 = K2Node_CreateDelegate_OutputDelegate21;
	Parms.CallFunc_GetVehicle_ReturnValue = CallFunc_GetVehicle_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle = K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue1 = CallFunc_GetCurrentMontage_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.K2Node_CustomEvent_NotifyName18 = K2Node_CustomEvent_NotifyName18;

	UObject::ProcessEvent(Func, &Parms);

}

}


