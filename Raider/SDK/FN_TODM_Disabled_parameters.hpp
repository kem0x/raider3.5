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

// Function TODM_Disabled.TODM_Disabled_C.UserConstructionScript
struct ATODM_Disabled_C_UserConstructionScript_Params
{
};

// Function TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
struct ATODM_Disabled_C_DisableLightAndFog_Params
{
	bool*                                              Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
struct ATODM_Disabled_C_ReceiveBeginPlay_Params
{
};

// Function TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
struct ATODM_Disabled_C_ExecuteUbergraph_TODM_Disabled_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
