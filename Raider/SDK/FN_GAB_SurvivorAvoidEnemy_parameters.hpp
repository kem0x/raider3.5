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

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnMoveFinished_6FCA0F06404AB0DEE9586D8157793BFD
struct UGAB_SurvivorAvoidEnemy_C_OnMoveFinished_6FCA0F06404AB0DEE9586D8157793BFD_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnRequestFailed_6FCA0F06404AB0DEE9586D8157793BFD
struct UGAB_SurvivorAvoidEnemy_C_OnRequestFailed_6FCA0F06404AB0DEE9586D8157793BFD_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnCancelled_6FCA0F06404AB0DEE9586D8157793BFD
struct UGAB_SurvivorAvoidEnemy_C_OnCancelled_6FCA0F06404AB0DEE9586D8157793BFD_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnInterrupted_6FCA0F06404AB0DEE9586D8157793BFD
struct UGAB_SurvivorAvoidEnemy_C_OnInterrupted_6FCA0F06404AB0DEE9586D8157793BFD_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnComplete_6FCA0F06404AB0DEE9586D8157793BFD
struct UGAB_SurvivorAvoidEnemy_C_OnComplete_6FCA0F06404AB0DEE9586D8157793BFD_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.Completed_F461FD4E44811E3F3E4AFD81EB1A0127
struct UGAB_SurvivorAvoidEnemy_C_Completed_F461FD4E44811E3F3E4AFD81EB1A0127_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.Cancelled_F461FD4E44811E3F3E4AFD81EB1A0127
struct UGAB_SurvivorAvoidEnemy_C_Cancelled_F461FD4E44811E3F3E4AFD81EB1A0127_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.Triggered_F461FD4E44811E3F3E4AFD81EB1A0127
struct UGAB_SurvivorAvoidEnemy_C_Triggered_F461FD4E44811E3F3E4AFD81EB1A0127_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.K2_ActivateAbility
struct UGAB_SurvivorAvoidEnemy_C_K2_ActivateAbility_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.StartAvoidMove
struct UGAB_SurvivorAvoidEnemy_C_StartAvoidMove_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.TriggerHelpSpeech
struct UGAB_SurvivorAvoidEnemy_C_TriggerHelpSpeech_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.TriggerOverwhelmedSpeech
struct UGAB_SurvivorAvoidEnemy_C_TriggerOverwhelmedSpeech_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.UpdateFocalPoint
struct UGAB_SurvivorAvoidEnemy_C_UpdateFocalPoint_Params
{
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.OnQueryFinished
struct UGAB_SurvivorAvoidEnemy_C_OnQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.K2_OnEndAbility
struct UGAB_SurvivorAvoidEnemy_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C.ExecuteUbergraph_GAB_SurvivorAvoidEnemy
struct UGAB_SurvivorAvoidEnemy_C_ExecuteUbergraph_GAB_SurvivorAvoidEnemy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
