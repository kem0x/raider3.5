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

// Function FriendCodePC.FriendCodePC_C.GetCodeText
struct UFriendCodePC_C_GetCodeText_Params
{
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
struct UFriendCodePC_C_GetFriendCodeUrl_Params
{
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function FriendCodePC.FriendCodePC_C.Construct
struct UFriendCodePC_C_Construct_Params
{
};

// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
struct UFriendCodePC_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
struct UFriendCodePC_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FriendCodePC.FriendCodePC_C.OnClicked
struct UFriendCodePC_C_OnClicked_Params
{
};

// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
struct UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
