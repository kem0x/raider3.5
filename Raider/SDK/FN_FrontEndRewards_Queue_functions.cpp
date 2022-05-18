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

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconInit
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::TickIconInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconInit");

	UFrontEndRewards_Queue_C_TickIconInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartInitAnimation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::StartInitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartInitAnimation");

	UFrontEndRewards_Queue_C_StartInitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.SlideIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_Queue_C::SlideIcon(class URewardsIcon_C* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.SlideIcon");

	UFrontEndRewards_Queue_C_SlideIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartDequeueAnimation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::StartDequeueAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartDequeueAnimation");

	UFrontEndRewards_Queue_C_StartDequeueAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconSlide
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::TickIconSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconSlide");

	UFrontEndRewards_Queue_C_TickIconSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.HandleIconHideAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_Queue_C::HandleIconHideAnimationFinished(class URewardsIcon_C* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.HandleIconHideAnimationFinished");

	UFrontEndRewards_Queue_C_HandleIconHideAnimationFinished_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PopIcon
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*          OutIcon                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_Queue_C::PopIcon(class URewardsIcon_C** OutIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PopIcon");

	UFrontEndRewards_Queue_C_PopIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIcon != nullptr)
		*OutIcon = params.OutIcon;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.RandomizeDesignView
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::RandomizeDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.RandomizeDesignView");

	UFrontEndRewards_Queue_C_RandomizeDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.CloneIconList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewardsIcon_C*>  IconListClone                  (Parm, OutParm, ZeroConstructor)

void UFrontEndRewards_Queue_C::CloneIconList(TArray<class URewardsIcon_C*>* IconListClone)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.CloneIconList");

	UFrontEndRewards_Queue_C_CloneIconList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconListClone != nullptr)
		*IconListClone = params.IconListClone;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ClearQueue
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::ClearQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ClearQueue");

	UFrontEndRewards_Queue_C_ClearQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.DequeueReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* OutReward                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Queue_C::DequeueReward(class UFortRewardNotificationData** OutReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.DequeueReward");

	UFrontEndRewards_Queue_C_DequeueReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReward != nullptr)
		*OutReward = params.OutReward;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.QueueReward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* RewardItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URewardsIcon_C*          OutIcon                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_Queue_C::QueueReward(class UFortRewardNotificationData* RewardItem, bool IsDesignTime, class URewardsIcon_C** OutIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.QueueReward");

	UFrontEndRewards_Queue_C_QueueReward_Params params;
	params.RewardItem = RewardItem;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIcon != nullptr)
		*OutIcon = params.OutIcon;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Queue_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PreConstruct");

	UFrontEndRewards_Queue_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ExecuteUbergraph_FrontEndRewards_Queue
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Queue_C::ExecuteUbergraph_FrontEndRewards_Queue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ExecuteUbergraph_FrontEndRewards_Queue");

	UFrontEndRewards_Queue_C_ExecuteUbergraph_FrontEndRewards_Queue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
