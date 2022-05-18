#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

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
// 0x0008 (0x0218 - 0x0210)
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                               bConsumePointerInput;                                     // 0x0210(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUserWidget");
		return ptr;
	}


	void SetConsumePointerInput(bool bInConsumePointerInput);
};


// Class CommonUI.CommonActivatablePanel
// 0x01A8 (0x03C0 - 0x0218)
class UCommonActivatablePanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWidgetActivated;                                        // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWidgetDeactivated;                                      // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x100];                                     // 0x0240(0x0100) MISSED OFFSET
	bool                                               bConsumeAllActions;                                       // 0x0340(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExposeActionsExternally;                                 // 0x0341(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBypassStack;                                       // 0x0342(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7D];                                      // 0x0343(0x007D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActivatablePanel");
		return ptr;
	}


	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent);
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
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent);
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
// 0x0080 (0x04A0 - 0x0420)
class UCommonButtonInternal : public UButton
{
public:
	struct FScriptMulticastDelegate                    OnDoubleClicked;                                          // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0430(0x0040) MISSED OFFSET
	int                                                MinWidth;                                                 // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinHeight;                                                // 0x0474(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bButtonEnabled;                                           // 0x0478(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInteractionEnabled;                                      // 0x0479(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x26];                                      // 0x047A(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonInternal");
		return ptr;
	}

};


// Class CommonUI.CommonButton
// 0x05F0 (0x0808 - 0x0218)
class UCommonButton : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedChanged;                                        // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonDoubleClicked;                                    // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonUnhovered;                                        // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                MinWidth;                                                 // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinHeight;                                                // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Style;                                                    // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateSound                                 PressedSlateSoundOverride;                                // 0x0278(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateSound                                 HoveredSlateSoundOverride;                                // 0x0290(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyAlphaOnDisable : 1;                                 // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSelectable : 1;                                          // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShouldSelectUponReceivingFocus : 1;                      // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInteractableWhenSelected : 1;                            // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bToggleable : 1;                                          // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDisplayInputActionWhenNotInteractable : 1;               // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bHideInputActionWithKeyboard : 1;                         // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShouldUseFallbackDefaultInputAction : 1;                 // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02A9(0x0001) MISSED OFFSET
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x02AA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02AB(0x0001) MISSED OFFSET
	int                                                InputPriority;                                            // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         TriggeringInputAction;                                    // 0x02B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x40];                                      // 0x02C0(0x0040) MISSED OFFSET
	class UCommonActionWidget*                         InputActionWidget;                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                   // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FButtonStyle                                NormalStyle;                                              // 0x0310(0x0278)
	struct FButtonStyle                                SelectedStyle;                                            // 0x0588(0x0278)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0800(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButton");
		return ptr;
	}


	void SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel);
	void SetStyle(class UClass* InStyle);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetMinDimensions(int InMinWidth, int InMinHeight);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const struct FName& InProgressMaterialParam);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void OnUnhovered();
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void OnSelected();
	void OnInputMethodChanged(bool bUsingGamepad);
	void OnHovered();
	void OnEnabled();
	void OnDoubleClicked();
	void OnDisabled();
	void OnDeselected();
	void OnCurrentTextStyleChanged();
	void OnClicked();
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
// 0x0050 (0x0270 - 0x0220)
class UCommonTextBlock : public UTextBlock
{
public:
	class UClass*                                      Style;                                                    // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScrollStyle;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0230(0x0040) MISSED OFFSET

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
// 0x0040 (0x02B0 - 0x0270)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0270(0x0040) MISSED OFFSET

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


// Class CommonUI.CommonDynamicEntryBox
// 0x0140 (0x0240 - 0x0100)
class UCommonDynamicEntryBox : public UWidget
{
public:
	class UClass*                                      EntryWidgetClass;                                         // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0108(0x00F8) MISSED OFFSET
	struct FVector2D                                   EntrySpacing;                                             // 0x0200(0x0008) (Edit, IsPlainOldData)
	struct FSlateChildSize                             EntrySize;                                                // 0x0208(0x0008) (Edit)
	TEnumAsByte<EHorizontalAlignment>                  EntryHAlign;                                              // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    EntryVAlign;                                              // 0x0211(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0212(0x0002) MISSED OFFSET
	int                                                MaxElementSize;                                           // 0x0214(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           SpacingPattern;                                           // 0x0218(0x0010) (Edit, ZeroConstructor)
	EWidgetClipping                                    EntryClipping;                                            // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDynamicBoxType                                    BoxType;                                                  // 0x0229(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x022A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonDynamicEntryBox");
		return ptr;
	}


	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	int GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
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
// 0x0298 (0x02C0 - 0x0028)
class UCommonInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0028(0x0238) MISSED OFFSET
	TScriptInterface<class UCommonActionHandlerInterface> CurrentlyHeldActionInputHandler;                          // 0x0260(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<class UCommonActivatablePanel*>             ActivatablePanelStack;                                    // 0x0270(0x0010) (ExportObject, ZeroConstructor)
	class UCommonGlobalInputHandler*                   GlobalInputHandler;                                       // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0288(0x0018) MISSED OFFSET
	TArray<struct FOperation>                          Operations;                                               // 0x02A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

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
// 0x0030 (0x0248 - 0x0218)
class UCommonInputReflector : public UCommonUserWidget
{
public:
	class UClass*                                      ButtonType;                                               // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UCommonButton*>                       ActiveButtons;                                            // 0x0220(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UCommonButton*>                       InactiveButtons;                                          // 0x0230(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

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


// Class CommonUI.CommonListItem
// 0x0000 (0x0028 - 0x0028)
class UCommonListItem : public UCommonPoolableWidgetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListItem");
		return ptr;
	}


	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int InIndexInList);
	void SetExpanded(bool bExpanded);
	void RegisterOnClicked(const struct FScriptDelegate& Callback);
	void Private_OnExpanderArrowShiftClicked();
	bool IsItemExpanded();
	int GetIndentLevel();
	int DoesItemHaveChildren();
};


// Class CommonUI.CommonListViewNullItem
// 0x0000 (0x0028 - 0x0028)
class UCommonListViewNullItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListViewNullItem");
		return ptr;
	}

};


// Class CommonUI.CommonListView
// 0x01E0 (0x02E0 - 0x0100)
class UCommonListView : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDoubleClicked;                                      // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemWidgetCreated;                                      // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemWidgetDestroyed;                                    // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemScrolledIntoView;                                   // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ItemHeight;                                               // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FMargin                                     DesiredItemPadding;                                       // 0x0174(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	class UClass*                                      ListItemClass;                                            // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0190(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x0191(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bClearSelectionOnClick;                                   // 0x0192(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0193(0x0001) MISSED OFFSET
	int                                                NumPreAllocatedEntries;                                   // 0x0194(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bSimulateDoubleClickOnSelectedItemClick;                  // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x137];                                     // 0x0199(0x0137) MISSED OFFSET
	class UCommonListViewNullItem*                     NullItem;                                                 // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListView");
		return ptr;
	}


	void SetSimulateDoubleClickOnSelectedItemClick(bool bInSimulateDoubleClick);
	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);
	bool SetSelectedItem(class UObject* Item, bool bWaitIfPendingRefresh);
	bool SetSelectedIndex(int Index);
	void SetItemSelection(class UObject* Item, bool bSelected);
	void SetItemHeight(float NewHeight);
	void SetDesiredItemPadding(const struct FMargin& DesiredPadding);
	void SetDataProvider(TArray<class UObject*> InDataProvider);
	void ScrollIntoView(class UObject* Item, bool NavigateOnScrollIntoView);
	bool IsRefreshPending();
	bool IsItemVisible(class UObject* Item);
	TEnumAsByte<ESelectionMode> GetSelectionModeBP();
	bool GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* GetSelectedItem();
	int GetNumItemsSelected();
	int GetNumItems();
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void DynamicHandleItemUnhoveredCommonButton(class UCommonButton* Button);
	void DynamicHandleItemHoveredCommonButton(class UCommonButton* Button);
	void DynamicHandleItemDoubleClickedCommonButton(class UCommonButton* Button);
	void DynamicHandleItemClickedUserWidget(class UUserWidget* Widget);
	void DynamicHandleItemClickedCommonButton(class UCommonButton* Button);
	void ClearSelection();
	void Clear();
	void CancelScrollIntoView();
	void AddItem(class UObject* Item);
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
// 0x0088 (0x02F8 - 0x0270)
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOutroEvent;                                             // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterpolationEndedEvent;                                // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              CurrentNumericValue;                                      // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECommonNumericType                                 NumericType;                                              // 0x029C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	struct FCommonNumberFormattingOptions              FormattingSpecification;                                  // 0x02A0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              EaseOutInterpolationExponent;                             // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationUpdateInterval;                              // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PostInterpolationShrinkDuration;                          // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PerformSizeInterpolation;                                 // 0x02C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPercentage;                                             // 0x02C1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x36];                                      // 0x02C2(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonNumericTextBlock");
		return ptr;
	}


	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};


// Class CommonUI.CommonObjectListItem
// 0x0000 (0x0028 - 0x0028)
class UCommonObjectListItem : public UCommonListItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonObjectListItem");
		return ptr;
	}


	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Reset();
	class UObject* GetData();
};


// Class CommonUI.CommonPopupMenu
// 0x0020 (0x03E0 - 0x03C0)
class UCommonPopupMenu : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C0(0x0004) MISSED OFFSET
	TWeakObjectPtr<class UMenuAnchor>                  OwningMenuAnchor;                                         // 0x03C4(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      ContextProvidingObject;                                   // 0x03CC(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03D4(0x000C) MISSED OFFSET

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
// 0x0078 (0x0880 - 0x0808)
class UCommonRotator : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0808(0x0048) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRotated;                                                // 0x0850(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCommonTextBlock*                            MyText;                                                   // 0x0860(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0868(0x0018) MISSED OFFSET

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
// 0x00C8 (0x02E0 - 0x0218)
class UCommonTabListWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnTabSelected;                                            // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTabButtonCreated;                                       // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTabButtonRemoved;                                       // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FDataTableRowHandle                         NextTabInputActionData;                                   // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDataTableRowHandle                         PreviousTabInputActionData;                               // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoListenForInput;                                      // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	class UCommonWidgetSwitcher*                       LinkedSwitcher;                                           // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                       // 0x0278(0x0050) (ZeroConstructor)
	class UCommonButtonGroup*                          TabButtonGroup;                                           // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET

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
// 0x0010 (0x02F0 - 0x02E0)
class UCommonTileView : public UCommonListView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTileView");
		return ptr;
	}


	void SetItemWidth(float NewWidth);
};


// Class CommonUI.CommonTreeView
// 0x0020 (0x0300 - 0x02E0)
class UCommonTreeView : public UCommonListView
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	bool                                               bAllowInvisibleItemSelection;                             // 0x02E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x02E9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTreeView");
		return ptr;
	}


	void SetSelection(class UObject* InItem, bool bScrollFromTop);
	void SetItemExpansion(class UObject* Item, bool InShouldExpandItem);
	void SetAllExpansion(bool InShouldExpandItem);
	void RequestRefresh();
	void DynamicHandleItemClickedCommonButton(class UCommonButton* Button);
};


// Class CommonUI.CommonUIContext
// 0x00B8 (0x00E0 - 0x0028)
class UCommonUIContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInputSuspensionChanged;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
	class UCommonInputManager*                         CommonInputManager;                                       // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUIContext");
		return ptr;
	}


	bool IsUsingTouch();
	bool IsUsingGamepad();
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
	ESlateVisibility                                   VisibleType;                                              // 0x0289(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   HiddenType;                                               // 0x028A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x028B(0x0005) MISSED OFFSET

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
	class UWidget* PopWigdet();
	void DeactivateWidget();
	void ActivateWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
