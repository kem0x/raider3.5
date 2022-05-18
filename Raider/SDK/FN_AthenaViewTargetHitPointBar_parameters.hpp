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

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateDBNOState
struct UAthenaViewTargetHitPointBar_C_UpdateDBNOState_Params
{
	bool                                               IsDBNO;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateVolatileForUpdate
struct UAthenaViewTargetHitPointBar_C_UpdateVolatileForUpdate_Params
{
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update
struct UAthenaViewTargetHitPointBar_C_Update_Params
{
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update Delta Bar
struct UAthenaViewTargetHitPointBar_C_Update_Delta_Bar_Params
{
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Initialize Bar
struct UAthenaViewTargetHitPointBar_C_Initialize_Bar_Params
{
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateCurrentValueWithoutReason
struct UAthenaViewTargetHitPointBar_C_UpdateCurrentValueWithoutReason_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update Fill Bar
struct UAthenaViewTargetHitPointBar_C_Update_Fill_Bar_Params
{
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateCurrentValue
struct UAthenaViewTargetHitPointBar_C_UpdateCurrentValue_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortHitPointModificationReason                    Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateMaxValue
struct UAthenaViewTargetHitPointBar_C_UpdateMaxValue_Params
{
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Construct
struct UAthenaViewTargetHitPointBar_C_Construct_Params
{
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.PreConstruct
struct UAthenaViewTargetHitPointBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Tick
struct UAthenaViewTargetHitPointBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.ExecuteUbergraph_AthenaViewTargetHitPointBar
struct UAthenaViewTargetHitPointBar_C_ExecuteUbergraph_AthenaViewTargetHitPointBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
