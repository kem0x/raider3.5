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

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.OnFinish_46520BF64782D787A829259B1AEBC2F9
struct UGAB_SurvivorWander_C_OnFinish_46520BF64782D787A829259B1AEBC2F9_Params
{
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.OnMoveFinished_823C4D1641576DFB48835EA7477D7A9D
struct UGAB_SurvivorWander_C_OnMoveFinished_823C4D1641576DFB48835EA7477D7A9D_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.OnRequestFailed_823C4D1641576DFB48835EA7477D7A9D
struct UGAB_SurvivorWander_C_OnRequestFailed_823C4D1641576DFB48835EA7477D7A9D_Params
{
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.OnCancelled_823C4D1641576DFB48835EA7477D7A9D
struct UGAB_SurvivorWander_C_OnCancelled_823C4D1641576DFB48835EA7477D7A9D_Params
{
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.OnInterrupted_823C4D1641576DFB48835EA7477D7A9D
struct UGAB_SurvivorWander_C_OnInterrupted_823C4D1641576DFB48835EA7477D7A9D_Params
{
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.OnComplete_823C4D1641576DFB48835EA7477D7A9D
struct UGAB_SurvivorWander_C_OnComplete_823C4D1641576DFB48835EA7477D7A9D_Params
{
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.OnQueryFinished
struct UGAB_SurvivorWander_C_OnQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.K2_OnEndAbility
struct UGAB_SurvivorWander_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.K2_ActivateAbility
struct UGAB_SurvivorWander_C_K2_ActivateAbility_Params
{
};

// Function GAB_SurvivorWander.GAB_SurvivorWander_C.ExecuteUbergraph_GAB_SurvivorWander
struct UGAB_SurvivorWander_C_ExecuteUbergraph_GAB_SurvivorWander_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
