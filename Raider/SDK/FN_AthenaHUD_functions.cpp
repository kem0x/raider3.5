// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaHUD.AthenaHUD_C.HasClientBeenNotifiedOfWin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bClientWon                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bTeamWon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::HasClientBeenNotifiedOfWin(bool* bClientWon, bool* bTeamWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HasClientBeenNotifiedOfWin");

	UAthenaHUD_C_HasClientBeenNotifiedOfWin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bClientWon != nullptr)
		*bClientWon = params.bClientWon;
	if (bTeamWon != nullptr)
		*bTeamWon = params.bTeamWon;
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet_RCPawnVisibilityUpdates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::HandlePawnSet_RCPawnVisibilityUpdates(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandlePawnSet_RCPawnVisibilityUpdates");

	UAthenaHUD_C_HandlePawnSet_RCPawnVisibilityUpdates_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet_VisibilityUpdates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::HandlePawnSet_VisibilityUpdates(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandlePawnSet_VisibilityUpdates");

	UAthenaHUD_C_HandlePawnSet_VisibilityUpdates_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandlePawnSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandlePawnSet");

	UAthenaHUD_C_HandlePawnSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.BindDelegates");

	UAthenaHUD_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.SetupCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::SetupCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.SetupCameraMode");

	UAthenaHUD_C_SetupCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleAircraftModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged");

	UAthenaHUD_C_HandleAircraftModeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            HUDElementTagToCheck           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 HUDElement                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UAthenaHUD_C::CheckHUDElementVisibility(const struct FGameplayTag& HUDElementTagToCheck, struct FGameplayTagContainer* HiddenHUDElementTags, class UWidget** HUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility");

	UAthenaHUD_C_CheckHUDElementVisibility_Params params;
	params.HUDElementTagToCheck = HUDElementTagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
	if (HUDElement != nullptr)
		*HUDElement = params.HUDElement;
}


// Function AthenaHUD.AthenaHUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaHUD_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.PopContentWidgetInternal");

	UAthenaHUD_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaHUD.AthenaHUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreFirstAccept              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::ShowPicker(EFortPickerMode Mode, int InitialOption, bool IgnoreFirstAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.ShowPicker");

	UAthenaHUD_C_ShowPicker_Params params;
	params.Mode = Mode;
	params.InitialOption = InitialOption;
	params.IgnoreFirstAccept = IgnoreFirstAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleFocusChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleFocusChat");

	UAthenaHUD_C_HandleFocusChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::ToggleChat(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.ToggleChat");

	UAthenaHUD_C_ToggleChat_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::SetPersistentHUDContentVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.SetPersistentHUDContentVisibility");

	UAthenaHUD_C_SetPersistentHUDContentVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InidicatorsEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged");

	UAthenaHUD_C_HandleIndicatorModeChanged_Params params;
	params.InidicatorsEnabled = InidicatorsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::OnPlayerTargetingChanged(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnPlayerTargetingChanged");

	UAthenaHUD_C_OnPlayerTargetingChanged_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged");

	UAthenaHUD_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnHandleAction
// (HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnHandleAction");

	UAthenaHUD_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::SetQuickbarSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes");

	UAthenaHUD_C_SetQuickbarSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 Quickbar_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::HandleQuickbarSlotFocusSlotChanged(EFortQuickBars Quickbar_Index, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged");

	UAthenaHUD_C_HandleQuickbarSlotFocusSlotChanged_Params params;
	params.Quickbar_Index = Quickbar_Index;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaHUD_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged");

	UAthenaHUD_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED");

	UAthenaHUD_C_OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED");

	UAthenaHUD_C_OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnEnterState");

	UAthenaHUD_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.QuestsCompleted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaHUD_C::QuestsCompleted(TArray<class UFortQuestItem*> Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.QuestsCompleted");

	UAthenaHUD_C_QuestsCompleted_Params params;
	params.Quests = Quests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.Construct");

	UAthenaHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaHUD_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.PushContentWidgetInternal");

	UAthenaHUD_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.Destruct");

	UAthenaHUD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged");

	UAthenaHUD_C_HandleInputMethodChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   FailureText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const struct FText& FailureText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction");

	UAthenaHUD_C_OnUnableToPerformAction_Params params;
	params.FailedReason = FailedReason;
	params.FailureText = FailureText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.Prepare Game Over
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::Prepare_Game_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.Prepare Game Over");

	UAthenaHUD_C_Prepare_Game_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.On Player Died
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaHUD_C::On_Player_Died(const struct FFortPlayerDeathReport& DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.On Player Died");

	UAthenaHUD_C_On_Player_Died_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::PrepareToShowEndGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI");

	UAthenaHUD_C_PrepareToShowEndGameUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.On Player Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::On_Player_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.On Player Won");

	UAthenaHUD_C_On_Player_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::OnRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnRevived");

	UAthenaHUD_C_OnRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::HandleRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleRevived");

	UAthenaHUD_C_HandleRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.On Team Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaHUD_C::On_Team_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.On Team Won");

	UAthenaHUD_C_On_Team_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.ViewModelChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel** ViewModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::ViewModelChanged(class UAthenaPlayerViewModel** ViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.ViewModelChanged");

	UAthenaHUD_C_ViewModelChanged_Params params;
	params.ViewModel = ViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnHUDScaleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HUDScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::OnHUDScaleChanged(float* HUDScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnHUDScaleChanged");

	UAthenaHUD_C_OnHUDScaleChanged_Params params;
	params.HUDScale = HUDScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.SetFullScreenMapVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::SetFullScreenMapVisibility(bool* bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.SetFullScreenMapVisibility");

	UAthenaHUD_C_SetFullScreenMapVisibility_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_C::ExecuteUbergraph_AthenaHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD");

	UAthenaHUD_C_ExecuteUbergraph_AthenaHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
