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

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.IsWidgetLocationVisible
struct UAthenaBroadcastMapPanel_C_IsWidgetLocationVisible_Params
{
	struct FVector2D                                   WidgetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.GetScreenToMapWidgetLocation
struct UAthenaBroadcastMapPanel_C_GetScreenToMapWidgetLocation_Params
{
	struct FVector2D                                   ScreenLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   WidgetLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseButtonUp
struct UAthenaBroadcastMapPanel_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseButtonDown
struct UAthenaBroadcastMapPanel_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseMove
struct UAthenaBroadcastMapPanel_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseWheel
struct UAthenaBroadcastMapPanel_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.Construct
struct UAthenaBroadcastMapPanel_C_Construct_Params
{
};

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.BndEvt__ToggleScoreboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastMapPanel_C_BndEvt__ToggleScoreboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.ExecuteUbergraph_AthenaBroadcastMapPanel
struct UAthenaBroadcastMapPanel_C_ExecuteUbergraph_AthenaBroadcastMapPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
