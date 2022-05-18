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

// Function FriendNotification.FriendNotification_C.ShowFriendInvites
struct UFriendNotification_C_ShowFriendInvites_Params
{
};

// Function FriendNotification.FriendNotification_C.ShowPartyInvites
struct UFriendNotification_C_ShowPartyInvites_Params
{
};

// Function FriendNotification.FriendNotification_C.TakeAction
struct UFriendNotification_C_TakeAction_Params
{
};

// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
struct UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
