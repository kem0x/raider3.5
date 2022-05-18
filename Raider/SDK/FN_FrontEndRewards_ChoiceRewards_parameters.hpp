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

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleResizeFinished
struct UFrontEndRewards_ChoiceRewards_C_HandleResizeFinished_Params
{
	class URewards_ItemCard_C*                         Card;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AddInputActions
struct UFrontEndRewards_ChoiceRewards_C_AddInputActions_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleInspectAction
struct UFrontEndRewards_ChoiceRewards_C_HandleInspectAction_Params
{
	bool                                               Committed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleTransitionInComplete
struct UFrontEndRewards_ChoiceRewards_C_HandleTransitionInComplete_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Reset
struct UFrontEndRewards_ChoiceRewards_C_Reset_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PopulateFromCardList
struct UFrontEndRewards_ChoiceRewards_C_PopulateFromCardList_Params
{
	TArray<class URewards_ItemCard_C*>                 Cards;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HideConfirmation
struct UFrontEndRewards_ChoiceRewards_C_HideConfirmation_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ShowConfirmation
struct UFrontEndRewards_ChoiceRewards_C_ShowConfirmation_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ConfirmChoice
struct UFrontEndRewards_ChoiceRewards_C_ConfirmChoice_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCanvasSize
struct UFrontEndRewards_ChoiceRewards_C_SetCanvasSize_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetSelectedItemDescription
struct UFrontEndRewards_ChoiceRewards_C_SetSelectedItemDescription_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleCardClicked
struct UFrontEndRewards_ChoiceRewards_C_HandleCardClicked_Params
{
	class URewards_ItemCard_C*                         ItemCard;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectPreviousCard
struct UFrontEndRewards_ChoiceRewards_C_SelectPreviousCard_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectNextCard
struct UFrontEndRewards_ChoiceRewards_C_SelectNextCard_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectCard
struct UFrontEndRewards_ChoiceRewards_C_SelectCard_Params
{
	int                                                NewSelection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCardSelected
struct UFrontEndRewards_ChoiceRewards_C_SetCardSelected_Params
{
	class URewards_ItemCard_C*                         Card;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.InitDesignView
struct UFrontEndRewards_ChoiceRewards_C_InitDesignView_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AdjustCardPositions
struct UFrontEndRewards_ChoiceRewards_C_AdjustCardPositions_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PreConstruct
struct UFrontEndRewards_ChoiceRewards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
struct UFrontEndRewards_ChoiceRewards_C_BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct UFrontEndRewards_ChoiceRewards_C_BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionInBegin
struct UFrontEndRewards_ChoiceRewards_C_TransitionInBegin_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionOutBegin
struct UFrontEndRewards_ChoiceRewards_C_TransitionOutBegin_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Construct
struct UFrontEndRewards_ChoiceRewards_C_Construct_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationLeft
struct UFrontEndRewards_ChoiceRewards_C_OnNavigationLeft_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationRight
struct UFrontEndRewards_ChoiceRewards_C_OnNavigationRight_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnActivated
struct UFrontEndRewards_ChoiceRewards_C_OnActivated_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnDeactivated
struct UFrontEndRewards_ChoiceRewards_C_OnDeactivated_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_0_1
struct UFrontEndRewards_ChoiceRewards_C_CustomEvent_0_1_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_1_2
struct UFrontEndRewards_ChoiceRewards_C_CustomEvent_1_2_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnPrimaryAction
struct UFrontEndRewards_ChoiceRewards_C_OnPrimaryAction_Params
{
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ExecuteUbergraph_FrontEndRewards_ChoiceRewards
struct UFrontEndRewards_ChoiceRewards_C_ExecuteUbergraph_FrontEndRewards_ChoiceRewards_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnRewardSelected__DelegateSignature
struct UFrontEndRewards_ChoiceRewards_C_OnRewardSelected__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
