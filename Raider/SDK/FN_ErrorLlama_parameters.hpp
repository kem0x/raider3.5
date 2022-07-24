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

// Function ErrorLlama.ErrorLlama_C.HandleInputTypeChanged
struct UErrorLlama_C_HandleInputTypeChanged_Params
{
	ECommonInputType                                   NewInputType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ErrorLlama.ErrorLlama_C.Construct
struct UErrorLlama_C_Construct_Params
{
};

// Function ErrorLlama.ErrorLlama_C.Tick
struct UErrorLlama_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ErrorLlama.ErrorLlama_C.RandomizeColor
struct UErrorLlama_C_RandomizeColor_Params
{
};

// Function ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection
struct UErrorLlama_C_HandleNormalizedInputDirection_Params
{
	struct FVector2D                                   _2DInputVec;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama
struct UErrorLlama_C_ExecuteUbergraph_ErrorLlama_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
