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

// Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpReasonFeedItem_C::SetXpText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText");

	UXpReasonFeedItem_C_SetXpText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffectAndRemove
// (Public, BlueprintCallable, BlueprintEvent)

void UXpReasonFeedItem_C::PlayPresentEffectAndRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffectAndRemove");

	UXpReasonFeedItem_C_PlayPresentEffectAndRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpReasonFeedItem.XpReasonFeedItem_C.BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UXpReasonFeedItem_C::BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeedItem.XpReasonFeedItem_C.BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UXpReasonFeedItem_C_BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpReasonFeedItem.XpReasonFeedItem_C.ExecuteUbergraph_XpReasonFeedItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpReasonFeedItem_C::ExecuteUbergraph_XpReasonFeedItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeedItem.XpReasonFeedItem_C.ExecuteUbergraph_XpReasonFeedItem");

	UXpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
