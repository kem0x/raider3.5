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

// Function StatsListWidget.StatsListWidget_C.Trigger Initial Reset
struct UStatsListWidget_C_Trigger_Initial_Reset_Params
{
};

// Function StatsListWidget.StatsListWidget_C.Trigger Update Anim
struct UStatsListWidget_C_Trigger_Update_Anim_Params
{
};

// Function StatsListWidget.StatsListWidget_C.Update
struct UStatsListWidget_C_Update_Params
{
};

// Function StatsListWidget.StatsListWidget_C.AdjustClampCount
struct UStatsListWidget_C_AdjustClampCount_Params
{
	class UFortAttributeListItem_NUI*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage
struct UStatsListWidget_C_ToggleClampedValueMessage_Params
{
	bool                                               inShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes
struct UStatsListWidget_C_OnClearShownAttributes_Params
{
};

// Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem
struct UStatsListWidget_C_OnAddShownAttributeListItem_Params
{
	class UFortAttributeListItem_NUI**                 AttributeListItemWidget;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem
struct UStatsListWidget_C_OnRemoveShownAttributeListItem_Params
{
	class UFortAttributeListItem_NUI**                 AttributeListItemWidget;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               AtIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget
struct UStatsListWidget_C_ExecuteUbergraph_StatsListWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
