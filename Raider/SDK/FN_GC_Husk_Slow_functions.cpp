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

// Function GC_Husk_Slow.GC_Husk_Slow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Husk_Slow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.UserConstructionScript");

	AGC_Husk_Slow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__FinishedFunc
// (BlueprintEvent)

void AGC_Husk_Slow_C::CuffLock__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__FinishedFunc");

	AGC_Husk_Slow_C_CuffLock__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__UpdateFunc
// (BlueprintEvent)

void AGC_Husk_Slow_C::CuffLock__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__UpdateFunc");

	AGC_Husk_Slow_C_CuffLock__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__Open_Event__EventFunc
// (BlueprintEvent)

void AGC_Husk_Slow_C::CuffLock__Open_Event__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__Open_Event__EventFunc");

	AGC_Husk_Slow_C_CuffLock__Open_Event__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__Close_Event__EventFunc
// (BlueprintEvent)

void AGC_Husk_Slow_C::CuffLock__Close_Event__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__Close_Event__EventFunc");

	AGC_Husk_Slow_C_CuffLock__Close_Event__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Husk_Slow_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.K2_HandleGameplayCue");

	AGC_Husk_Slow_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Husk_Slow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.ReceiveTick");

	AGC_Husk_Slow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLinkLock
// (BlueprintCallable, BlueprintEvent)

void AGC_Husk_Slow_C::CuffLinkLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.CuffLinkLock");

	AGC_Husk_Slow_C_CuffLinkLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.Cuff_Locked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETimelineDirection> TimelineDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Husk_Slow_C::Cuff_Locked(TEnumAsByte<ETimelineDirection> TimelineDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.Cuff_Locked");

	AGC_Husk_Slow_C_Cuff_Locked_Params params;
	params.TimelineDirection = TimelineDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.CuffRemoved
// (BlueprintCallable, BlueprintEvent)

void AGC_Husk_Slow_C::CuffRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.CuffRemoved");

	AGC_Husk_Slow_C_CuffRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.Cuff_Unlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETimelineDirection> TimelineDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Husk_Slow_C::Cuff_Unlocked(TEnumAsByte<ETimelineDirection> TimelineDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.Cuff_Unlocked");

	AGC_Husk_Slow_C_Cuff_Unlocked_Params params;
	params.TimelineDirection = TimelineDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Husk_Slow.GC_Husk_Slow_C.ExecuteUbergraph_GC_Husk_Slow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Husk_Slow_C::ExecuteUbergraph_GC_Husk_Slow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Husk_Slow.GC_Husk_Slow_C.ExecuteUbergraph_GC_Husk_Slow");

	AGC_Husk_Slow_C_ExecuteUbergraph_GC_Husk_Slow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
