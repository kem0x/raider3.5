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

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible
struct UAthenaBroadcastScoreboard_C_IsMapWidgetLocationVisible_Params
{
	struct FVector2D*                                  MapWidgetLocation;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetSortButtons
struct UAthenaBroadcastScoreboard_C_ResetSortButtons_Params
{
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetSortArrows
struct UAthenaBroadcastScoreboard_C_ResetSortArrows_Params
{
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI
struct UAthenaBroadcastScoreboard_C_UpdateListUI_Params
{
	bool*                                              bResetFocus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus
struct UAthenaBroadcastScoreboard_C_ResetFocus_Params
{
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastScoreboard_C_BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastScoreboard_C_BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastScoreboard_C_BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastScoreboard_C_BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct
struct UAthenaBroadcastScoreboard_C_Construct_Params
{
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard
struct UAthenaBroadcastScoreboard_C_ExecuteUbergraph_AthenaBroadcastScoreboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
