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

// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorB
struct USimpleMaterialProgressBar_C_SetColorB_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorA
struct USimpleMaterialProgressBar_C_SetColorA_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetProgress
struct USimpleMaterialProgressBar_C_SetProgress_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.PreConstruct
struct USimpleMaterialProgressBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.ExecuteUbergraph_SimpleMaterialProgressBar
struct USimpleMaterialProgressBar_C_ExecuteUbergraph_SimpleMaterialProgressBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
