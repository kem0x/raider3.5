#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity
struct UGAT_ActiveAbility_C_SetKnockbackImmunity_Params
{
	bool                                               ImmunityOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision
struct UGAT_ActiveAbility_C_SetPawnCollision_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CollisionOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
struct UGAT_ActiveAbility_C_K2_ActivateAbility_Params
{
};

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
struct UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
