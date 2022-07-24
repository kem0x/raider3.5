#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AutorunLockZone.AutorunLockZone_C.OnInZoneChanged
struct UAutorunLockZone_C_OnInZoneChanged_Params
{
	bool*                                              bNewIsInZone;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutorunLockZone.AutorunLockZone_C.ExecuteUbergraph_AutorunLockZone
struct UAutorunLockZone_C_ExecuteUbergraph_AutorunLockZone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
