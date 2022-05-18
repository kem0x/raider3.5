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

// Function PartyFinder.PartyFinder_C.TouchToClose
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPartyFinder_C::TouchToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.TouchToClose");

	UPartyFinder_C_TouchToClose_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.SetupInitialSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::SetupInitialSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.SetupInitialSelection");

	UPartyFinder_C_SetupInitialSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.CheckLFGStatusAndUpdateDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::CheckLFGStatusAndUpdateDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.CheckLFGStatusAndUpdateDisplay");

	UPartyFinder_C_CheckLFGStatusAndUpdateDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.OnPartyServicesDegredationChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAreServicesDegredated         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::OnPartyServicesDegredationChanged(bool bAreServicesDegredated)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.OnPartyServicesDegredationChanged");

	UPartyFinder_C_OnPartyServicesDegredationChanged_Params params;
	params.bAreServicesDegredated = bAreServicesDegredated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.Handle_Nav_left
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::Handle_Nav_left(EUINavigation Navigation, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.Handle_Nav_left");

	UPartyFinder_C_Handle_Nav_left_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function PartyFinder.PartyFinder_C.Handle_Nav_right
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::Handle_Nav_right(EUINavigation Navigation, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.Handle_Nav_right");

	UPartyFinder_C_Handle_Nav_right_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function PartyFinder.PartyFinder_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.UnbindDelegates");

	UPartyFinder_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::UpdateDetailsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty");

	UPartyFinder_C_UpdateDetailsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        FriendId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPartyFinder_C::HandleFriendPresenceUpdated(struct FUniqueNetIdRepl* FriendId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated");

	UPartyFinder_C_HandleFriendPresenceUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendId != nullptr)
		*FriendId = params.FriendId;
}


// Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UPartyFinder_C::SocialTreeView_GetChildrenForCategory(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory");

	UPartyFinder_C_SocialTreeView_GetChildrenForCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.IgnoreInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::IgnoreInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.IgnoreInvite");

	UPartyFinder_C_IgnoreInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.SendInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::SendInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.SendInvite");

	UPartyFinder_C_SendInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.GetFinderItemVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortSocialItem*         PartyFinderItem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPartyFinder_C::GetFinderItemVisibility(class UFortSocialItem* PartyFinderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.GetFinderItemVisibility");

	UPartyFinder_C_GetFinderItemVisibility_Params params;
	params.PartyFinderItem = PartyFinderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.UpdateDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSocialItem*         PartyFinderItem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::UpdateDetails(class UFortSocialItem* PartyFinderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.UpdateDetails");

	UPartyFinder_C_UpdateDetails_Params params;
	params.PartyFinderItem = PartyFinderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandleSocialListChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*> SocialItems                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bExpandAll                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::HandleSocialListChanged(bool bExpandAll, TArray<class UFortSocialItem*>* SocialItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandleSocialListChanged");

	UPartyFinder_C_HandleSocialListChanged_Params params;
	params.bExpandAll = bExpandAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocialItems != nullptr)
		*SocialItems = params.SocialItems;
}


// Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPartyTransition           Transition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::HandlePartyTransitionStarted(EFortPartyTransition Transition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted");

	UPartyFinder_C_HandlePartyTransitionStarted_Params params;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BindDelegates");

	UPartyFinder_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinder_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.Construct");

	UPartyFinder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPartyFinder_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.OnActivated");

	UPartyFinder_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature");

	UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinder_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.Destruct");

	UPartyFinder_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.OnSocialListChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*> SocialItems                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPartyFinder_C::OnSocialListChanged(TArray<class UFortSocialItem*> SocialItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.OnSocialListChanged");

	UPartyFinder_C_OnSocialListChanged_Params params;
	params.SocialItems = SocialItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature");

	UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandlePartyDataChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyState             PartyData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPartyFinder_C::HandlePartyDataChanged(const struct FPartyState& PartyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandlePartyDataChanged");

	UPartyFinder_C_HandlePartyDataChanged_Params params;
	params.PartyData = PartyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.ClosePartyFinder
// (BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::ClosePartyFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.ClosePartyFinder");

	UPartyFinder_C_ClosePartyFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_50_OnListViewItemWidgetDestroyed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_50_OnListViewItemWidgetDestroyed__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_50_OnListViewItemWidgetDestroyed__DelegateSignature");

	UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_50_OnListViewItemWidgetDestroyed__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_C::BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::ExecuteUbergraph_PartyFinder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder");

	UPartyFinder_C_ExecuteUbergraph_PartyFinder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
