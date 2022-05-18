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

// Function XpMatchProgression.XpMatchProgression_C.UpdateRewardForLevel
struct UXpMatchProgression_C_UpdateRewardForLevel_Params
{
	int                                                SeasonLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpMatchProgression.XpMatchProgression_C.IsReadyForNextXpEvent
struct UXpMatchProgression_C_IsReadyForNextXpEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XpMatchProgression.XpMatchProgression_C.TickRewardAnimation
struct UXpMatchProgression_C_TickRewardAnimation_Params
{
};

// Function XpMatchProgression.XpMatchProgression_C.SetPlayerState
struct UXpMatchProgression_C_SetPlayerState_Params
{
	class AFortPlayerControllerAthena*                 PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAthenaLevelInfo                            AthenaLevelInfo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function XpMatchProgression.XpMatchProgression_C.Play Xp Rewards
struct UXpMatchProgression_C_Play_Xp_Rewards_Params
{
	class UAthenaPlayerMatchReport*                    Report;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpMatchProgression.XpMatchProgression_C.Tick
struct UXpMatchProgression_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpMatchProgression.XpMatchProgression_C.Finished Playing Animation
struct UXpMatchProgression_C_Finished_Playing_Animation_Params
{
};

// Function XpMatchProgression.XpMatchProgression_C.Destruct
struct UXpMatchProgression_C_Destruct_Params
{
};

// Function XpMatchProgression.XpMatchProgression_C.BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature
struct UXpMatchProgression_C_BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpMatchProgression.XpMatchProgression_C.ExecuteUbergraph_XpMatchProgression
struct UXpMatchProgression_C_ExecuteUbergraph_XpMatchProgression_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
