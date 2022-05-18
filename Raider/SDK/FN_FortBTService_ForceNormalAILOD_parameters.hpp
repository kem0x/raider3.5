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

// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ReceiveActivation
struct UFortBTService_ForceNormalAILOD_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ReceiveDeactivation
struct UFortBTService_ForceNormalAILOD_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ExecuteUbergraph_FortBTService_ForceNormalAILOD
struct UFortBTService_ForceNormalAILOD_C_ExecuteUbergraph_FortBTService_ForceNormalAILOD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
