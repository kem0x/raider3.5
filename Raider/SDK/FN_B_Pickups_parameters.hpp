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

// Function B_Pickups.B_Pickups_C.SetVisibleMobileInteractIcon
struct AB_Pickups_C_SetVisibleMobileInteractIcon_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.SetInitialBGRaysParams
struct AB_Pickups_C_SetInitialBGRaysParams_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.SetActiveBackgroundParticleSystem
struct AB_Pickups_C_SetActiveBackgroundParticleSystem_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.SetInitialHologramParams
struct AB_Pickups_C_SetInitialHologramParams_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.Unique Material MIDs
struct AB_Pickups_C_Unique_Material_MIDs_Params
{
};

// Function B_Pickups.B_Pickups_C.SetupStretchMIDs
struct AB_Pickups_C_SetupStretchMIDs_Params
{
};

// Function B_Pickups.B_Pickups_C.SetupBaseMIDs
struct AB_Pickups_C_SetupBaseMIDs_Params
{
};

// Function B_Pickups.B_Pickups_C.SetHiddenBackgroundVisualComponents
struct AB_Pickups_C_SetHiddenBackgroundVisualComponents_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.SetupLight
struct AB_Pickups_C_SetupLight_Params
{
};

// Function B_Pickups.B_Pickups_C.DestroyBackgroundVisualComponents
struct AB_Pickups_C_DestroyBackgroundVisualComponents_Params
{
};

// Function B_Pickups.B_Pickups_C.ReleaseStretchMIDs
struct AB_Pickups_C_ReleaseStretchMIDs_Params
{
};

// Function B_Pickups.B_Pickups_C.ScaleHologramTimingsForPvP
struct AB_Pickups_C_ScaleHologramTimingsForPvP_Params
{
};

// Function B_Pickups.B_Pickups_C.SetHologramPickedUpParams
struct AB_Pickups_C_SetHologramPickedUpParams_Params
{
	bool                                               Tier_0;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.SpawnPickedUpTrailPS
struct AB_Pickups_C_SpawnPickedUpTrailPS_Params
{
};

// Function B_Pickups.B_Pickups_C.SetRarityColor
struct AB_Pickups_C_SetRarityColor_Params
{
};

// Function B_Pickups.B_Pickups_C.UserConstructionScript
struct AB_Pickups_C_UserConstructionScript_Params
{
};

// Function B_Pickups.B_Pickups_C.MobileSelectedTL__FinishedFunc
struct AB_Pickups_C_MobileSelectedTL__FinishedFunc_Params
{
};

// Function B_Pickups.B_Pickups_C.MobileSelectedTL__UpdateFunc
struct AB_Pickups_C_MobileSelectedTL__UpdateFunc_Params
{
};

// Function B_Pickups.B_Pickups_C.OnLoaded_545E96BB48C612EC956D439BF0008DCB
struct AB_Pickups_C_OnLoaded_545E96BB48C612EC956D439BF0008DCB_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.OnLoaded_8EE257FB4892F606952F3B9974CE26D4
struct AB_Pickups_C_OnLoaded_8EE257FB4892F606952F3B9974CE26D4_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.OnLoaded_E6CB94744AD5E69A7AE15B925703AA9F
struct AB_Pickups_C_OnLoaded_E6CB94744AD5E69A7AE15B925703AA9F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.OnAboutToEnterBackpack
struct AB_Pickups_C_OnAboutToEnterBackpack_Params
{
	class AFortPawn**                                  PickupTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.ReceiveTick
struct AB_Pickups_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups.B_Pickups_C.OnTossed
struct AB_Pickups_C_OnTossed_Params
{
};

// Function B_Pickups.B_Pickups_C.OnPickedUp
struct AB_Pickups_C_OnPickedUp_Params
{
};

// Function B_Pickups.B_Pickups_C.ReceiveDestroyed
struct AB_Pickups_C_ReceiveDestroyed_Params
{
};

// Function B_Pickups.B_Pickups_C.ReceiveBeginPlay
struct AB_Pickups_C_ReceiveBeginPlay_Params
{
};

// Function B_Pickups.B_Pickups_C.EnableBacchusHighlight
struct AB_Pickups_C_EnableBacchusHighlight_Params
{
};

// Function B_Pickups.B_Pickups_C.DisableBacchusHighlight
struct AB_Pickups_C_DisableBacchusHighlight_Params
{
};

// Function B_Pickups.B_Pickups_C.ExecuteUbergraph_B_Pickups
struct AB_Pickups_C_ExecuteUbergraph_B_Pickups_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
