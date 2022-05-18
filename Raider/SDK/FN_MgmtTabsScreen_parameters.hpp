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

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested
struct UMgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested_Params
{
	struct FName                                       TabName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived
struct UMgmtTabsScreen_C_HandleDamageReceived_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged
struct UMgmtTabsScreen_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated
struct UMgmtTabsScreen_C_OnActivated_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
struct UMgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.Construct
struct UMgmtTabsScreen_C_Construct_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct
struct UMgmtTabsScreen_C_Destruct_Params
{
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests
struct UMgmtTabsScreen_C_HandleShowQuests_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureStateReason                          StateReason;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives
struct UMgmtTabsScreen_C_HandleShowObjectives_Params
{
	EFortUIFeature                                     ChangedFeature;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureStateReason                          StateReason;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen
struct UMgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
