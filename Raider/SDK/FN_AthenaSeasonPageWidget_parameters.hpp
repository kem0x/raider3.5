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

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.UpdateDynamicData
struct UAthenaSeasonPageWidget_C_UpdateDynamicData_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.GetFirstLevel
struct UAthenaSeasonPageWidget_C_GetFirstLevel_Params
{
	int                                                FirstLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddFreeRewards
struct UAthenaSeasonPageWidget_C_AddFreeRewards_Params
{
	int                                                InColumn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortSeasonPassLevelInfo*                    LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaSeasonLevelFreeRewardsWidget_C*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddPaidRewards
struct UAthenaSeasonPageWidget_C_AddPaidRewards_Params
{
	int                                                InColumn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortSeasonPassLevelInfo*                    LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaSeasonLevelPaidRewardsWidget_C*       OutputPin;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PagePopulationComplete
struct UAthenaSeasonPageWidget_C_PagePopulationComplete_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ContainsLevel
struct UAthenaSeasonPageWidget_C_ContainsLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.IsFull
struct UAthenaSeasonPageWidget_C_IsFull_Params
{
	bool                                               Full;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddLevelWidgets
struct UAthenaSeasonPageWidget_C_AddLevelWidgets_Params
{
	class UFortSeasonPassLevelInfo*                    LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USeasonPassLevelWidget*>              LevelWidgets;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Construct
struct UAthenaSeasonPageWidget_C_Construct_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Destruct
struct UAthenaSeasonPageWidget_C_Destruct_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageRight
struct UAthenaSeasonPageWidget_C_NavigatePageRight_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageLeft
struct UAthenaSeasonPageWidget_C_NavigatePageLeft_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.OnBattlePassChanged
struct UAthenaSeasonPageWidget_C_OnBattlePassChanged_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ScreenShown
struct UAthenaSeasonPageWidget_C_ScreenShown_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ExecuteUbergraph_AthenaSeasonPageWidget
struct UAthenaSeasonPageWidget_C_ExecuteUbergraph_AthenaSeasonPageWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageRight__DelegateSignature
struct UAthenaSeasonPageWidget_C_PageRight__DelegateSignature_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageLeft__DelegateSignature
struct UAthenaSeasonPageWidget_C_PageLeft__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
