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

// Function Button_Mode.Button_Mode_C.OnTouchStarted
struct UButton_Mode_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Button_Mode.Button_Mode_C.OnBuildModeChanged_Event_1
struct UButton_Mode_C_OnBuildModeChanged_Event_1_Params
{
	bool                                               bEntering;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Mode.Button_Mode_C.Construct
struct UButton_Mode_C_Construct_Params
{
};

// Function Button_Mode.Button_Mode_C.ExecuteUbergraph_Button_Mode
struct UButton_Mode_C_ExecuteUbergraph_Button_Mode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
