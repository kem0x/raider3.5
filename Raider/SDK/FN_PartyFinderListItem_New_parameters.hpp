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

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.UnbindAllButtons
struct UPartyFinderListItem_New_C_UnbindAllButtons_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetupButtonChoices
struct UPartyFinderListItem_New_C_SetupButtonChoices_Params
{
	bool                                               bIsInvite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetupButtonBindingsForPartyInvite
struct UPartyFinderListItem_New_C_SetupButtonBindingsForPartyInvite_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetupButtonBindingsForFriendItem
struct UPartyFinderListItem_New_C_SetupButtonBindingsForFriendItem_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.UnbindSocialItemDelegates
struct UPartyFinderListItem_New_C_UnbindSocialItemDelegates_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.UpdateStateText
struct UPartyFinderListItem_New_C_UpdateStateText_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetupExpansion
struct UPartyFinderListItem_New_C_SetupExpansion_Params
{
	bool                                               Expanded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.HandlePresenceUpdated
struct UPartyFinderListItem_New_C_HandlePresenceUpdated_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.BindSocialItemDelegates
struct UPartyFinderListItem_New_C_BindSocialItemDelegates_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.InitializeItem
struct UPartyFinderListItem_New_C_InitializeItem_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.DialogResult_58DE7379408F85443A0936A25405A46F
struct UPartyFinderListItem_New_C_DialogResult_58DE7379408F85443A0936A25405A46F_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnSocialItemSet
struct UPartyFinderListItem_New_C_OnSocialItemSet_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.ExpansionChanged
struct UPartyFinderListItem_New_C_ExpansionChanged_Params
{
	bool*                                              bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.Construct
struct UPartyFinderListItem_New_C_Construct_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.Destruct
struct UPartyFinderListItem_New_C_Destruct_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.PreConstruct
struct UPartyFinderListItem_New_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnIgnoreInviteClicked
struct UPartyFinderListItem_New_C_OnIgnoreInviteClicked_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnInviteToPartyClicked
struct UPartyFinderListItem_New_C_OnInviteToPartyClicked_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnAcceptPartyInviteClicked
struct UPartyFinderListItem_New_C_OnAcceptPartyInviteClicked_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.ReEnableInviteButtonAfterDelay
struct UPartyFinderListItem_New_C_ReEnableInviteButtonAfterDelay_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.SetSelected
struct UPartyFinderListItem_New_C_SetSelected_Params
{
	bool*                                              bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnHovered
struct UPartyFinderListItem_New_C_OnHovered_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnUnhovered
struct UPartyFinderListItem_New_C_OnUnhovered_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.OnJoinPartyClicked
struct UPartyFinderListItem_New_C_OnJoinPartyClicked_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.STWInviteClicked
struct UPartyFinderListItem_New_C_STWInviteClicked_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.ReEnableSTWInvite
struct UPartyFinderListItem_New_C_ReEnableSTWInvite_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.BndEvt__DisplayFriendsButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
struct UPartyFinderListItem_New_C_BndEvt__DisplayFriendsButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.ExecuteUbergraph_PartyFinderListItem_New
struct UPartyFinderListItem_New_C_ExecuteUbergraph_PartyFinderListItem_New_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.RequestClosePartyFinder__DelegateSignature
struct UPartyFinderListItem_New_C_RequestClosePartyFinder__DelegateSignature_Params
{
};

// Function PartyFinderListItem_New.PartyFinderListItem_New_C.InviteJoinChanged__DelegateSignature
struct UPartyFinderListItem_New_C_InviteJoinChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
