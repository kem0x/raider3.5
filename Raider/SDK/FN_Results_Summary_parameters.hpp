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

// Function Results_Summary.Results_Summary_C.Focus
struct UResults_Summary_C_Focus_Params
{
};

// Function Results_Summary.Results_Summary_C.InitializeRewards
struct UResults_Summary_C_InitializeRewards_Params
{
	TArray<class UFortItem*>                           Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InTotalMissionPoints;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.DoDesignTimeRandomization
struct UResults_Summary_C_DoDesignTimeRandomization_Params
{
};

// Function Results_Summary.Results_Summary_C.Initialize
struct UResults_Summary_C_Initialize_Params
{
	class UFortUIScoreReport*                          InScoreReport;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           InRewardItems;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InTotalMissionPoints;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.InitializeLootChest
struct UResults_Summary_C_InitializeLootChest_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.PreConstruct
struct UResults_Summary_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
struct UResults_Summary_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.ExecuteUbergraph_Results_Summary
struct UResults_Summary_C_ExecuteUbergraph_Results_Summary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_Summary.Results_Summary_C.OnReturnClicked__DelegateSignature
struct UResults_Summary_C_OnReturnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
