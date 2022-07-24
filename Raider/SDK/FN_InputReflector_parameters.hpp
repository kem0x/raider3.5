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

// Function InputReflector.InputReflector_C.StyleButton
struct UInputReflector_C_StyleButton_Params
{
	class UCommonButton*                               ButtonToStyle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UCommonButton*                               ButtonStyled;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InputReflector.InputReflector_C.HandleAddButton
struct UInputReflector_C_HandleAddButton_Params
{
	class UCommonButton*                               AddedButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InputReflector.InputReflector_C.OnButtonAdded
struct UInputReflector_C_OnButtonAdded_Params
{
	class UCommonButton**                              AddedButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCommonInputActionHandlerData*              Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
struct UInputReflector_C_ExecuteUbergraph_InputReflector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
