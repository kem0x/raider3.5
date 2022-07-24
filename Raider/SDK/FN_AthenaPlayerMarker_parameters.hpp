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

// Function AthenaPlayerMarker.AthenaPlayerMarker_C.UserConstructionScript
struct AAthenaPlayerMarker_C_UserConstructionScript_Params
{
};

// Function AthenaPlayerMarker.AthenaPlayerMarker_C.SpawnMarkerAnim__FinishedFunc
struct AAthenaPlayerMarker_C_SpawnMarkerAnim__FinishedFunc_Params
{
};

// Function AthenaPlayerMarker.AthenaPlayerMarker_C.SpawnMarkerAnim__UpdateFunc
struct AAthenaPlayerMarker_C_SpawnMarkerAnim__UpdateFunc_Params
{
};

// Function AthenaPlayerMarker.AthenaPlayerMarker_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AAthenaPlayerMarker_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AthenaPlayerMarker.AthenaPlayerMarker_C.OnSetupMarker
struct AAthenaPlayerMarker_C_OnSetupMarker_Params
{
	struct FPlayerMarkerData*                          MarkerData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaPlayerMarker.AthenaPlayerMarker_C.OnMarkerPlaced
struct AAthenaPlayerMarker_C_OnMarkerPlaced_Params
{
};

// Function AthenaPlayerMarker.AthenaPlayerMarker_C.ExecuteUbergraph_AthenaPlayerMarker
struct AAthenaPlayerMarker_C_ExecuteUbergraph_AthenaPlayerMarker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
