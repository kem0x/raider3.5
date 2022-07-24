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

// Function Button_PushToTalk.Button_PushToTalk_C.Update Visibility
struct UButton_PushToTalk_C_Update_Visibility_Params
{
	EPTTState                                          PTT_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_PushToTalk.Button_PushToTalk_C.OnClicked
struct UButton_PushToTalk_C_OnClicked_Params
{
};

// Function Button_PushToTalk.Button_PushToTalk_C.Construct
struct UButton_PushToTalk_C_Construct_Params
{
};

// Function Button_PushToTalk.Button_PushToTalk_C.OnHUDStateUpdate
struct UButton_PushToTalk_C_OnHUDStateUpdate_Params
{
	struct FFortHUDState*                              NewState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Button_PushToTalk.Button_PushToTalk_C.On Can PTT
struct UButton_PushToTalk_C_On_Can_PTT_Params
{
};

// Function Button_PushToTalk.Button_PushToTalk_C.ExecuteUbergraph_Button_PushToTalk
struct UButton_PushToTalk_C_ExecuteUbergraph_Button_PushToTalk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
