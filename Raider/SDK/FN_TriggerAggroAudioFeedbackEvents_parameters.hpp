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

// Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveTick
struct UTriggerAggroAudioFeedbackEvents_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveDeactivation
struct UTriggerAggroAudioFeedbackEvents_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveActivation
struct UTriggerAggroAudioFeedbackEvents_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ExecuteUbergraph_TriggerAggroAudioFeedbackEvents
struct UTriggerAggroAudioFeedbackEvents_C_ExecuteUbergraph_TriggerAggroAudioFeedbackEvents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
