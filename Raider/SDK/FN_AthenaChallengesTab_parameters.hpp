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

// Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle
struct UAthenaChallengesTab_C_SelectFirstBundle_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory
struct UAthenaChallengesTab_C_TreeViewGetChildrenForCategory_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData
struct UAthenaChallengesTab_C_SetupViewedItemData_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews
struct UAthenaChallengesTab_C_UpdateChallengeViews_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged
struct UAthenaChallengesTab_C_HandleChallengesChanged_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.Construct
struct UAthenaChallengesTab_C_Construct_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated
struct UAthenaChallengesTab_C_OnActivated_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated
struct UAthenaChallengesTab_C_OnDeactivated_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature
struct UAthenaChallengesTab_C_BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged
struct UAthenaChallengesTab_C_OnChallengesChanged_Params
{
};

// Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab
struct UAthenaChallengesTab_C_ExecuteUbergraph_AthenaChallengesTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
