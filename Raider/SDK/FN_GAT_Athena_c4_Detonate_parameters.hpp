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

// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.OnRep_NumberOfBombsOut
struct UGAT_Athena_c4_Detonate_C_OnRep_NumberOfBombsOut_Params
{
};

// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635
struct UGAT_Athena_c4_Detonate_C_Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635
struct UGAT_Athena_c4_Detonate_C_Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635
struct UGAT_Athena_c4_Detonate_C_Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.K2_ActivateAbility
struct UGAT_Athena_c4_Detonate_C_K2_ActivateAbility_Params
{
};

// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.ExecuteUbergraph_GAT_Athena_c4_Detonate
struct UGAT_Athena_c4_Detonate_C_ExecuteUbergraph_GAT_Athena_c4_Detonate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
