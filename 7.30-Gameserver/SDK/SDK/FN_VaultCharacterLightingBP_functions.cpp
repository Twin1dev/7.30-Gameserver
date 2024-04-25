#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VaultCharacterLightingBP.VaultCharacterLightingBP_C
// (Actor)

class UClass* AVaultCharacterLightingBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaultCharacterLightingBP_C");

	return Clss;
}


// VaultCharacterLightingBP_C VaultCharacterLightingBP.Default__VaultCharacterLightingBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVaultCharacterLightingBP_C* AVaultCharacterLightingBP_C::GetDefaultObj()
{
	static class AVaultCharacterLightingBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVaultCharacterLightingBP_C*>(AVaultCharacterLightingBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting_LOWDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::SwitchPCLighting_LOWDetail(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "SwitchPCLighting_LOWDetail");

	Params::AVaultCharacterLightingBP_C_SwitchPCLighting_LOWDetail_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::SwitchPCLighting(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "SwitchPCLighting");

	Params::AVaultCharacterLightingBP_C_SwitchPCLighting_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibilty                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::SwitchMobileLighting(bool Visibilty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "SwitchMobileLighting");

	Params::AVaultCharacterLightingBP_C_SwitchMobileLighting_Params Parms{};

	Parms.Visibilty = Visibilty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "UpdateSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ToggleLighting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::ToggleLighting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "ToggleLighting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.OVERRIDELIGHTING
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::OVERRIDELIGHTING()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "OVERRIDELIGHTING");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultCharacterLightingBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::LightControl(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "LightControl");

	Params::AVaultCharacterLightingBP_C_LightControl_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultCharacterLightingBP_C::ExecuteUbergraph_VaultCharacterLightingBP(int32 EntryPoint, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1, int32 CallFunc_GetShadowQuality_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, bool K2Node_CustomEvent_NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaultCharacterLightingBP_C", "ExecuteUbergraph_VaultCharacterLightingBP");

	Params::AVaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue1 = CallFunc_IsMobilePlatform_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue1 = CallFunc_GetGameUserSettings_ReturnValue1;
	Parms.CallFunc_GetShadowQuality_ReturnValue1 = CallFunc_GetShadowQuality_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


