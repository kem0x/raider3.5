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

// Function InvitePopupMenu.InvitePopupMenu_C.GetNetId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        NetId                          (Parm, OutParm)
// bool                           bIsConsoleUniqueId             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInvitePopupMenu_C::GetNetId(struct FUniqueNetIdRepl* NetId, bool* bIsConsoleUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.GetNetId");

	UInvitePopupMenu_C_GetNetId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NetId != nullptr)
		*NetId = params.NetId;
	if (bIsConsoleUniqueId != nullptr)
		*bIsConsoleUniqueId = params.bIsConsoleUniqueId;
}


// Function InvitePopupMenu.InvitePopupMenu_C.InitializeValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueNetId                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUniqueNetIdRepl        InConsoleNetId                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   InPlayerName                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UInvitePopupMenu_C::InitializeValues(const struct FUniqueNetIdRepl& InUniqueNetId, const struct FUniqueNetIdRepl& InConsoleNetId, const struct FText& InPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.InitializeValues");

	UInvitePopupMenu_C_InitializeValues_Params params;
	params.InUniqueNetId = InUniqueNetId;
	params.InConsoleNetId = InConsoleNetId;
	params.InPlayerName = InPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerToParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInvitePopupMenu_C::InvitePlayerToParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerToParty");

	UInvitePopupMenu_C_InvitePlayerToParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerAsFriend
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInvitePopupMenu_C::InvitePlayerAsFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerAsFriend");

	UInvitePopupMenu_C_InvitePlayerAsFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvitePopupMenu.InvitePopupMenu_C.CanAddAsFriend
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanFriendPlayer               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInvitePopupMenu_C::CanAddAsFriend(bool* bCanFriendPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.CanAddAsFriend");

	UInvitePopupMenu_C_CanAddAsFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanFriendPlayer != nullptr)
		*bCanFriendPlayer = params.bCanFriendPlayer;
}


// Function InvitePopupMenu.InvitePopupMenu_C.CanInviteToParty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanInviteToParty               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInvitePopupMenu_C::CanInviteToParty(bool* CanInviteToParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.CanInviteToParty");

	UInvitePopupMenu_C_CanInviteToParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanInviteToParty != nullptr)
		*CanInviteToParty = params.CanInviteToParty;
}


// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInvitePopupMenu_C::BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");

	UInvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInvitePopupMenu_C::BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature");

	UInvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInvitePopupMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature");

	UInvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvitePopupMenu.InvitePopupMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UInvitePopupMenu_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.OnActivated");

	UInvitePopupMenu_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvitePopupMenu.InvitePopupMenu_C.ExecuteUbergraph_InvitePopupMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInvitePopupMenu_C::ExecuteUbergraph_InvitePopupMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvitePopupMenu.InvitePopupMenu_C.ExecuteUbergraph_InvitePopupMenu");

	UInvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
