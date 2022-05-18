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

// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.SetPartySize
struct UAthena_PartyIconsDisplay_C_SetPartySize_Params
{
	int                                                PartySize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.PreConstruct
struct UAthena_PartyIconsDisplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PartyIconsDisplay.Athena_PartyIconsDisplay_C.ExecuteUbergraph_Athena_PartyIconsDisplay
struct UAthena_PartyIconsDisplay_C_ExecuteUbergraph_Athena_PartyIconsDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
