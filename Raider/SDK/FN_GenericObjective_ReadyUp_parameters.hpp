#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.GetObjectiveBulletIcon
struct AGenericObjective_ReadyUp_C_GetObjectiveBulletIcon_Params
{
	struct FSlateBrush                                 BulletIcon;                                               // (Parm, OutParm)
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.OnRep_ObjectiveText
struct AGenericObjective_ReadyUp_C_OnRep_ObjectiveText_Params
{
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.BlueprintGetObjectiveDisplayText
struct AGenericObjective_ReadyUp_C_BlueprintGetObjectiveDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.OnRep_DifficultyLevel
struct AGenericObjective_ReadyUp_C_OnRep_DifficultyLevel_Params
{
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.SetDifficultyIncreaseRewardTier
struct AGenericObjective_ReadyUp_C_SetDifficultyIncreaseRewardTier_Params
{
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ApplyGameDifficultyIncrease
struct AGenericObjective_ReadyUp_C_ApplyGameDifficultyIncrease_Params
{
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ApplyDifficultyBoostGameplayModifierItem
struct AGenericObjective_ReadyUp_C_ApplyDifficultyBoostGameplayModifierItem_Params
{
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.UserConstructionScript
struct AGenericObjective_ReadyUp_C_UserConstructionScript_Params
{
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_StartObjective
struct AGenericObjective_ReadyUp_C_HandleMissionEvent_StartObjective_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_MissionSucceeded
struct AGenericObjective_ReadyUp_C_HandleMissionEvent_MissionSucceeded_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_IncreaseDifficulty
struct AGenericObjective_ReadyUp_C_HandleMissionEvent_IncreaseDifficulty_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ExecuteUbergraph_GenericObjective_ReadyUp
struct AGenericObjective_ReadyUp_C_ExecuteUbergraph_GenericObjective_ReadyUp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
