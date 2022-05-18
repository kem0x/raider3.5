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

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.NumPartyMembersInviteOrJoinText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumOfPartyMembers              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::NumPartyMembersInviteOrJoinText(int NumOfPartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.NumPartyMembersInviteOrJoinText");

	UPartyFinder_ListItem_ButtonOptions_C_NumPartyMembersInviteOrJoinText_Params params;
	params.NumOfPartyMembers = NumOfPartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetEnableButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::SetEnableButtons(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetEnableButtons");

	UPartyFinder_ListItem_ButtonOptions_C_SetEnableButtons_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetupButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsInvite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanbeJoinedIfNotInvite        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::SetupButtons(bool bIsInvite, bool bCanbeJoinedIfNotInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetupButtons");

	UPartyFinder_ListItem_ButtonOptions_C_SetupButtons_Params params;
	params.bIsInvite = bIsInvite;
	params.bCanbeJoinedIfNotInvite = bCanbeJoinedIfNotInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.PreConstruct");

	UPartyFinder_ListItem_ButtonOptions_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinder_ListItem_ButtonOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Construct");

	UPartyFinder_ListItem_ButtonOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Invite
// (BlueprintCallable, BlueprintEvent)

void UPartyFinder_ListItem_ButtonOptions_C::Disable_STW_Invite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Invite");

	UPartyFinder_ListItem_ButtonOptions_C_Disable_STW_Invite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Join
// (BlueprintCallable, BlueprintEvent)

void UPartyFinder_ListItem_ButtonOptions_C::Disable_STW_Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Join");

	UPartyFinder_ListItem_ButtonOptions_C_Disable_STW_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions");

	UPartyFinder_ListItem_ButtonOptions_C_ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.STWInvite_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::STWInvite_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.STWInvite_Clicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_STWInvite_Clicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.JoinParty_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::JoinParty_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.JoinParty_Clicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_JoinParty_Clicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.IgnoreInvite_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::IgnoreInvite_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.IgnoreInvite_Clicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_IgnoreInvite_Clicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.InviteToParty_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::InviteToParty_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.InviteToParty_Clicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_InviteToParty_Clicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.AcceptPartyInvite_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPartyFinder_ListItem_ButtonOptions_C::AcceptPartyInvite_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.AcceptPartyInvite_Clicked__DelegateSignature");

	UPartyFinder_ListItem_ButtonOptions_C_AcceptPartyInvite_Clicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
