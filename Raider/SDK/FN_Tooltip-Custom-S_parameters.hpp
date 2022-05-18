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

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush
struct UTooltip_Custom_S_C_Get_Icon_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text
struct UTooltip_Custom_S_C_Get_Header_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text
struct UTooltip_Custom_S_C_Get_Body_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Construct
struct UTooltip_Custom_S_C_Construct_Params
{
};

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S
struct UTooltip_Custom_S_C_ExecuteUbergraph_Tooltip_Custom_S_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
