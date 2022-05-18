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

// Function GA_Weapon_M80.GA_Weapon_M80_C.ThrowM80
struct UGA_Weapon_M80_C_ThrowM80_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Completed_3828B846413BDD657BD4F9BDEC856444
struct UGA_Weapon_M80_C_Completed_3828B846413BDD657BD4F9BDEC856444_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Cancelled_3828B846413BDD657BD4F9BDEC856444
struct UGA_Weapon_M80_C_Cancelled_3828B846413BDD657BD4F9BDEC856444_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Triggered_3828B846413BDD657BD4F9BDEC856444
struct UGA_Weapon_M80_C_Triggered_3828B846413BDD657BD4F9BDEC856444_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Destroyed_4DCEF0C249251A8D551D83AC1D03811D
struct UGA_Weapon_M80_C_Destroyed_4DCEF0C249251A8D551D83AC1D03811D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Exploded_4DCEF0C249251A8D551D83AC1D03811D
struct UGA_Weapon_M80_C_Exploded_4DCEF0C249251A8D551D83AC1D03811D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Stopped_4DCEF0C249251A8D551D83AC1D03811D
struct UGA_Weapon_M80_C_Stopped_4DCEF0C249251A8D551D83AC1D03811D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Bounced_4DCEF0C249251A8D551D83AC1D03811D
struct UGA_Weapon_M80_C_Bounced_4DCEF0C249251A8D551D83AC1D03811D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Touched_4DCEF0C249251A8D551D83AC1D03811D
struct UGA_Weapon_M80_C_Touched_4DCEF0C249251A8D551D83AC1D03811D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.Created_4DCEF0C249251A8D551D83AC1D03811D
struct UGA_Weapon_M80_C_Created_4DCEF0C249251A8D551D83AC1D03811D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.K2_ActivateAbility
struct UGA_Weapon_M80_C_K2_ActivateAbility_Params
{
};

// Function GA_Weapon_M80.GA_Weapon_M80_C.ExecuteUbergraph_GA_Weapon_M80
struct UGA_Weapon_M80_C_ExecuteUbergraph_GA_Weapon_M80_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
