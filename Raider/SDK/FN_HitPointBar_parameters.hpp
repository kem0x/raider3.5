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

// Function HitPointBar.HitPointBar_C.SetInitialValues
struct UHitPointBar_C_SetInitialValues_Params
{
};

// Function HitPointBar.HitPointBar_C.UpdateVolatileForUpdate
struct UHitPointBar_C_UpdateVolatileForUpdate_Params
{
};

// Function HitPointBar.HitPointBar_C.Update
struct UHitPointBar_C_Update_Params
{
};

// Function HitPointBar.HitPointBar_C.Update Delta Bar
struct UHitPointBar_C_Update_Delta_Bar_Params
{
};

// Function HitPointBar.HitPointBar_C.Initialize Bar
struct UHitPointBar_C_Initialize_Bar_Params
{
};

// Function HitPointBar.HitPointBar_C.UpdateCurrentValueWithoutReason
struct UHitPointBar_C_UpdateCurrentValueWithoutReason_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.Update Fill Bar
struct UHitPointBar_C_Update_Fill_Bar_Params
{
};

// Function HitPointBar.HitPointBar_C.UpdateCurrentValue
struct UHitPointBar_C_UpdateCurrentValue_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortHitPointModificationReason                    Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.UpdateMaxValue
struct UHitPointBar_C_UpdateMaxValue_Params
{
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.PreConstruct
struct UHitPointBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.Tick
struct UHitPointBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HitPointBar.HitPointBar_C.ExecuteUbergraph_HitPointBar
struct UHitPointBar_C_ExecuteUbergraph_HitPointBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
