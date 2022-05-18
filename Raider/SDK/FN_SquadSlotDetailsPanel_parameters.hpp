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

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Set Scroll Box to Nav Scroll Widget
struct USquadSlotDetailsPanel_C_Set_Scroll_Box_to_Nav_Scroll_Widget_Params
{
};

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.GetRestrictionReasonsAsText
struct USquadSlotDetailsPanel_C_GetRestrictionReasonsAsText_Params
{
	TArray<EFortSquadSlottingRestrictionReason>        Reasons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.UpdateSkillTreeButtonVisibility
struct USquadSlotDetailsPanel_C_UpdateSkillTreeButtonVisibility_Params
{
};

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleDifferentSquadSlotSetBP
struct USquadSlotDetailsPanel_C_HandleDifferentSquadSlotSetBP_Params
{
};

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotStateChangedBP
struct USquadSlotDetailsPanel_C_HandleSquadSlotStateChangedBP_Params
{
};

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
struct USquadSlotDetailsPanel_C_BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Construct
struct USquadSlotDetailsPanel_C_Construct_Params
{
};

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotRestrictionFactorsChangedBP
struct USquadSlotDetailsPanel_C_HandleSquadSlotRestrictionFactorsChangedBP_Params
{
};

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ExecuteUbergraph_SquadSlotDetailsPanel
struct USquadSlotDetailsPanel_C_ExecuteUbergraph_SquadSlotDetailsPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
