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

// Class CommonUI.AnalogSlider
// 0x0010 (0x03E8 - 0x03D8)
class UAnalogSlider : public USlider
{
public:
	struct FScriptMulticastDelegate                    OnAnalogCapture;                                          // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.AnalogSlider");
		return ptr;
	}

};


// Class CommonUI.CommonActionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonActionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActionHandlerInterface");
		return ptr;
	}

};


// Class CommonUI.CommonActionWidget
// 0x0210 (0x0310 - 0x0100)
class UCommonActionWidget : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FDataTableRowHandle                         InputActionDataRow;                                       // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 ProgressMaterialBrush;                                    // 0x0120(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ProgressMaterialParam;                                    // 0x01A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 IconRimBrush;                                             // 0x01B0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                  // 0x0238(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0240(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActionWidget");
		return ptr;
	}


	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	struct FText GetDisplayText();
};


// Class CommonUI.CommonUserWidget
// 0x0008 (0x0210 - 0x0208)
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                               bConsumePointerInput;                                     // 0x0208(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0209(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUserWidget");
		return ptr;
	}


	void SetConsumePointerInput(bool bInConsumePointerInput);
	void OnTouchLeave(const struct FPointerEvent& TouchEvent);
};


// Class CommonUI.CommonActivatablePanel
// 0x00E8 (0x02F8 - 0x0210)
class UCommonActivatablePanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWidgetActivated;                                        // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWidgetDeactivated;                                      // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0238(0x0040) MISSED OFFSET
	bool                                               bConsumeAllActions;                                       // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExposeActionsExternally;                                 // 0x0279(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBypassStack;                                       // 0x027A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7D];                                      // 0x027B(0x007D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActivatablePanel");
		return ptr;
	}


	void SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent, class UCommonPopupMenu* PopupMenu);
	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent);
	void SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, class UCommonPopupMenu* PopupMenu);
	void SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, const struct FName& RowName, EInputActionState State, const struct FScriptDelegate& DisabledCommitEvent);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, EInputActionState State, const struct FScriptDelegate& DisabledCommitEvent);
	void SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, EInputActionState State);
	void SetActionHandlerState(class UDataTable* DataTable, const struct FName& RowName, EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void PopPanel();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnDeactivated();
	void OnBeginOutro();
	void OnBeginIntro();
	void OnActivated();
	bool IsIntroed();
	bool IsActivated();
	bool HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows);
	void EndOutro();
	void EndIntro();
	void BeginOutro();
	void BeginIntro();
	void AddInputActionNoHandler(class UDataTable* DataTable, const struct FName& RowName);
	void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent, class UCommonPopupMenu* PopupMenu);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent);
	void AddInputActionHandlerWithPopup(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, class UCommonPopupMenu* PopupMenu);
	void AddInputActionHandler(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent);
};


// Class CommonUI.CommonBorderStyle
// 0x0088 (0x00B0 - 0x0028)
class UCommonBorderStyle : public UObject
{
public:
	struct FSlateBrush                                 Background;                                               // 0x0028(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonBorderStyle");
		return ptr;
	}


	void GetBackgroundBrush(struct FSlateBrush* Brush);
};


// Class CommonUI.CommonBorder
// 0x0020 (0x0280 - 0x0260)
class UCommonBorder : public UBorder
{
public:
	class UClass*                                      Style;                                                    // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReducePaddingBySafezone;                                 // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	struct FMargin                                     MinimumPadding;                                           // 0x026C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonBorder");
		return ptr;
	}


	void SetStyle(class UClass* InStyle);
};


// Class CommonUI.CommonButtonStyle
// 0x04C8 (0x04F0 - 0x0028)
class UCommonButtonStyle : public UObject
{
public:
	bool                                               bSingleMaterial;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSlateBrush                                 SingleMaterialBrush;                                      // 0x0030(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalBase;                                               // 0x00B8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalHovered;                                            // 0x0140(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalPressed;                                            // 0x01C8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedBase;                                             // 0x0250(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedHovered;                                          // 0x02D8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedPressed;                                          // 0x0360(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 Disabled;                                                 // 0x03E8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     ButtonPadding;                                            // 0x0470(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     CustomPadding;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	int                                                MinWidth;                                                 // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinHeight;                                                // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NormalTextStyle;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NormalHoveredTextStyle;                                   // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SelectedTextStyle;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SelectedHoveredTextStyle;                                 // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DisabledTextStyle;                                        // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x04C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x04D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonStyle");
		return ptr;
	}


	class UCommonTextStyle* GetSelectedTextStyle();
	void GetSelectedPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
	void GetSelectedBaseBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalTextStyle();
	void GetNormalPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct FSlateBrush* Brush);
	void GetNormalBaseBrush(struct FSlateBrush* Brush);
	void GetMaterialBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct FSlateBrush* Brush);
	void GetCustomPadding(struct FMargin* OutCustomPadding);
	void GetButtonPadding(struct FMargin* OutButtonPadding);
};


// Class CommonUI.CommonButtonInternal
// 0x0050 (0x0470 - 0x0420)
class UCommonButtonInternal : public UButton
{
public:
	struct FScriptMulticastDelegate                    OnDoubleClicked;                                          // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET
	int                                                MinWidth;                                                 // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinHeight;                                                // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bButtonEnabled;                                           // 0x0448(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInteractionEnabled;                                      // 0x0449(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x26];                                      // 0x044A(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonInternal");
		return ptr;
	}

};


// Class CommonUI.CommonButton
// 0x0678 (0x0888 - 0x0210)
class UCommonButton : public UCommonUserWidget
{
public:
	int                                                MinWidth;                                                 // 0x0210(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinHeight;                                                // 0x0214(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Style;                                                    // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideInputAction;                                         // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	struct FSlateSound                                 PressedSlateSoundOverride;                                // 0x0228(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateSound                                 HoveredSlateSoundOverride;                                // 0x0240(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyAlphaOnDisable : 1;                                 // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSelectable : 1;                                          // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShouldSelectUponReceivingFocus : 1;                      // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInteractableWhenSelected : 1;                            // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bToggleable : 1;                                          // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDisplayInputActionWhenNotInteractable : 1;               // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bHideInputActionWithKeyboard : 1;                         // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShouldUseFallbackDefaultInputAction : 1;                 // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0259(0x0001) MISSED OFFSET
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x025A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x025B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x025C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	int                                                InputPriority;                                            // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         TriggeringInputAction;                                    // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0278(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSelectedChanged;                                        // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonDoubleClicked;                                    // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonUnhovered;                                        // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x30];                                      // 0x02D8(0x0030) MISSED OFFSET
	class UCommonActionWidget*                         InputActionWidget;                                        // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                   // 0x0310(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FButtonStyle                                NormalStyle;                                              // 0x0318(0x0278)
	struct FButtonStyle                                SelectedStyle;                                            // 0x0590(0x0278)
	unsigned char                                      UnknownData06[0x80];                                      // 0x0808(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButton");
		return ptr;
	}


	void SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel);
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(class UClass* InStyle);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
	void SetMinDimensions(int InMinWidth, int InMinHeight);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
	void SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const struct FName& InProgressMaterialParam);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void OnInputMethodChanged(ECommonInputType CurrentInputType);
	void OnCurrentTextStyleChanged();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void NativeOnActionProgress(float HeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	bool IsHovered();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void HandleFocusReceived();
	void HandleButtonReleased();
	void HandleButtonPressed();
	void HandleButtonDoubleClicked();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
	class UClass* GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
	void DisableButtonWithReason(const struct FText& DisabledReason);
	void ClearSelection();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnHovered();
	void BP_OnEnabled();
	void BP_OnDoubleClicked();
	void BP_OnDisabled();
	void BP_OnDeselected();
	void BP_OnClicked();
};


// Class CommonUI.CommonWidgetGroupBase
// 0x0000 (0x0028 - 0x0028)
class UCommonWidgetGroupBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetGroupBase");
		return ptr;
	}


	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};


// Class CommonUI.CommonButtonGroup
// 0x0070 (0x0098 - 0x0028)
class UCommonButtonGroup : public UCommonWidgetGroupBase
{
public:
	struct FScriptMulticastDelegate                    OnSelectedButtonChanged;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHoveredButtonChanged;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonDoubleClicked;                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelectionCleared;                                       // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bSelectionRequired;                                       // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0079(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonGroup");
		return ptr;
	}


	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int ButtonIndex);
	void OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected);
	void OnHandleButtonDoubleClicked(class UCommonButton* BaseButton);
	void OnHandleButtonClicked(class UCommonButton* BaseButton);
	void OnButtonUnhovered(class UCommonButton* BaseButton);
	void OnButtonHovered(class UCommonButton* BaseButton);
	bool HasAnyButtons();
	int GetSelectedButtonIndex();
	int GetButtonCount();
	class UCommonButton* GetButtonAtIndex(int Index);
	int FindButtonIndex(class UCommonButton* ButtonToFind);
	void DeselectAll();
};


// Class CommonUI.CommonCustomNavigation
// 0x0010 (0x0270 - 0x0260)
class UCommonCustomNavigation : public UBorder
{
public:
	struct FScriptDelegate                             OnNavigationEvent;                                        // 0x0260(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonCustomNavigation");
		return ptr;
	}

};


// Class CommonUI.CommonTextBlock
// 0x0048 (0x0260 - 0x0218)
class UCommonTextBlock : public UTextBlock
{
public:
	class UClass*                                      Style;                                                    // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScrollStyle;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0228(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextBlock");
		return ptr;
	}


	void SetWrapTextWidth(int InWrapTextAt);
	void SetStyle(class UClass* InStyle);
	void SetScrollStyle(class UClass* InScrollStyle);
	void SetProperties(class UClass* InStyle, class UClass* InScrollStyle);
	void ResetScrollState();
};


// Class CommonUI.CommonDateTimeTextBlock
// 0x0040 (0x02A0 - 0x0260)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0260(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonDateTimeTextBlock");
		return ptr;
	}


	void SetTimespanValue(const struct FTimespan& InTimespan);
	void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown);
	void SetCountDownCompletionText(const struct FText& InCompletionText);
	struct FDateTime GetDateTime();
};


// Class CommonUI.CommonGlobalInputHandler
// 0x0048 (0x0070 - 0x0028)
class UCommonGlobalInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonGlobalInputHandler");
		return ptr;
	}

};


// Class CommonUI.CommonInputManager
// 0x00E0 (0x0108 - 0x0028)
class UCommonInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	TScriptInterface<class UCommonActionHandlerInterface> CurrentlyHeldActionInputHandler;                          // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<class UCommonActivatablePanel*>             ActivatablePanelStack;                                    // 0x00B8(0x0010) (ExportObject, ZeroConstructor)
	class UCommonGlobalInputHandler*                   GlobalInputHandler;                                       // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	TArray<struct FOperation>                          Operations;                                               // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonInputManager");
		return ptr;
	}


	void SuspendStartingOperationProcessing();
	bool StopListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent);
	bool StartListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent);
	void SetGlobalInputHandlerPriorityFilter(int InFilterPriority);
	void ResumeStartingOperationProcessing();
	void PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel);
	bool IsPanelOnStack(class UCommonActivatablePanel* InPanel);
	bool IsInputSuspended();
	int GetGlobalInputHandlerPriorityFilter();
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
};


// Class CommonUI.CommonInputReflector
// 0x0030 (0x0240 - 0x0210)
class UCommonInputReflector : public UCommonUserWidget
{
public:
	class UClass*                                      ButtonType;                                               // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UCommonButton*>                       ActiveButtons;                                            // 0x0218(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UCommonButton*>                       InactiveButtons;                                          // 0x0228(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonInputReflector");
		return ptr;
	}


	void OnButtonAdded(class UCommonButton* AddedButton, const struct FCommonInputActionHandlerData& Data);
};


// Class CommonUI.CommonLazyImage
// 0x0048 (0x0220 - 0x01D8)
class UCommonLazyImage : public UImage
{
public:
	struct FScriptMulticastDelegate                    OnLoadingStateChanged;                                    // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x01E8(0x0030) MISSED OFFSET
	class UCommonLoadGuard*                            LoadGuard;                                                // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLazyImage");
		return ptr;
	}


	void ShowDefaultImage();
	void SetBrushFromLazyTexture(bool bMatchSize);
	void SetBrushFromLazyMaterial();
	void SetBrushFromLazyDisplayAsset(bool bMatchTextureSize);
	bool IsLoading();
	void ForwardLoadingStateChanged(bool bIsLoading);
};


// Class CommonUI.CommonListView
// 0x0000 (0x0328 - 0x0328)
class UCommonListView : public UListView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListView");
		return ptr;
	}

};


// Class CommonUI.CommonLoadGuard
// 0x0090 (0x01A8 - 0x0118)
class UCommonLoadGuard : public UContentWidget
{
public:
	struct FScriptMulticastDelegate                    OnLoadingStateChanged;                                    // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                        // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	struct FMargin                                     ThrobberPadding;                                          // 0x012C(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FText                                       LoadingText;                                              // 0x0140(0x0018) (Edit)
	struct FSoftClassPath                              TextStyleClass;                                           // 0x0158(0x0018) (Config)
	class UClass*                                      TextStyle;                                                // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCommonTextBlock*                            Text_LoadingText;                                         // 0x0178(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0180(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLoadGuard");
		return ptr;
	}


	void SetLoadingText(const struct FText& InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset(const struct FScriptDelegate& OnAssetLoaded);
};


// Class CommonUI.CommonNumericTextBlock
// 0x0088 (0x02E8 - 0x0260)
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOutroEvent;                                             // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterpolationEndedEvent;                                // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              CurrentNumericValue;                                      // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECommonNumericType                                 NumericType;                                              // 0x028C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	struct FCommonNumberFormattingOptions              FormattingSpecification;                                  // 0x0290(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              EaseOutInterpolationExponent;                             // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationUpdateInterval;                              // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PostInterpolationShrinkDuration;                          // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PerformSizeInterpolation;                                 // 0x02B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPercentage;                                             // 0x02B1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x36];                                      // 0x02B2(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonNumericTextBlock");
		return ptr;
	}


	void SetNumericType(ECommonNumericType InNumericType);
	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};


// Class CommonUI.CommonPoolableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonPoolableWidgetInterface");
		return ptr;
	}


	void OnReleaseToPool();
	void OnAcquireFromPool();
};


// Class CommonUI.CommonPopupButton
// 0x0010 (0x0898 - 0x0888)
class UCommonPopupButton : public UCommonButton
{
public:
	class UMenuAnchor*                                 PopupMenuAnchor;                                          // 0x0888(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonPopupMenu*                            PopupMenu;                                                // 0x0890(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonPopupButton");
		return ptr;
	}


	class UWidget* GetMenuAnchorWidget();
};


// Class CommonUI.CommonPopupMenu
// 0x0018 (0x0310 - 0x02F8)
class UCommonPopupMenu : public UCommonActivatablePanel
{
public:
	bool                                               bUseInputStack;                                           // 0x02F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UMenuAnchor>                  OwningMenuAnchor;                                         // 0x02FC(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      ContextProvidingObject;                                   // 0x0304(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonPopupMenu");
		return ptr;
	}


	void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);
	void SetContextProvider(class UObject* ContextProvidingObject);
	void RequestClose();
	void OnIsOpenChanged(bool IsOpen);
	void HandlePreDifferentContextProviderSet();
	void HandlePostDifferentContextProviderSet();
};


// Class CommonUI.CommonRotator
// 0x0040 (0x08C8 - 0x0888)
class UCommonRotator : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0888(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRotated;                                                // 0x0898(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCommonTextBlock*                            MyText;                                                   // 0x08A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x08B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonRotator");
		return ptr;
	}


	void ShiftTextRight();
	void ShiftTextLeft();
	void SetSelectedItem(int InValue);
	void PopulateTextLabels(TArray<struct FText> Labels);
	struct FText GetSelectedText();
	int GetSelectedIndex();
};


// Class CommonUI.CommonTabListWidget
// 0x00C8 (0x02D8 - 0x0210)
class UCommonTabListWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnTabSelected;                                            // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTabButtonCreated;                                       // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTabButtonRemoved;                                       // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FDataTableRowHandle                         NextTabInputActionData;                                   // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDataTableRowHandle                         PreviousTabInputActionData;                               // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoListenForInput;                                      // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UCommonWidgetSwitcher*                       LinkedSwitcher;                                           // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                       // 0x0270(0x0050) (ZeroConstructor)
	class UCommonButtonGroup*                          TabButtonGroup;                                           // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTabListWidget");
		return ptr;
	}


	void SetTabVisibility(const struct FName& TabNameID, ESlateVisibility NewVisibility);
	void SetTabInteractionEnabled(const struct FName& TabNameID, bool bEnable);
	void SetTabEnabled(const struct FName& TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonWidgetSwitcher* CommonSwitcher);
	bool SelectTabByID(const struct FName& TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(const struct FName& TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(const struct FName& TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget);
	void OnTabSelected__DelegateSignature(const struct FName& TabId);
	void OnTabButtonRemoved__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void HandleTabRemoved(const struct FName& TabNameID, class UCommonButton* TabButton);
	void HandleTabCreated(const struct FName& TabNameID, class UCommonButton* TabButton);
	void HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	struct FName GetTabIdAtIndex(int Index);
	int GetTabCount();
	class UCommonButton* GetTabButtonByID(const struct FName& TabNameID);
	struct FName GetSelectedTabId();
	class UCommonWidgetSwitcher* GetLinkedSwitcher();
	struct FName GetActiveTab();
	void DisableTabWithReason(const struct FName& TabNameID, const struct FText& Reason);
};


// Class CommonUI.CommonTextStyle
// 0x0098 (0x00C0 - 0x0028)
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                              Font;                                                     // 0x0028(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLinearColor                                Color;                                                    // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesDropShadow;                                          // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FVector2D                                   ShadowOffset;                                             // 0x0094(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x009C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x00AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextStyle");
		return ptr;
	}


	void GetShadowOffset(struct FVector2D* OutShadowOffset);
	void GetShadowColor(struct FLinearColor* OutColor);
	void GetMargin(struct FMargin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* OutFont);
	void GetColor(struct FLinearColor* OutColor);
};


// Class CommonUI.CommonTextScrollStyle
// 0x0018 (0x0040 - 0x0028)
class UCommonTextScrollStyle : public UObject
{
public:
	float                                              Speed;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndDelay;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDelay;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDelay;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextScrollStyle");
		return ptr;
	}

};


// Class CommonUI.CommonTileView
// 0x0000 (0x0348 - 0x0348)
class UCommonTileView : public UTileView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTileView");
		return ptr;
	}

};


// Class CommonUI.CommonTreeView
// 0x0000 (0x0380 - 0x0380)
class UCommonTreeView : public UTreeView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTreeView");
		return ptr;
	}

};


// Class CommonUI.CommonUIContext
// 0x0050 (0x0078 - 0x0028)
class UCommonUIContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInputSuspensionChanged;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
	class UCommonInputManager*                         CommonInputManager;                                       // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUIContext");
		return ptr;
	}


	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);
	void InputMethodChangedDelegate__DelegateSignature(bool bUsingGamepad);
	class UCommonInputManager* GetInputManager();
	struct FSlateBrush GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, ECommonGamepadType GamepadType);
};


// Class CommonUI.CommonUILibrary
// 0x0000 (0x0028 - 0x0028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUILibrary");
		return ptr;
	}


	class UWidget* STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);
};


// Class CommonUI.CommonUISettings
// 0x0080 (0x00A8 - 0x0028)
class UCommonUISettings : public UObject
{
public:
	struct FSoftClassPath                              DefaultTextStyle_StringRef;                               // 0x0028(0x0018) (Edit, Config)
	class UClass*                                      DefaultTextStyle;                                         // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftClassPath                              DefaultButtonStyle_StringRef;                             // 0x0048(0x0018) (Edit, Config)
	class UClass*                                      DefaultButtonStyle;                                       // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftClassPath                              DefaultBorderStyle_StringRef;                             // 0x0068(0x0018) (Edit, Config)
	class UClass*                                      DefaultBorderStyle;                                       // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FCommonInputKeyDisplayConfiguration> InputKeyToPlatformSpecificDisplayDataMap;                 // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	struct FDataTableRowHandle                         DefaultClickAction;                                       // 0x0098(0x0010) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUISettings");
		return ptr;
	}

};


// Class CommonUI.CommonVisibilityWidget
// 0x0010 (0x0290 - 0x0280)
class UCommonVisibilityWidget : public UCommonBorder
{
public:
	bool                                               bShowForGamepad;                                          // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForMouseAndKeyboard;                                 // 0x0281(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForTouch;                                            // 0x0282(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForPC;                                               // 0x0283(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForMac;                                              // 0x0284(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForPS4;                                              // 0x0285(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForXBox;                                             // 0x0286(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForIOS;                                              // 0x0287(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForAndroid;                                          // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForErebus;                                           // 0x0289(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   VisibleType;                                              // 0x028A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   HiddenType;                                               // 0x028B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonVisibilityWidget");
		return ptr;
	}

};


// Class CommonUI.CommonWidgetCarousel
// 0x0848 (0x0960 - 0x0118)
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCurrentPageIndexChanged;                                // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FWidgetCarouselNavigationBarStyle           NavigationStyle;                                          // 0x0130(0x07F8)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0928(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetCarousel");
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int Index);
	int GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};


// Class CommonUI.CommonWidgetSwitcher
// 0x0050 (0x0180 - 0x0130)
class UCommonWidgetSwitcher : public UWidgetSwitcher
{
public:
	struct FScriptMulticastDelegate                    OnActiveWidgetDeactivated;                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActiveWidgetChanged;                                    // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	ECommonSwitcherTransition                          TransitionType;                                           // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETransitionCurve                                   TransitionCurveType;                                      // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x22];                                      // 0x0158(0x0022) MISSED OFFSET
	bool                                               bWidgetActivationEnabled;                                 // 0x017A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOutroPanelBelow;                                         // 0x017B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetSwitcher");
		return ptr;
	}


	void SetTransitionParams(ECommonSwitcherTransition NewTransitionType, ETransitionCurve NewTransitionCurveType, float NewTransitionDuration);
	void SetActiveWidgetIndex_Advanced(int Index, bool AttemptActivationChange);
	void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);
	bool HasWidgets();
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
	void DeactivateWidget();
	void ActivateWidget();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};


// Class CommonUI.CommonWidgetStack
// 0x0000 (0x0180 - 0x0180)
class UCommonWidgetStack : public UCommonWidgetSwitcher
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetStack");
		return ptr;
	}


	void PushWidget(class UWidget* InWidget);
	class UWidget* PopWidget();
	void DeactivateWidget();
	void ActivateWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
