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

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCancelled_30185FB0432AA030CE779FBAA5AE1A56
struct UGAB_SurvivorDBNO_C_OnCancelled_30185FB0432AA030CE779FBAA5AE1A56_Params
{
};

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56
struct UGAB_SurvivorDBNO_C_OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56_Params
{
};

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56
struct UGAB_SurvivorDBNO_C_OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56_Params
{
};

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCompleted_30185FB0432AA030CE779FBAA5AE1A56
struct UGAB_SurvivorDBNO_C_OnCompleted_30185FB0432AA030CE779FBAA5AE1A56_Params
{
};

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_OnEndAbility
struct UGAB_SurvivorDBNO_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_ActivateAbilityFromEvent
struct UGAB_SurvivorDBNO_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.PlayDownedSpeech
struct UGAB_SurvivorDBNO_C_PlayDownedSpeech_Params
{
};

// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.ExecuteUbergraph_GAB_SurvivorDBNO
struct UGAB_SurvivorDBNO_C_ExecuteUbergraph_GAB_SurvivorDBNO_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
