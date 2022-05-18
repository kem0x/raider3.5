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

// Function GAB_SmasherTired.GAB_SmasherTired_C.K2_ActivateAbility
struct UGAB_SmasherTired_C_K2_ActivateAbility_Params
{
};

// Function GAB_SmasherTired.GAB_SmasherTired_C.K2_OnEndAbility
struct UGAB_SmasherTired_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherTired.GAB_SmasherTired_C.ExecuteUbergraph_GAB_SmasherTired
struct UGAB_SmasherTired_C_ExecuteUbergraph_GAB_SmasherTired_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
