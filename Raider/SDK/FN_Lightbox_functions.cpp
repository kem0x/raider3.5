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

// Function Lightbox.Lightbox_C.RemoveContent
// (Public, BlueprintCallable, BlueprintEvent)

void ULightbox_C::RemoveContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.RemoveContent");

	ULightbox_C_RemoveContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.AddContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*       Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULightbox_C::AddContent(class UCommonUserWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.AddContent");

	ULightbox_C_AddContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)

void ULightbox_C::Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.Outro");

	ULightbox_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)

void ULightbox_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.Intro");

	ULightbox_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULightbox_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.Destruct");

	ULightbox_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void ULightbox_C::BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	ULightbox_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void ULightbox_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	ULightbox_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightbox_C::ExecuteUbergraph_Lightbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox");

	ULightbox_C_ExecuteUbergraph_Lightbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULightbox_C::OutroEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature");

	ULightbox_C_OutroEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULightbox_C::IntroEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature");

	ULightbox_C_IntroEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
