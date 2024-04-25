#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x248 - 0x228)
// WidgetBlueprintGeneratedClass MatchmakingRegionAndPool.MatchmakingRegionAndPool_C
class UMatchmakingRegionAndPool_C : public UMatchmakingRegionAndPoolBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      ClassicModeText;                                   // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       IBMSwitcher;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RegionText;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMatchmakingRegionAndPool_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_MatchmakingRegionAndPool(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue, class FText CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue, bool Temp_bool_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue1, class FText CallFunc_GetMCPRegionText_ReturnValue, int32 K2Node_Select_Default);
};

}


