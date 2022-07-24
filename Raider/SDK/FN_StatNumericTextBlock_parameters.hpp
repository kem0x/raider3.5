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

// Function StatNumericTextBlock.StatNumericTextBlock_C.SetComparisonState
struct UStatNumericTextBlock_C_SetComparisonState_Params
{
	EFortBuffState                                     Buff_State;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatNumericTextBlock.StatNumericTextBlock_C.UpdateComparison
struct UStatNumericTextBlock_C_UpdateComparison_Params
{
};

// Function StatNumericTextBlock.StatNumericTextBlock_C.Construct
struct UStatNumericTextBlock_C_Construct_Params
{
};

// Function StatNumericTextBlock.StatNumericTextBlock_C.PreConstruct
struct UStatNumericTextBlock_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatNumericTextBlock.StatNumericTextBlock_C.ExecuteUbergraph_StatNumericTextBlock
struct UStatNumericTextBlock_C_ExecuteUbergraph_StatNumericTextBlock_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
