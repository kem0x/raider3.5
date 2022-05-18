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

// Function HelpPanel.HelpPanel_C.UnbindDelegates
struct UHelpPanel_C_UnbindDelegates_Params
{
};

// Function HelpPanel.HelpPanel_C.HelpTreeView_GetChildrenForCategory
struct UHelpPanel_C_HelpTreeView_GetChildrenForCategory_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HelpPanel.HelpPanel_C.UpdateDetails
struct UHelpPanel_C_UpdateDetails_Params
{
	class UFortHelpItem*                               SelectedHelpItem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpPanel.HelpPanel_C.HandleTopHelpListChanged
struct UHelpPanel_C_HandleTopHelpListChanged_Params
{
	TArray<class UFortHelpItem*>                       InHelpItems;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bExpandAll;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpPanel.HelpPanel_C.BindDelegates
struct UHelpPanel_C_BindDelegates_Params
{
};

// Function HelpPanel.HelpPanel_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
struct UHelpPanel_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HelpPanel.HelpPanel_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature
struct UHelpPanel_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpPanel.HelpPanel_C.OnActivated
struct UHelpPanel_C_OnActivated_Params
{
};

// Function HelpPanel.HelpPanel_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature
struct UHelpPanel_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HelpPanel.HelpPanel_C.Destruct
struct UHelpPanel_C_Destruct_Params
{
};

// Function HelpPanel.HelpPanel_C.Construct
struct UHelpPanel_C_Construct_Params
{
};

// Function HelpPanel.HelpPanel_C.OnContextHelpChanged
struct UHelpPanel_C_OnContextHelpChanged_Params
{
};

// Function HelpPanel.HelpPanel_C.ExecuteUbergraph_HelpPanel
struct UHelpPanel_C_ExecuteUbergraph_HelpPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
