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

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.On_BorderTouchZone_MouseButtonDown
struct UAthenaMatchStatsScreen_C_On_BorderTouchZone_MouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputRefresh
struct UAthenaMatchStatsScreen_C_InputRefresh_Params
{
};

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputSetup
struct UAthenaMatchStatsScreen_C_InputSetup_Params
{
};

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.HandleBack
struct UAthenaMatchStatsScreen_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.RegisterBack
struct UAthenaMatchStatsScreen_C_RegisterBack_Params
{
};

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.OnActivated
struct UAthenaMatchStatsScreen_C_OnActivated_Params
{
};

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.Construct
struct UAthenaMatchStatsScreen_C_Construct_Params
{
};

// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.ExecuteUbergraph_AthenaMatchStatsScreen
struct UAthenaMatchStatsScreen_C_ExecuteUbergraph_AthenaMatchStatsScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
