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

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Forward Adjustment
struct UGA_Athena_RCRocket_C_Calculate_Launch_Forward_Adjustment_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Up Adjustment
struct UGA_Athena_RCRocket_C_Calculate_Launch_Up_Adjustment_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Right Adjustment
struct UGA_Athena_RCRocket_C_Calculate_Launch_Right_Adjustment_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.CalculateRocketSpawnLocation
struct UGA_Athena_RCRocket_C_CalculateRocketSpawnLocation_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.GetAthenaPlayerPawn
struct UGA_Athena_RCRocket_C_GetAthenaPlayerPawn_Params
{
	class AFortPlayerPawnAthena*                       AsFort_Player_Pawn_Athena;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.GetAthenaPlayerController
struct UGA_Athena_RCRocket_C_GetAthenaPlayerController_Params
{
	class AFortPlayerControllerAthena*                 AsFort_Player_Controller_Athena;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.K2_ActivateAbility
struct UGA_Athena_RCRocket_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.ExecuteUbergraph_GA_Athena_RCRocket
struct UGA_Athena_RCRocket_C_ExecuteUbergraph_GA_Athena_RCRocket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
