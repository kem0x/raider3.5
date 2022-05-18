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

// Function BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString
struct ABluGlo_Node_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract
struct ABluGlo_Node_C_OnRep_CanInteract_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract
struct ABluGlo_Node_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects
struct ABluGlo_Node_C_OnRep_DeActivateEffects_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects
struct ABluGlo_Node_C_OnRep_ActivateEffects_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.UserConstructionScript
struct ABluGlo_Node_C_UserConstructionScript_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc
struct ABluGlo_Node_C_Trail__FinishedFunc_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc
struct ABluGlo_Node_C_Trail__UpdateFunc_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay
struct ABluGlo_Node_C_ReceiveBeginPlay_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract
struct ABluGlo_Node_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo
struct ABluGlo_Node_C_HandleMissionEvent_LocateBluGlo_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail
struct ABluGlo_Node_C_ShowSpawnTrail_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AnimDelay;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node
struct ABluGlo_Node_C_ExecuteUbergraph_BluGlo_Node_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
