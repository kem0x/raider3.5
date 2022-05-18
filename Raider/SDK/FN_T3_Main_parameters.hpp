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

// Function T3_Main.T3_Main_C.Construct
struct UT3_Main_C_Construct_Params
{
};

// Function T3_Main.T3_Main_C.PreConstruct
struct UT3_Main_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function T3_Main.T3_Main_C.ExecuteUbergraph_T3_Main
struct UT3_Main_C_ExecuteUbergraph_T3_Main_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
