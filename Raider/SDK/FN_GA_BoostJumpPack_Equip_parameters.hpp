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

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetGadgetItem
struct UGA_BoostJumpPack_Equip_C_GetGadgetItem_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetPlayerController
struct UGA_BoostJumpPack_Equip_C_GetPlayerController_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerControllerZone*                   AsFort_Player_Controller_Zone;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.IsAuthority
struct UGA_BoostJumpPack_Equip_C_IsAuthority_Params
{
	bool                                               bAuthority;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_CanActivateAbility
struct UGA_BoostJumpPack_Equip_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_ActivateAbility
struct UGA_BoostJumpPack_Equip_C_K2_ActivateAbility_Params
{
};

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.ExecuteUbergraph_GA_BoostJumpPack_Equip
struct UGA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
