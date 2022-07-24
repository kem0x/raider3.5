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

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.PlayerApplyGameplayEffects
struct ATrap_Floor_BouncePad_C_PlayerApplyGameplayEffects_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnRep_Overlappedactor
struct ATrap_Floor_BouncePad_C_OnRep_Overlappedactor_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.VehicleLaunch
struct ATrap_Floor_BouncePad_C_VehicleLaunch_Params
{
	class AFortAthenaVehicle*                          Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.PlayerLaunch
struct ATrap_Floor_BouncePad_C_PlayerLaunch_Params
{
	class AFortPlayerPawnAthena*                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.UserConstructionScript
struct ATrap_Floor_BouncePad_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnPlaced
struct ATrap_Floor_BouncePad_C_OnPlaced_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnFinishedBuilding
struct ATrap_Floor_BouncePad_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ATrap_Floor_BouncePad_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_BouncePad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.ReceiveDestroyed
struct ATrap_Floor_BouncePad_C_ReceiveDestroyed_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.ExecuteUbergraph_Trap_Floor_BouncePad
struct ATrap_Floor_BouncePad_C_ExecuteUbergraph_Trap_Floor_BouncePad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
