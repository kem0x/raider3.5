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

// Function InvitePopupMenu.InvitePopupMenu_C.GetNetId
struct UInvitePopupMenu_C_GetNetId_Params
{
	struct FUniqueNetIdRepl                            NetId;                                                    // (Parm, OutParm)
	bool                                               bIsConsoleUniqueId;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InvitePopupMenu.InvitePopupMenu_C.InitializeValues
struct UInvitePopupMenu_C_InitializeValues_Params
{
	struct FUniqueNetIdRepl                            InUniqueNetId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FUniqueNetIdRepl                            InConsoleNetId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InPlayerName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerToParty
struct UInvitePopupMenu_C_InvitePlayerToParty_Params
{
};

// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerAsFriend
struct UInvitePopupMenu_C_InvitePlayerAsFriend_Params
{
};

// Function InvitePopupMenu.InvitePopupMenu_C.CanAddAsFriend
struct UInvitePopupMenu_C_CanAddAsFriend_Params
{
	bool                                               bCanFriendPlayer;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InvitePopupMenu.InvitePopupMenu_C.CanInviteToParty
struct UInvitePopupMenu_C_CanInviteToParty_Params
{
	bool                                               CanInviteToParty;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
struct UInvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature
struct UInvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature
struct UInvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InvitePopupMenu.InvitePopupMenu_C.OnActivated
struct UInvitePopupMenu_C_OnActivated_Params
{
};

// Function InvitePopupMenu.InvitePopupMenu_C.ExecuteUbergraph_InvitePopupMenu
struct UInvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
