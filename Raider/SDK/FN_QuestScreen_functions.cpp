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

// Function QuestScreen.QuestScreen_C.CalculateInitialQuestToSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::CalculateInitialQuestToSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.CalculateInitialQuestToSelect");

	UQuestScreen_C_CalculateInitialQuestToSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.HandleAbandonQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::HandleAbandonQuest(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleAbandonQuest");

	UQuestScreen_C_HandleAbandonQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.ShouldShowPlayQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowPlay                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::ShouldShowPlayQuest(class UFortQuestItem* Quest, bool* ShouldShowPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ShouldShowPlayQuest");

	UQuestScreen_C_ShouldShowPlayQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldShowPlay != nullptr)
		*ShouldShowPlay = params.ShouldShowPlay;
}


// Function QuestScreen.QuestScreen_C.Toggle Disable Claim Reward Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToDisable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::Toggle_Disable_Claim_Reward_Button(bool ToDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Toggle Disable Claim Reward Button");

	UQuestScreen_C_Toggle_Disable_Claim_Reward_Button_Params params;
	params.ToDisable = ToDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.HandleInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::HandleInventory(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleInventory");

	UQuestScreen_C_HandleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.Update Category Buttons Bang State
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::Update_Category_Buttons_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Update Category Buttons Bang State");

	UQuestScreen_C_Update_Category_Buttons_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.Update Pending Seen Quest Items
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::Update_Pending_Seen_Quest_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Update Pending Seen Quest Items");

	UQuestScreen_C_Update_Pending_Seen_Quest_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.RefreshQuestCategories
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::RefreshQuestCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.RefreshQuestCategories");

	UQuestScreen_C_RefreshQuestCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.HandleOnEndSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::HandleOnEndSpokenDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleOnEndSpokenDialog");

	UQuestScreen_C_HandleOnEndSpokenDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.StopConversation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::StopConversation(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.StopConversation");

	UQuestScreen_C_StopConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.ReplayOutroAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::ReplayOutroAudio(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ReplayOutroAudio");

	UQuestScreen_C_ReplayOutroAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.HandlePendingNavigationOp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::HandlePendingNavigationOp()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandlePendingNavigationOp");

	UQuestScreen_C_HandlePendingNavigationOp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.SelectQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::SelectQuest(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.SelectQuest");

	UQuestScreen_C_SelectQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.HandleQuestOp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::HandleQuestOp(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleQuestOp");

	UQuestScreen_C_HandleQuestOp_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.PinQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::PinQuest(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.PinQuest");

	UQuestScreen_C_PinQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.UpdateInputHandlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Active_Quest                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::UpdateInputHandlers(class UFortQuestItem* Active_Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.UpdateInputHandlers");

	UQuestScreen_C_UpdateInputHandlers_Params params;
	params.Active_Quest = Active_Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.ClaimReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::ClaimReward(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ClaimReward");

	UQuestScreen_C_ClaimReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.SelectInitialQuest
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::SelectInitialQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.SelectInitialQuest");

	UQuestScreen_C_SelectInitialQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnAbandonQuestConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          QuestToAbandon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::OnAbandonQuestConfirmed(class UFortQuestItem* QuestToAbandon)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnAbandonQuestConfirmed");

	UQuestScreen_C_OnAbandonQuestConfirmed_Params params;
	params.QuestToAbandon = QuestToAbandon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.ReplayIntroAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::ReplayIntroAudio(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ReplayIntroAudio");

	UQuestScreen_C_ReplayIntroAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.SetupInputHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::SetupInputHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.SetupInputHandlers");

	UQuestScreen_C_SetupInputHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.populateDetailWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::populateDetailWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.populateDetailWidgets");

	UQuestScreen_C_populateDetailWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.PlayQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::PlayQuest(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.PlayQuest");

	UQuestScreen_C_PlayQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleBack");

	UQuestScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuestScreen.QuestScreen_C.OnGetChildrenForCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UQuestScreen_C::OnGetChildrenForCategory(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnGetChildrenForCategory");

	UQuestScreen_C_OnGetChildrenForCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestScreen.QuestScreen_C.DialogResult_CE39442C4BCACCFD8414B495A3B27A21
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::DialogResult_CE39442C4BCACCFD8414B495A3B27A21(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.DialogResult_CE39442C4BCACCFD8414B495A3B27A21");

	UQuestScreen_C_DialogResult_CE39442C4BCACCFD8414B495A3B27A21_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature");

	UQuestScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature");

	UQuestScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.Refresh Tree View
// (BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::Refresh_Tree_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Refresh Tree View");

	UQuestScreen_C_Refresh_Tree_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UQuestScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnActivated");

	UQuestScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UQuestScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnDeactivated");

	UQuestScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestScreen_C::BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature");

	UQuestScreen_C_BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.PlayerPartyStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestScreen_C::PlayerPartyStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.PlayerPartyStateChanged");

	UQuestScreen_C_PlayerPartyStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnClientPartyStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPartyState                PartyState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::OnClientPartyStateChanged(EFortPartyState PartyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnClientPartyStateChanged");

	UQuestScreen_C_OnClientPartyStateChanged_Params params;
	params.PartyState = PartyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnMatchamkingComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMatchmakingCompleteResult     Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::OnMatchamkingComplete(EMatchmakingCompleteResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnMatchamkingComplete");

	UQuestScreen_C_OnMatchamkingComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnMatchmakingStarted
// (BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::OnMatchmakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnMatchmakingStarted");

	UQuestScreen_C_OnMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnPartyLeft
// (BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::OnPartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnPartyLeft");

	UQuestScreen_C_OnPartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestScreen_C::BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature");

	UQuestScreen_C_BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Construct");

	UQuestScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::OnItemSelected(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnItemSelected");

	UQuestScreen_C_OnItemSelected_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.ShowAbandonQuestDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          QuestToAbandon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::ShowAbandonQuestDialog(class UFortQuestItem* QuestToAbandon)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ShowAbandonQuestDialog");

	UQuestScreen_C_ShowAbandonQuestDialog_Params params;
	params.QuestToAbandon = QuestToAbandon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.ExecuteUbergraph_QuestScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::ExecuteUbergraph_QuestScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ExecuteUbergraph_QuestScreen");

	UQuestScreen_C_ExecuteUbergraph_QuestScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.AbandonQuest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          QuestToAbandon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestScreen_C::AbandonQuest__DelegateSignature(class UFortQuestItem* QuestToAbandon)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.AbandonQuest__DelegateSignature");

	UQuestScreen_C_AbandonQuest__DelegateSignature_Params params;
	params.QuestToAbandon = QuestToAbandon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.CloseJournal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UQuestScreen_C::CloseJournal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.CloseJournal__DelegateSignature");

	UQuestScreen_C_CloseJournal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
