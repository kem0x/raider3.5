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

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.SkipToFinalState
struct UResults_TeamScoreBox_C_SkipToFinalState_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.SetSkippingToEnd
struct UResults_TeamScoreBox_C_SetSkippingToEnd_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.UpdateFlashTextType
struct UResults_TeamScoreBox_C_UpdateFlashTextType_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.FlashTextType
struct UResults_TeamScoreBox_C_FlashTextType_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Initialize
struct UResults_TeamScoreBox_C_Initialize_Params
{
	TEnumAsByte<EFortUIScoreType>                      ScoreType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.InitializeScoreType
struct UResults_TeamScoreBox_C_InitializeScoreType_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Intro Sequence
struct UResults_TeamScoreBox_C_Intro_Sequence_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Count Up Sequence
struct UResults_TeamScoreBox_C_Count_Up_Sequence_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Count Down Sequence
struct UResults_TeamScoreBox_C_Count_Down_Sequence_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeamScoreBox_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.PreConstruct
struct UResults_TeamScoreBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Text Count Up Finished
struct UResults_TeamScoreBox_C_Text_Count_Up_Finished_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Text Count Down Finished
struct UResults_TeamScoreBox_C_Text_Count_Down_Finished_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Skip Count Interpolation
struct UResults_TeamScoreBox_C_Skip_Count_Interpolation_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Stop Count Down Absorption
struct UResults_TeamScoreBox_C_Stop_Count_Down_Absorption_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
struct UResults_TeamScoreBox_C_BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HadCompleted;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.ExecuteUbergraph_Results_TeamScoreBox
struct UResults_TeamScoreBox_C_ExecuteUbergraph_Results_TeamScoreBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.IntroFinished__DelegateSignature
struct UResults_TeamScoreBox_C_IntroFinished__DelegateSignature_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.CountDownFinished__DelegateSignature
struct UResults_TeamScoreBox_C_CountDownFinished__DelegateSignature_Params
{
};

// Function Results_TeamScoreBox.Results_TeamScoreBox_C.CountUpFinished__DelegateSignature
struct UResults_TeamScoreBox_C_CountUpFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
