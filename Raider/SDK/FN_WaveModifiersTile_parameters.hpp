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

// Function WaveModifiersTile.WaveModifiersTile_C.PlayIntro
struct UWaveModifiersTile_C_PlayIntro_Params
{
};

// Function WaveModifiersTile.WaveModifiersTile_C.SetModifierItem
struct UWaveModifiersTile_C_SetModifierItem_Params
{
	class UFortItem*                                   ModifierItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaveModifiersTile.WaveModifiersTile_C.OnAnimReadyForNextModifier
struct UWaveModifiersTile_C_OnAnimReadyForNextModifier_Params
{
};

// Function WaveModifiersTile.WaveModifiersTile_C.SetData
struct UWaveModifiersTile_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaveModifiersTile.WaveModifiersTile_C.ExecuteUbergraph_WaveModifiersTile
struct UWaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaveModifiersTile.WaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature
struct UWaveModifiersTile_C_OnReadyForNextModifierPresentation__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
