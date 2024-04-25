#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0xC10 - 0xB30)
// WidgetBlueprintGeneratedClass AlterationWidgetButton.AlterationWidgetButton_C
class UAlterationWidgetButton_C : public UFortAlterationButtonWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PanelLoad;                                         // 0xB38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TriangelUpgrade;                                   // 0xB40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAlterationWidget_C*                   AlterationWidget;                                  // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Flash;                                             // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shine;                                             // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TriangleUpgrade;                                   // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIncludeName;                                      // 0xB68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeShortDescription;                          // 0xB69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeDescription;                               // 0xB6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EFortBrushSize                    IconSize;                                          // 0xB6B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bUseLargeFormatName;                               // 0xB6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_47B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Locked_Description_Style;                          // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Locked_Text_Style;                                 // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldShowRarity;                                  // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_47BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Triangles_Upgrade;                                 // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                   RarityData;                                        // 0xB90(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAlterationWidgetButton_C* GetDefaultObj();

	void Setup_Triangles(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Update_Colors(class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void IntroStart(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void IntroReset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void TriggerModificationAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnSetup();
	void Construct();
	void ExecuteUbergraph_AlterationWidgetButton(int32 EntryPoint, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue);
};

}


