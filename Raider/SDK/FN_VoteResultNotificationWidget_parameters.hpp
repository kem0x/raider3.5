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

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.SetToast
struct UVoteResultNotificationWidget_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Initialize
struct UVoteResultNotificationWidget_C_Initialize_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VoteResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ToastFinished
struct UVoteResultNotificationWidget_C_ToastFinished_Params
{
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ExecuteUbergraph_VoteResultNotificationWidget
struct UVoteResultNotificationWidget_C_ExecuteUbergraph_VoteResultNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnToastFinished__DelegateSignature
struct UVoteResultNotificationWidget_C_OnToastFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
