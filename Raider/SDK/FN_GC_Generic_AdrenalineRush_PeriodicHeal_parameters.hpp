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

// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.HealthCheck
struct AGC_Generic_AdrenalineRush_PeriodicHeal_C_HealthCheck_Params
{
	bool                                               Check_Return;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.UserConstructionScript
struct AGC_Generic_AdrenalineRush_PeriodicHeal_C_UserConstructionScript_Params
{
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__FinishedFunc
struct AGC_Generic_AdrenalineRush_PeriodicHeal_C_Health_Sweep__FinishedFunc_Params
{
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__UpdateFunc
struct AGC_Generic_AdrenalineRush_PeriodicHeal_C_Health_Sweep__UpdateFunc_Params
{
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.K2_HandleGameplayCue
struct AGC_Generic_AdrenalineRush_PeriodicHeal_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal
struct AGC_Generic_AdrenalineRush_PeriodicHeal_C_ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
