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

// Function Results_Badge.Results_Badge_C.DoDesignTimeRandomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_Badge_C::DoDesignTimeRandomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.DoDesignTimeRandomization");

	UResults_Badge_C_DoDesignTimeRandomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Badge_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.SkipToFinalState");

	UResults_Badge_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Badge_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.SetSkippingToEnd");

	UResults_Badge_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Badge_C::Initialize(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.Initialize");

	UResults_Badge_C_Initialize_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.HasValidItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasValidItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_Badge_C::HasValidItem(bool* HasValidItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.HasValidItem");

	UResults_Badge_C_HasValidItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasValidItem != nullptr)
		*HasValidItem = params.HasValidItem;
}


// Function Results_Badge.Results_Badge_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Badge_C::SetItem(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.SetItem");

	UResults_Badge_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Badge_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.Intro Sequence");

	UResults_Badge_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.Convert Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Badge_C::Convert_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.Convert Sequence");

	UResults_Badge_C_Convert_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Badge_C::BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_Badge_C_BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Badge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.PreConstruct");

	UResults_Badge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.Reset Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Badge_C::Reset_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.Reset Sequence");

	UResults_Badge_C_Reset_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.ExecuteUbergraph_Results_Badge
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Badge_C::ExecuteUbergraph_Results_Badge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.ExecuteUbergraph_Results_Badge");

	UResults_Badge_C_ExecuteUbergraph_Results_Badge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.ConvertFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_Badge_C::ConvertFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.ConvertFinished__DelegateSignature");

	UResults_Badge_C_ConvertFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
