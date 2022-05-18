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

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Pre Select for Console
struct UBP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console_Params
{
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Determine Available Expedition Squads
struct UBP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads_Params
{
	struct FGameplayTagContainer                       RequirementTags;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Get Expedition Item Definition
struct UBP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition_Params
{
	class UFortItem*                                   ItemDef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortExpeditionItemDefinition*               AsFort_Expedition_Item_Definition;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Setup Input Action Handlers
struct UBP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers_Params
{
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleBack
struct UBP_FortExpeditionPickVehicleWidget_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Construct
struct UBP_FortExpeditionPickVehicleWidget_C_Construct_Params
{
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.SetData
struct UBP_FortExpeditionPickVehicleWidget_C_SetData_Params
{
	class UFortExpeditionItem**                        InItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnActivated
struct UBP_FortExpeditionPickVehicleWidget_C_OnActivated_Params
{
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature
struct UBP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleSelected
struct UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected_Params
{
	struct FName                                       SquadId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HACK_GetMeOutOfSelectContext
struct UBP_FortExpeditionPickVehicleWidget_C_HACK_GetMeOutOfSelectContext_Params
{
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleButtonHovered
struct UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehcileButtonUnhovered
struct UBP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget
struct UBP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnVehicleSelected__DelegateSignature
struct UBP_FortExpeditionPickVehicleWidget_C_OnVehicleSelected__DelegateSignature_Params
{
	struct FName                                       SquadId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
