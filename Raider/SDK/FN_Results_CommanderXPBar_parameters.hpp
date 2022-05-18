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

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.DebugSections
struct UResults_CommanderXPBar_C_DebugSections_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.GetHoveredProgressBarSection
struct UResults_CommanderXPBar_C_GetHoveredProgressBarSection_Params
{
	struct FName                                       XpSectionName;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateProgressBarPercent
struct UResults_CommanderXPBar_C_UpdateProgressBarPercent_Params
{
	struct FName                                       ParameterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProgressBarPercent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.RandomizeDesignView
struct UResults_CommanderXPBar_C_RandomizeDesignView_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.updateXpType
struct UResults_CommanderXPBar_C_updateXpType_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.clearXpBar
struct UResults_CommanderXPBar_C_clearXpBar_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.PlayAnimationCommon
struct UResults_CommanderXPBar_C_PlayAnimationCommon_Params
{
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.SkipToFinalState
struct UResults_CommanderXPBar_C_SkipToFinalState_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.SetSkippingToEnd
struct UResults_CommanderXPBar_C_SetSkippingToEnd_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Initialize
struct UResults_CommanderXPBar_C_Initialize_Params
{
	class UFortUIScoreReport*                          InScoreReport;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateCount
struct UResults_CommanderXPBar_C_UpdateCount_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Intro Sequence
struct UResults_CommanderXPBar_C_Intro_Sequence_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Count Sequence
struct UResults_CommanderXPBar_C_Count_Sequence_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXPBar_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.On Count Finished
struct UResults_CommanderXPBar_C_On_Count_Finished_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.PreConstruct
struct UResults_CommanderXPBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Construct
struct UResults_CommanderXPBar_C_Construct_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.ExecuteUbergraph_Results_CommanderXPBar
struct UResults_CommanderXPBar_C_ExecuteUbergraph_Results_CommanderXPBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountIncrement__DelegateSignature
struct UResults_CommanderXPBar_C_CountIncrement__DelegateSignature_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.IntroFinished__DelegateSignature
struct UResults_CommanderXPBar_C_IntroFinished__DelegateSignature_Params
{
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.LeveledUp__DelegateSignature
struct UResults_CommanderXPBar_C_LeveledUp__DelegateSignature_Params
{
	int                                                NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountFinished__DelegateSignature
struct UResults_CommanderXPBar_C_CountFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
