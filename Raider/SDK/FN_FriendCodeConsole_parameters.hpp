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

// Function FriendCodeConsole.FriendCodeConsole_C.Construct
struct UFriendCodeConsole_C_Construct_Params
{
};

// Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete
struct UFriendCodeConsole_C_OnSendFriendCodeMessageComplete_Params
{
	bool                                               bMessageSent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendCodeConsole.FriendCodeConsole_C.OnClicked
struct UFriendCodeConsole_C_OnClicked_Params
{
};

// Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole
struct UFriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
