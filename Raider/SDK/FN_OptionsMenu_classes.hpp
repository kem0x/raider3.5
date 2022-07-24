#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// 0x02B0 (0x05D8 - 0x0328)
class UOptionsMenu_C : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               BorderBackground;                                         // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       CurrentTabSwitcher;                                       // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_1;                                                  // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           LanguageOk;                                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               MESSAGE;                                                  // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            OverlayText;                                              // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ResetCustomGamepadToDefaultNo;                            // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ResetCustomGamepadToDefaultYes;                           // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ResetGameOptionsToDefaultNo;                              // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ResetGameOptionsToDefaultYes;                             // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ResetHUDOptionsToDefaultNo;                               // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ResetHUDOptionsToDefaultYes;                              // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ResetKBMToDefaultNo;                                      // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ResetKBMToDefaultYes;                                     // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_2;                                               // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNamedSlot*                                  SavingLayer;                                              // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalTabList_C*                        SettingsTabs;                                             // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            Title;                                                    // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           VideoSettingsAccept;                                      // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           VideoSettingsCancel;                                      // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                SelectedOption;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FName                                       Current_Tab;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Accept_Input;                                             // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Video_Tab_Selected;                                       // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Apply_Visible;                                            // 0x03EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03EB(0x0005) MISSED OFFSET
	TArray<class UFortOptionsTab*>                     AllTabWidgets;                                            // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UProgressModalWidget_C*                      SavingModal;                                              // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      VideoTabClass;                                            // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AccountTabClass;                                          // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GamepadTabClass;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      InputTabClass;                                            // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoadCount;                                                // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x042C(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabGamePad
	unsigned char                                      UnknownData04[0x28];                                      // 0x0458(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabAccount
	unsigned char                                      UnknownData05[0x28];                                      // 0x0480(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabVideoOptions
	unsigned char                                      UnknownData06[0x28];                                      // 0x04A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabInputOptions
	struct FDataTableRowHandle                         ApplyAction;                                              // 0x04D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         ResetGameOptionsToDefaultAction;                          // 0x04E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         ResetHUDToDefaultAction;                                  // 0x04F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         ToggleModeAction;                                         // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         ResetToDefault;                                           // 0x0510(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         Restore;                                                  // 0x0520(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         Back;                                                     // 0x0530(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FTimerHandle                                ResetVideoOptionsTimer;                                   // 0x0540(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData07[0x28];                                      // 0x0548(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabAccessibilityOptions
	class UClass*                                      AccessibilityTabClass;                                    // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ResetCustomGamepadToDefault;                              // 0x0578(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData08[0x28];                                      // 0x0588(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabBrightnessOptions
	class UClass*                                      BrightnessTabClass;                                       // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFortTabButtonLabelInfo>             TabLabels;                                                // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               TabIds;                                                   // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C");
		return ptr;
	}


	void Update_Header_Text_by_Tab_ID(const struct FName& TabId);
	void DoResetKBMToDefault();
	void HandleResetCustomGamepadToDefault(bool* Passthrough);
	void UpdateAllOptionsTabs();
	void HandleTabAccessibilityOptionsActionHandlerStates();
	void ResetActionHandlerStates(bool DisableBack);
	void UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab);
	void ApplySettings();
	void DoResetHUDOptionsToDefault();
	void DoResetGameOptionsToDefault();
	void HandleTabGameOptionsActionHandlerStates();
	void HandleTabAccountLinkageActionHandlerStates();
	void HandleTabGamepadConfigActionHandlerStates();
	void HandleTabFortAudioOptionsActionHandlerStates();
	void HandleTabVideoOptionsActionHandlerStates();
	void HandleTabBrightnessOptionsActionHandlerStates();
	void HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor);
	void HandleTabGameOptionsResetActionHandlerStates(int ActiveWidgetIndex);
	void HandleResetGameOptionsToDefault(bool* Passthrough);
	void CenterOnActiveTab();
	void Handle_Reset_HUD_Default(bool* Passthrough);
	void SetBackground();
	void AddTab(class UClass* WidgetClass, const struct FText& DisplayName, const struct FName& NameId, const struct FSlateBrush& Icon);
	void HandleCursorModeChanging(bool IsEnabled);
	void Handle_Toggle_Mode(bool* Passthrough);
	void Set_Input_Action_Handlers();
	void HandleBack(bool* Passthrough);
	void Handle_Reset(bool* Passthrough);
	void HandleResetKBMToDefault(bool* Passthrough);
	void Handle_Apply(bool* Passthrough);
	struct FEventReply OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void Initialize();
	void DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F(EFortDialogResult Result, const struct FName& ResultName);
	void OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded);
	void OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded);
	void OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded);
	void OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded);
	void OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded);
	void OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded);
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void Tab_Setting_Changed();
	void OnActivated();
	void Disable_Overlay_Input();
	void Gamepad_Changed(bool Gamepad_Enabled);
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void HandleBenchmarkComplete();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSettingsErrorMessageClosed();
	void OnHandleBack();
	void Disable_Overlay();
	void Enable_Overlay_Video(bool Accept_Input);
	void Enable_Overlay_Input(bool Accept_Input, const struct FText& Overlay_Text);
	void TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowResetGameOptionsToDefaultMessage();
	void ShowResetHUDOptionToDefaultMessage();
	void HandleSettingsSaveComplete();
	void OnDeactivated();
	void LoadTabClasses();
	void ResetVideoOptionsTimerDelegate();
	void ShowResetCustomGamepadToDefaultMessage();
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void BndEvt__ResetCustomGamepadToDefaultYes_K2Node_ComponentBoundEvent_202_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetCustomGamepadToDefaultNo_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ResetKBMToDefaultYes_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetKBMToDefaultNo_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowResetKBMToDefaultMessage();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature(const struct FName& TabId);
	void ExecuteUbergraph_OptionsMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
