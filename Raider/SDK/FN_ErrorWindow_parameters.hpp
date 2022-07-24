#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged
struct UErrorWindow_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ErrorWindow.ErrorWindow_C.SetupSeverSeverity
struct UErrorWindow_C_SetupSeverSeverity_Params
{
};

// Function ErrorWindow.ErrorWindow_C.SetupMediumSeverity
struct UErrorWindow_C_SetupMediumSeverity_Params
{
};

// Function ErrorWindow.ErrorWindow_C.CloseErrorWindow
struct UErrorWindow_C_CloseErrorWindow_Params
{
};

// Function ErrorWindow.ErrorWindow_C.GetShouldLogout
struct UErrorWindow_C_GetShouldLogout_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.Initialize
struct UErrorWindow_C_Initialize_Params
{
};

// Function ErrorWindow.ErrorWindow_C.AddError
struct UErrorWindow_C_AddError_Params
{
	struct FFortErrorInfo                              ErrorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               First_Error;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.Construct
struct UErrorWindow_C_Construct_Params
{
};

// Function ErrorWindow.ErrorWindow_C.Destruct
struct UErrorWindow_C_Destruct_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
struct UErrorWindow_C_OnBeginOutro_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
struct UErrorWindow_C_OnBeginIntro_Params
{
};

// Function ErrorWindow.ErrorWindow_C.IntroEnded
struct UErrorWindow_C_IntroEnded_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OutroEnded
struct UErrorWindow_C_OutroEnded_Params
{
};

// Function ErrorWindow.ErrorWindow_C.PreConstruct
struct UErrorWindow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.OnActivated
struct UErrorWindow_C_OnActivated_Params
{
};

// Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish
struct UErrorWindow_C_HandleLlamaAnimFinish_Params
{
};

// Function ErrorWindow.ErrorWindow_C.LlamaReverse
struct UErrorWindow_C_LlamaReverse_Params
{
};

// Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished
struct UErrorWindow_C_HandleLlamaCycleFinished_Params
{
};

// Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama
struct UErrorWindow_C_PlayRandomAmbientLlama_Params
{
};

// Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence
struct UErrorWindow_C_StartAmbientLlamaSequence_Params
{
};

// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
struct UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.ResetLlamas
struct UErrorWindow_C_ResetLlamas_Params
{
};

// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
struct UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
struct UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
