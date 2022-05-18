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

// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.IntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewardWrapperWidget_C::IntroAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.IntroAnimation");

	UFrontEndRewardWrapperWidget_C_IntroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.AddToWrapper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UFrontEndRewardWrapperWidget_C::AddToWrapper(class UWidget* Widget, const struct FText& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.AddToWrapper");

	UFrontEndRewardWrapperWidget_C_AddToWrapper_Params params;
	params.Widget = Widget;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewardWrapperWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Construct");

	UFrontEndRewardWrapperWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Go_Trigger
// (BlueprintCallable, BlueprintEvent)

void UFrontEndRewardWrapperWidget_C::Go_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Go_Trigger");

	UFrontEndRewardWrapperWidget_C_Go_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.ExecuteUbergraph_FrontEndRewardWrapperWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewardWrapperWidget_C::ExecuteUbergraph_FrontEndRewardWrapperWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.ExecuteUbergraph_FrontEndRewardWrapperWidget");

	UFrontEndRewardWrapperWidget_C_ExecuteUbergraph_FrontEndRewardWrapperWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.EventDispatcher_Go_Trigger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFrontEndRewardWrapperWidget_C::EventDispatcher_Go_Trigger__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.EventDispatcher_Go_Trigger__DelegateSignature");

	UFrontEndRewardWrapperWidget_C_EventDispatcher_Go_Trigger__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
