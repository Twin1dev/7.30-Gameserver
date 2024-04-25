#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x4B9 - 0x490)
// WidgetBlueprintGeneratedClass AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C
class UAthenaDirectAquisitionStyleScreen_C : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              CameraFramingWidget;                               // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*               ItemInfoHeader;                                    // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLockedStyleNotification_C*      LockedNotification;                                // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StyleDisclaimer;                                   // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         OfferSet;                                          // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaDirectAquisitionStyleScreen_C* GetDefaultObj();

	void UpdateFromVariant(const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag, bool IsOwned, class UFortAccountItemDefinition* GrantedItemDef, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, class UFortCosmeticVariant* CallFunc_GetVariantChannel_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_GetVariantUnlockRequirement_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue);
	class UWidget* GetWidgetForFramingViewedItem();
	void HandleBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void OnOfferSet();
	void BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned);
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32 EntryPoint, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, TArray<struct FMcpVariantChannelInfo>& CallFunc_GetDefaultVariantChannels_OutDefaultVariantData, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_HasTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_ComponentBoundEvent_VariantChannel, const struct FGameplayTag& K2Node_ComponentBoundEvent_VariantTag, bool K2Node_ComponentBoundEvent_IsOwned, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
};

}


