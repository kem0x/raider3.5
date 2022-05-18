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

// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsRandomly
struct UBluGloRequestHandler_C_BuildLocationsRandomly_Params
{
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsFromQueryLocations
struct UBluGloRequestHandler_C_BuildLocationsFromQueryLocations_Params
{
	TArray<struct FVector>                             QueryResultLocations;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.EQSQueryFinished
struct UBluGloRequestHandler_C_EQSQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.InitializeBluGloRequestHandler
struct UBluGloRequestHandler_C_InitializeBluGloRequestHandler_Params
{
	int                                                NumBluGloToSpawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToSpawnFrom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.ExecuteUbergraph_BluGloRequestHandler
struct UBluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BluGloRequestHandler.BluGloRequestHandler_C.OnBluGloQueryFinished__DelegateSignature
struct UBluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
