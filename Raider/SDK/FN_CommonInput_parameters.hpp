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

// Function CommonInput.CommonInputContext.SetGamepadInputType
struct UCommonInputContext_SetGamepadInputType_Params
{
	ECommonGamepadType                                 InGamepadInputType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputContext.SetCurrentInputType
struct UCommonInputContext_SetCurrentInputType_Params
{
	ECommonInputType                                   NewInputType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputContext.IsUsingPointerInput
struct UCommonInputContext_IsUsingPointerInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction CommonInput.CommonInputContext.InputMethodChangedDelegate__DelegateSignature
struct UCommonInputContext_InputMethodChangedDelegate__DelegateSignature_Params
{
	ECommonInputType                                   bNewInputType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputContext.GetCurrentInputType
struct UCommonInputContext_GetCurrentInputType_Params
{
	ECommonInputType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputContext.GetCurrentGamepadType
struct UCommonInputContext_GetCurrentGamepadType_Params
{
	ECommonGamepadType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
