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

// Function T2_Research.T2_Research_C.PreConstruct
struct UT2_Research_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function T2_Research.T2_Research_C.Construct
struct UT2_Research_C_Construct_Params
{
};

// Function T2_Research.T2_Research_C.ExecuteUbergraph_T2_Research
struct UT2_Research_C_ExecuteUbergraph_T2_Research_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
