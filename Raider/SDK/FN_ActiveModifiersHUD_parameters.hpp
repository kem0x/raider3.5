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

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.PopulateModifiers
struct UActiveModifiersHUD_C_PopulateModifiers_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> inModifiers;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.OnActiveGameplayModifiersChanged
struct UActiveModifiersHUD_C_OnActiveGameplayModifiersChanged_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.Construct
struct UActiveModifiersHUD_C_Construct_Params
{
};

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.ExecuteUbergraph_ActiveModifiersHUD
struct UActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
