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

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateLevel
struct UAthenaPlayerLevel_C_UpdateLevel_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateXp
struct UAthenaPlayerLevel_C_UpdateXp_Params
{
	int                                                LevelXp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelXpForLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.IsReadyForNextXpReward
struct UAthenaPlayerLevel_C_IsReadyForNextXpReward_Params
{
	bool                                               Ready;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromLevelInfo
struct UAthenaPlayerLevel_C_InitializeFromLevelInfo_Params
{
	struct FAthenaLevelInfo                            LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromAccount
struct UAthenaPlayerLevel_C_InitializeFromAccount_Params
{
	struct FFortPublicAccountInfo                      FortPublicAccountInfo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play Xp Reward
struct UAthenaPlayerLevel_C_Play_Xp_Reward_Params
{
	struct FAthenaMatchXpReward                        Reward;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Tick
struct UAthenaPlayerLevel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UAthenaPlayerLevel_C_BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UAthenaPlayerLevel_C_BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play XP Reward Directly
struct UAthenaPlayerLevel_C_Play_XP_Reward_Directly_Params
{
	int                                                XpToAdd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.EventTrack_Leveled
struct UAthenaPlayerLevel_C_EventTrack_Leveled_Params
{
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Destruct
struct UAthenaPlayerLevel_C_Destruct_Params
{
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.PreConstruct
struct UAthenaPlayerLevel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.ExecuteUbergraph_AthenaPlayerLevel
struct UAthenaPlayerLevel_C_ExecuteUbergraph_AthenaPlayerLevel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.LevelChanged__DelegateSignature
struct UAthenaPlayerLevel_C_LevelChanged__DelegateSignature_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
