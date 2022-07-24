#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FriendLinkButton.FriendLinkButton_C.Construct
struct UFriendLinkButton_C_Construct_Params
{
};

// Function FriendLinkButton.FriendLinkButton_C.BP_OnClicked
struct UFriendLinkButton_C_BP_OnClicked_Params
{
};

// Function FriendLinkButton.FriendLinkButton_C.PreConstruct
struct UFriendLinkButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendLinkButton.FriendLinkButton_C.ExecuteUbergraph_FriendLinkButton
struct UFriendLinkButton_C_ExecuteUbergraph_FriendLinkButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
