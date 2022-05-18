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

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Mcp Relative Utc Now
struct UBP_FortExpeditionReturnsWidget_C_Get_Mcp_Relative_Utc_Now_Params
{
	struct FDateTime                                   UtcNow;                                                   // (Parm, OutParm)
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Expedition Item Definition
struct UBP_FortExpeditionReturnsWidget_C_Get_Expedition_Item_Definition_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortExpeditionItemDefinition*               ItemDef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Progress
struct UBP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Progress_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Time
struct UBP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Time_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Refresh In Progress Widgets
struct UBP_FortExpeditionReturnsWidget_C_Refresh_In_Progress_Widgets_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionInProgressUpdated
struct UBP_FortExpeditionReturnsWidget_C_OnExpeditionInProgressUpdated_Params
{
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Construct
struct UBP_FortExpeditionReturnsWidget_C_Construct_Params
{
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.SetData
struct UBP_FortExpeditionReturnsWidget_C_SetData_Params
{
	class UFortExpeditionItem**                        InItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.PreConstruct
struct UBP_FortExpeditionReturnsWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.ExecuteUbergraph_BP_FortExpeditionReturnsWidget
struct UBP_FortExpeditionReturnsWidget_C_ExecuteUbergraph_BP_FortExpeditionReturnsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionCompleted__DelegateSignature
struct UBP_FortExpeditionReturnsWidget_C_OnExpeditionCompleted__DelegateSignature_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
