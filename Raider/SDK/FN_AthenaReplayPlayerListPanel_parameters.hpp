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

// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnShowPlayerProfileInput
struct UAthenaReplayPlayerListPanel_C_OnShowPlayerProfileInput_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UAthenaReplayPlayerListPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnActivated
struct UAthenaReplayPlayerListPanel_C_OnActivated_Params
{
};

// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnInputModeChanged
struct UAthenaReplayPlayerListPanel_C_OnInputModeChanged_Params
{
	bool*                                              bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.Construct
struct UAthenaReplayPlayerListPanel_C_Construct_Params
{
};

// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.ExecuteUbergraph_AthenaReplayPlayerListPanel
struct UAthenaReplayPlayerListPanel_C_ExecuteUbergraph_AthenaReplayPlayerListPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
