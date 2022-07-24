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

// Function InZoneTitleBar.InZoneTitleBar_C.On_TouchZone_MouseButtonDown_1
struct UInZoneTitleBar_C_On_TouchZone_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InZoneTitleBar.InZoneTitleBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UInZoneTitleBar_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InZoneTitleBar.InZoneTitleBar_C.ExecuteUbergraph_InZoneTitleBar
struct UInZoneTitleBar_C_ExecuteUbergraph_InZoneTitleBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
