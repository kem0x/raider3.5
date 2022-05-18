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

// Function AthenaSpectatorMapPanel.AthenaSpectatorMapPanel_C.OnMouseWheel
struct UAthenaSpectatorMapPanel_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSpectatorMapPanel.AthenaSpectatorMapPanel_C.Construct
struct UAthenaSpectatorMapPanel_C_Construct_Params
{
};

// Function AthenaSpectatorMapPanel.AthenaSpectatorMapPanel_C.ExecuteUbergraph_AthenaSpectatorMapPanel
struct UAthenaSpectatorMapPanel_C_ExecuteUbergraph_AthenaSpectatorMapPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
