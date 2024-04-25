#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x381 - 0x330)
// BlueprintGeneratedClass BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C
class ABP_FrontendEventVisiblity_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SharedRoot;                                        // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        AssetList;                                         // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                         Debug;                                             // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventTag;                                          // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                        AssetList_InvisibleonEventActive;                  // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                         EventEnabled;                                      // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_FrontendEventVisiblity_C* GetDefaultObj();

	void SetAssetListVisiblity_InvisibleonActive(bool Visibilty, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetAssetListVisiblity(bool Visibilty, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void OnEventEnded_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventUpdated_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventActive_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FrontendEventVisiblity(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin2, float K2Node_CustomEvent_TimeSpanRatio2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin1, float K2Node_CustomEvent_TimeSpanRatio1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, float K2Node_CustomEvent_TimeSpanRatio, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, float Temp_float_Variable, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable1, const class FString& Temp_string_Variable, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


