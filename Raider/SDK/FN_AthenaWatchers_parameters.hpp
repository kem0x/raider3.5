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

// Function AthenaWatchers.AthenaWatchers_C.UpdateSpectatorCountDisplay
struct UAthenaWatchers_C_UpdateSpectatorCountDisplay_Params
{
	int                                                NewCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaWatchers.AthenaWatchers_C.OnSpectatorCountChanged
struct UAthenaWatchers_C_OnSpectatorCountChanged_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaWatchers.AthenaWatchers_C.Construct
struct UAthenaWatchers_C_Construct_Params
{
};

// Function AthenaWatchers.AthenaWatchers_C.UpdateVisibilityBasedOnSettings
struct UAthenaWatchers_C_UpdateVisibilityBasedOnSettings_Params
{
};

// Function AthenaWatchers.AthenaWatchers_C.ExecuteUbergraph_AthenaWatchers
struct UAthenaWatchers_C_ExecuteUbergraph_AthenaWatchers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
