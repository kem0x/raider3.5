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

// Function MulchWarning.MulchWarning_C.Construct
struct UMulchWarning_C_Construct_Params
{
};

// Function MulchWarning.MulchWarning_C.SetSelected
struct UMulchWarning_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MulchWarning.MulchWarning_C.ExecuteUbergraph_MulchWarning
struct UMulchWarning_C_ExecuteUbergraph_MulchWarning_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
