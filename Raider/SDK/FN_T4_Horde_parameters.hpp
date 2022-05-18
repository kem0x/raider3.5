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

// Function T4_Horde.T4_Horde_C.PreConstruct
struct UT4_Horde_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function T4_Horde.T4_Horde_C.Construct
struct UT4_Horde_C_Construct_Params
{
};

// Function T4_Horde.T4_Horde_C.ExecuteUbergraph_T4_Horde
struct UT4_Horde_C_ExecuteUbergraph_T4_Horde_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
