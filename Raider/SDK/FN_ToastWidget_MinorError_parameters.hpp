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

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetupAnimBindings
struct UToastWidget_MinorError_C_SetupAnimBindings_Params
{
	bool                                               Unbind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.ApplyAdditionalStyling
struct UToastWidget_MinorError_C_ApplyAdditionalStyling_Params
{
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetImage
struct UToastWidget_MinorError_C_SetImage_Params
{
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.GetOpenButtonVisibility
struct UToastWidget_MinorError_C_GetOpenButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.StartIntro
struct UToastWidget_MinorError_C_StartIntro_Params
{
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.ShowText
struct UToastWidget_MinorError_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetToast
struct UToastWidget_MinorError_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.PlayOutro
struct UToastWidget_MinorError_C_PlayOutro_Params
{
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseEnter
struct UToastWidget_MinorError_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseLeave
struct UToastWidget_MinorError_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastWidget_MinorError_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleOutroFinished
struct UToastWidget_MinorError_C_HandleOutroFinished_Params
{
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleIntroFinished
struct UToastWidget_MinorError_C_HandleIntroFinished_Params
{
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.Construct
struct UToastWidget_MinorError_C_Construct_Params
{
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.Destruct
struct UToastWidget_MinorError_C_Destruct_Params
{
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.ExecuteUbergraph_ToastWidget_MinorError
struct UToastWidget_MinorError_C_ExecuteUbergraph_ToastWidget_MinorError_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnFinishedToast__DelegateSignature
struct UToastWidget_MinorError_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
