#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuestSceneActor.QuestSceneActor_C
// (Actor)

class UClass* AQuestSceneActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestSceneActor_C");

	return Clss;
}


// QuestSceneActor_C QuestSceneActor.Default__QuestSceneActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuestSceneActor_C* AQuestSceneActor_C::GetDefaultObj()
{
	static class AQuestSceneActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuestSceneActor_C*>(AQuestSceneActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestSceneActor.QuestSceneActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestSceneActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestSceneActor_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestSceneActor.QuestSceneActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQuestSceneActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestSceneActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestSceneActor.QuestSceneActor_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndCamera         NewCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         OldCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestSceneActor_C::CameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestSceneActor_C", "CameraChanged");

	Params::AQuestSceneActor_C_CameraChanged_Params Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestSceneActor.QuestSceneActor_C.ExecuteUbergraph_QuestSceneActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_NewCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_OldCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestSceneActor_C::ExecuteUbergraph_QuestSceneActor(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestSceneActor_C", "ExecuteUbergraph_QuestSceneActor");

	Params::AQuestSceneActor_C_ExecuteUbergraph_QuestSceneActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_CustomEvent_NewCamera = K2Node_CustomEvent_NewCamera;
	Parms.K2Node_CustomEvent_OldCamera = K2Node_CustomEvent_OldCamera;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue1 = CallFunc_K2_GetRootComponent_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


