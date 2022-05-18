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

// Function FortReplayNotification.FortReplayNotification_C.GetVisibilityText
struct UFortReplayNotification_C_GetVisibilityText_Params
{
	EHudVisibilityState                                Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function FortReplayNotification.FortReplayNotification_C.IsVisibilityNotification
struct UFortReplayNotification_C_IsVisibilityNotification_Params
{
	struct FText                                       Notification;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsVisibilityNotification;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayNotification.FortReplayNotification_C.SetNotificationVisibility
struct UFortReplayNotification_C_SetNotificationVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayNotification.FortReplayNotification_C.TickRemainingTime
struct UFortReplayNotification_C_TickRemainingTime_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayNotification.FortReplayNotification_C.StartFading
struct UFortReplayNotification_C_StartFading_Params
{
};

// Function FortReplayNotification.FortReplayNotification_C.TickFade
struct UFortReplayNotification_C_TickFade_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayNotification.FortReplayNotification_C.ShowNotification
struct UFortReplayNotification_C_ShowNotification_Params
{
	struct FText                                       NotificationText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FortReplayNotification.FortReplayNotification_C.Tick
struct UFortReplayNotification_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayNotification.FortReplayNotification_C.Construct
struct UFortReplayNotification_C_Construct_Params
{
};

// Function FortReplayNotification.FortReplayNotification_C.ExecuteUbergraph_FortReplayNotification
struct UFortReplayNotification_C_ExecuteUbergraph_FortReplayNotification_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
