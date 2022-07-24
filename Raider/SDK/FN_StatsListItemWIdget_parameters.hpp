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

// Function StatsListItemWIdget.StatsListItemWIdget_C.Initial Reset
struct UStatsListItemWIdget_C_Initial_Reset_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.Populate-Update
struct UStatsListItemWIdget_C_Populate_Update_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.SetTextAndBorderHighlight
struct UStatsListItemWIdget_C_SetTextAndBorderHighlight_Params
{
	bool                                               bHightlight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget
struct UStatsListItemWIdget_C_GetListItemTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon
struct UStatsListItemWIdget_C_SetStatIcon_Params
{
	struct FSlateBrush                                 NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows
struct UStatsListItemWIdget_C_UpdateBuffArrows_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel
struct UStatsListItemWIdget_C_UpdateBasicPairLabel_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText
struct UStatsListItemWIdget_C_UpdateValueText_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType
struct UStatsListItemWIdget_C_UpdateType_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors
struct UStatsListItemWIdget_C_UpdateColors_Params
{
	struct FFortDisplayAttribute                       CurrentAttribute;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.Update
struct UStatsListItemWIdget_C_Update_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged
struct UStatsListItemWIdget_C_ValueChanged_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.Construct
struct UStatsListItemWIdget_C_Construct_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded
struct UStatsListItemWIdget_C_PreviewEnded_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted
struct UStatsListItemWIdget_C_PreviewStarted_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged
struct UStatsListItemWIdget_C_DisplayAttributeChanged_Params
{
};

// Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget
struct UStatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
