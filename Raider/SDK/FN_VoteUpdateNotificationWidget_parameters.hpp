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

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateTimer
struct UVoteUpdateNotificationWidget_C_UpdateTimer_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteCounts
struct UVoteUpdateNotificationWidget_C_UpdateVoteCounts_Params
{
	TArray<struct FVoter>                              Voters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.HandleVoteUpdated
struct UVoteUpdateNotificationWidget_C_HandleVoteUpdated_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteStatus                                    VoteStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                VoteResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVoter>                              Voters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetToast
struct UVoteUpdateNotificationWidget_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Destruct
struct UVoteUpdateNotificationWidget_C_Destruct_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ToastFinished
struct UVoteUpdateNotificationWidget_C_ToastFinished_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Cleanup
struct UVoteUpdateNotificationWidget_C_Cleanup_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ExecuteUbergraph_VoteUpdateNotificationWidget
struct UVoteUpdateNotificationWidget_C_ExecuteUbergraph_VoteUpdateNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnToastFinished__DelegateSignature
struct UVoteUpdateNotificationWidget_C_OnToastFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
