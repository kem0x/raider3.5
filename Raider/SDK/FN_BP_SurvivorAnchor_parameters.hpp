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

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsCenter
struct ABP_SurvivorAnchor_C_GetTetheredBoxBoundsCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsEQSGridSize
struct ABP_SurvivorAnchor_C_GetTetheredBoxBoundsEQSGridSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsEQSSpaceBetween
struct ABP_SurvivorAnchor_C_GetTetheredBoxBoundsEQSSpaceBetween_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsHeight
struct ABP_SurvivorAnchor_C_GetTetheredBoxBoundsHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsWidth
struct ABP_SurvivorAnchor_C_GetTetheredBoxBoundsWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.IsActorInsideOfAnchorBounds
struct ABP_SurvivorAnchor_C_IsActorInsideOfAnchorBounds_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               InBounds;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.UserConstructionScript
struct ABP_SurvivorAnchor_C_UserConstructionScript_Params
{
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ReceiveBeginPlay
struct ABP_SurvivorAnchor_C_ReceiveBeginPlay_Params
{
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ShowAnchorBounds
struct ABP_SurvivorAnchor_C_ShowAnchorBounds_Params
{
};

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ExecuteUbergraph_BP_SurvivorAnchor
struct ABP_SurvivorAnchor_C_ExecuteUbergraph_BP_SurvivorAnchor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
