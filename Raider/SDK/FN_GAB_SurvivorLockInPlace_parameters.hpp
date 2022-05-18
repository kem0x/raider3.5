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

// Function GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C.K2_ActivateAbilityFromEvent
struct UGAB_SurvivorLockInPlace_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C.ExecuteUbergraph_GAB_SurvivorLockInPlace
struct UGAB_SurvivorLockInPlace_C_ExecuteUbergraph_GAB_SurvivorLockInPlace_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
