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

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateJetpackFuelGaugeVisiblity
struct UAthenaQuickBarSlot_C_UpdateJetpackFuelGaugeVisiblity_Params
{
};

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ShowJetpackFuelGauge
struct UAthenaQuickBarSlot_C_ShowJetpackFuelGauge_Params
{
};

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.HideJetpackFuelGauge
struct UAthenaQuickBarSlot_C_HideJetpackFuelGauge_Params
{
};

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnTouchStarted
struct UAthenaQuickBarSlot_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnRefreshItem
struct UAthenaQuickBarSlot_C_OnRefreshItem_Params
{
};

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot
struct UAthenaQuickBarSlot_C_ExecuteUbergraph_AthenaQuickBarSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
