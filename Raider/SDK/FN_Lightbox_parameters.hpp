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

// Function Lightbox.Lightbox_C.RemoveContent
struct ULightbox_C_RemoveContent_Params
{
};

// Function Lightbox.Lightbox_C.AddContent
struct ULightbox_C_AddContent_Params
{
	class UCommonUserWidget*                           Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Lightbox.Lightbox_C.Outro
struct ULightbox_C_Outro_Params
{
};

// Function Lightbox.Lightbox_C.Intro
struct ULightbox_C_Intro_Params
{
};

// Function Lightbox.Lightbox_C.Destruct
struct ULightbox_C_Destruct_Params
{
};

// Function Lightbox.Lightbox_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct ULightbox_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Lightbox.Lightbox_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct ULightbox_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox
struct ULightbox_C_ExecuteUbergraph_Lightbox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature
struct ULightbox_C_OutroEnded__DelegateSignature_Params
{
};

// Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature
struct ULightbox_C_IntroEnded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
