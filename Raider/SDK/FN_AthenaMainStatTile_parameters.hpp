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

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
struct UAthenaMainStatTile_C_SetStatValue_Params
{
	struct FText                                       StatValueAsText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName
struct UAthenaMainStatTile_C_SetTagAndDisplayName_Params
{
	struct FString                                     Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct
struct UAthenaMainStatTile_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile
struct UAthenaMainStatTile_C_ExecuteUbergraph_AthenaMainStatTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
