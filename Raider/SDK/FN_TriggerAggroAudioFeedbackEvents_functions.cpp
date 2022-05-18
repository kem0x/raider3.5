// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTriggerAggroAudioFeedbackEvents_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveTick");

	UTriggerAggroAudioFeedbackEvents_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTriggerAggroAudioFeedbackEvents_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveDeactivation");

	UTriggerAggroAudioFeedbackEvents_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTriggerAggroAudioFeedbackEvents_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveActivation");

	UTriggerAggroAudioFeedbackEvents_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ExecuteUbergraph_TriggerAggroAudioFeedbackEvents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTriggerAggroAudioFeedbackEvents_C::ExecuteUbergraph_TriggerAggroAudioFeedbackEvents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ExecuteUbergraph_TriggerAggroAudioFeedbackEvents");

	UTriggerAggroAudioFeedbackEvents_C_ExecuteUbergraph_TriggerAggroAudioFeedbackEvents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
