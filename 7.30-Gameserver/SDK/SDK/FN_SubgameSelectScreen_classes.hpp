#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1EB (0x503 - 0x318)
// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
class USubgameSelectScreen_C : public UFortSubGameSelectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowCreativeImage;                                 // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SaleANIM;                                          // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Button_Shine;                                      // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PanMinusP1P2;                                      // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PanMinusP1;                                        // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PanMinusP2;                                        // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ContractSeperator;                                 // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ToggleCycle;                                       // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchTextures;                                    // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ExpandSeperator;                                   // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DescriptionIntro;                                  // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchMaterial;                                    // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     AthenaBtn;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AthenaShine;                                       // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BGImage;                                           // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonBack;                                        // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonExit;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPurchase;                                    // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRedeem;                                      // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CampaignBtn;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*               ConsoleProfileWidget;                              // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CreativeBtn;                                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CreativeContent;                                   // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CreativeDescriptionTextNormal;                     // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CreativeDescriptionTextSale;                       // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CreativeShine;                                     // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FullDescription;                                   // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PVEDescriptionBorderSale;                          // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVEDescriptionTextNormal;                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVEDescriptionTextSale;                            // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVPDescriptionTextNormal;                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PVPDescriptionTextSale;                            // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_Logos;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shine;                                             // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherBR;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherCreative;                                  // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherMenu;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherStW;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      TitleImage;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         WasLastPlayForward;                                // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_396E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressModalWidget_C*                LeavingMatchmakingDialog;                          // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MIDMinusKeyart;                                    // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        PveRotatorIndex;                                   // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubGameSelectRotatorItems>    Items;                                             // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class ESubGame                          SelectedSubgame;                                   // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3970[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortSubgameSelectOption, class UTexture2D*> SubGameCMSTexture;                                 // 0x498(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ShouldStartOnSTWUpsell;                            // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3971[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SaleDelayAnim;                                     // 0x4F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShineAnimDelay;                                    // 0x4F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SlideShownCampaign;                                // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlideShownBR;                                      // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlideShownCreative;                                // 0x502(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USubgameSelectScreen_C* GetDefaultObj();

	void AnimShineDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void AnimSaleDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetCMSTextureToKeyArt(enum class EFortSubgameSelectOption Key, enum class EFortSubgameSelectOption Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class FName Temp_name_Variable4, class FName K2Node_Select_Default, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void StartSubgameSelectMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShowUpsell(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2);
	void InitializeRedeemButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void InitializeShortDescriptions(class FText ShortDescription, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, bool CallFunc_GetIsOnSale_ReturnValue, bool CallFunc_GetIsOnSale_ReturnValue1, class FText CallFunc_GetShortDescription_ShortDescription, bool CallFunc_GetShortDescription_ReturnValue, class FText CallFunc_GetShortDescription_ShortDescription1, bool CallFunc_GetShortDescription_ReturnValue1, int32 Temp_int_Variable3, bool Temp_bool_Variable1, int32 K2Node_Select_Default, bool CallFunc_GetIsOnSale_ReturnValue2, int32 K2Node_Select1_Default, int32 Temp_int_Variable4, int32 Temp_int_Variable5, bool Temp_bool_Variable2, class FText CallFunc_GetShortDescription_ShortDescription2, bool CallFunc_GetShortDescription_ReturnValue2, int32 K2Node_Select2_Default);
	bool IsBusyMatchmakingOrPartyTransitioning(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMatchmakingLocal_ReturnValue, bool CallFunc_IsLocalPlayerInParty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Update(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1);
	void AdvanceRotator(int32 CallFunc_Array_Length_ReturnValue, const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ResetKeyArtForMainMenu(const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item);
	void ToggleTimer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SafeSetSubGame(enum class ESubGame SubGame, bool CallFunc_InstallAllOnDemandChunks_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetDescriptionForSubGame(enum class EFortSubgameSelectOption SubGame, class FText CallFunc_GetFullDescription_FullDescription, bool CallFunc_GetFullDescription_ReturnValue, enum class ESubGame CallFunc_GetSubGameBySubGameSelectOption_ReturnValue, class FText CallFunc_GetFullDescription_FullDescription1, bool CallFunc_GetFullDescription_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_GetFullDescription_FullDescription2, bool CallFunc_GetFullDescription_ReturnValue2, class FText Temp_text_Variable1, enum class EFortSubgameSelectOption Temp_byte_Variable, class FText K2Node_Select_Default);
	void DialogResult_FA087F7E461591BDBC2AECAB522E633C(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_9B87D67040B12081C9B651A92AD99EA4(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_0A856DFB4C254288F2910E9EF8AC5903(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_4D272D064BC78DE104D73FBE689B4039(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Try_And_Remove_The_Dialog();
	void Clear_Party_and_Matchmaking_Delegates();
	void CustomEvent_0(enum class EMatchmakingCompleteResult Result);
	void CustomEvent_1();
	void Show_Busy_If_Async_Tasks_Still_Pending();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CustomEvent_2();
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRealMoneyPurchaseComleteHandler(bool bSuccess);
	void Destruct();
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void ShowMinorShutdownMessage(bool bIsCampaign);
	void HandleMinorWarning_Campaign();
	void HandleMinorWarning_Athena();
	void BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_68_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRedeemCodeComplete();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnSubGameImageLoadedFromCMS(enum class EFortSubgameSelectOption SubGameOption, class UTexture2D* Image);
	void TryShowUpsellDireclty();
	void BndEvt__Button_Creative_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Creative_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, class FName Temp_name_Variable, float CallFunc_GetEndTime_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetAccountGameplayRestrictionText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result3, class FName K2Node_CustomEvent_ResultName2, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName1, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName Temp_name_Variable3, enum class EFortDialogResult Temp_byte_Variable3, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result4, class FName K2Node_CustomEvent_ResultName3, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UStoreMain_Root_C* CallFunc_Create_ReturnValue1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, bool CallFunc_IsActivated_ReturnValue, bool K2Node_CustomEvent_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue, bool CallFunc_IsBusyMatchmakingOrPartyTransitioning_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue5, bool K2Node_SwitchEnum1_CmpSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortMcpContext* CallFunc_GetContext_ReturnValue6, class FText Temp_text_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled, bool K2Node_CustomEvent_bIsCampaign, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, bool CallFunc_BooleanAND_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue8, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, bool K2Node_Event_bUsingGamepad, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue1, bool K2Node_SwitchInteger1_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue4, class FText Temp_text_Variable1, bool CallFunc_CheckRewardRate_ReturnValue, enum class EFortSubgameSelectOption K2Node_Event_SubGameOption, class UTexture2D* K2Node_Event_Image, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue9, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, enum class ESubGameAccessReason CallFunc_GetAccessReason_ReturnValue, class FText CallFunc_GetPlatformDisplayName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class FText CallFunc_CanPlay_DenialReason1, bool CallFunc_CanPlay_ReturnValue1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_IsValid_ReturnValue3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue11, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsSubGameOptionVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_GetEndTime_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5);
};

}


