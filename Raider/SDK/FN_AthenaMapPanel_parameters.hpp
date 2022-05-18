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

// Function AthenaMapPanel.AthenaMapPanel_C.SetTriggerImages
struct UAthenaMapPanel_C_SetTriggerImages_Params
{
};

// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchEnded
struct UAthenaMapPanel_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchStarted
struct UAthenaMapPanel_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaMapPanel.AthenaMapPanel_C.Construct
struct UAthenaMapPanel_C_Construct_Params
{
};

// Function AthenaMapPanel.AthenaMapPanel_C.FlashPlayerIcon
struct UAthenaMapPanel_C_FlashPlayerIcon_Params
{
};

// Function AthenaMapPanel.AthenaMapPanel_C.ExecuteUbergraph_AthenaMapPanel
struct UAthenaMapPanel_C_ExecuteUbergraph_AthenaMapPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
