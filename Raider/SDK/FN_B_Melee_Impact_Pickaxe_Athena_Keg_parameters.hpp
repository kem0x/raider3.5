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

// Function B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.SpawnDecalCheck
struct AB_Melee_Impact_Pickaxe_Athena_Keg_C_SpawnDecalCheck_Params
{
	struct FVector                                     Hit_Location;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.UserConstructionScript
struct AB_Melee_Impact_Pickaxe_Athena_Keg_C_UserConstructionScript_Params
{
};

// Function B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.OnPlayImpactFX
struct AB_Melee_Impact_Pickaxe_Athena_Keg_C_OnPlayImpactFX_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     ImpactPhysicalSurface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent**                   SpawnedPSC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg
struct AB_Melee_Impact_Pickaxe_Athena_Keg_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
