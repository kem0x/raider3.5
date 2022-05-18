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

// Function AthenaHitPointBar.AthenaHitPointBar_C.SetSize
struct UAthenaHitPointBar_C_SetSize_Params
{
	bool                                               useLargeSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState
struct UAthenaHitPointBar_C_UpdateDBNOState_Params
{
	bool                                               bIsDBNO;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType
struct UAthenaHitPointBar_C_UpdateHealthType_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar
struct UAthenaHitPointBar_C_Update_Delta_Bar_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar
struct UAthenaHitPointBar_C_Initialize_Bar_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar
struct UAthenaHitPointBar_C_Update_Fill_Bar_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue
struct UAthenaHitPointBar_C_UpdateCurrentValue_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue
struct UAthenaHitPointBar_C_UpdateMaxValue_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct
struct UAthenaHitPointBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.OnMaxValueChanged
struct UAthenaHitPointBar_C_OnMaxValueChanged_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.OnValueChangedWithReason
struct UAthenaHitPointBar_C_OnValueChangedWithReason_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortHitPointModificationReason*                   Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.OnDBNOStateChanged
struct UAthenaHitPointBar_C_OnDBNOStateChanged_Params
{
	bool*                                              IsDBNO;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.OnDeltaChanged
struct UAthenaHitPointBar_C_OnDeltaChanged_Params
{
};

// Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar
struct UAthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
