#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.NumPartyMembersInviteOrJoinText
struct UPartyFinder_ListItem_ButtonOptions_C_NumPartyMembersInviteOrJoinText_Params
{
	int                                                NumOfPartyMembers;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetEnableButtons
struct UPartyFinder_ListItem_ButtonOptions_C_SetEnableButtons_Params
{
	bool                                               bIsEnabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetupButtons
struct UPartyFinder_ListItem_ButtonOptions_C_SetupButtons_Params
{
	bool                                               bIsInvite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanbeJoinedIfNotInvite;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.PreConstruct
struct UPartyFinder_ListItem_ButtonOptions_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Construct
struct UPartyFinder_ListItem_ButtonOptions_C_Construct_Params
{
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Invite
struct UPartyFinder_ListItem_ButtonOptions_C_Disable_STW_Invite_Params
{
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Join
struct UPartyFinder_ListItem_ButtonOptions_C_Disable_STW_Join_Params
{
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions
struct UPartyFinder_ListItem_ButtonOptions_C_ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.STWInvite_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_STWInvite_Clicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.JoinParty_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_JoinParty_Clicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.IgnoreInvite_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_IgnoreInvite_Clicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.InviteToParty_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_InviteToParty_Clicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.AcceptPartyInvite_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_AcceptPartyInvite_Clicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
