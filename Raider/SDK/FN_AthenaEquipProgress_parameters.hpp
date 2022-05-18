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

// Function AthenaEquipProgress.AthenaEquipProgress_C.Tick
struct UAthenaEquipProgress_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.Construct
struct UAthenaEquipProgress_C_Construct_Params
{
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.OnUIGameplayCue_Event_0_1
struct UAthenaEquipProgress_C_OnUIGameplayCue_Event_0_1_Params
{
	struct FName                                       CueName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.Destruct
struct UAthenaEquipProgress_C_Destruct_Params
{
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.ExecuteUbergraph_AthenaEquipProgress
struct UAthenaEquipProgress_C_ExecuteUbergraph_AthenaEquipProgress_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
