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

// Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings
struct UToastWidget_New_C_SetupAnimBindings_Params
{
	bool                                               Unbind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget_New.ToastWidget_New_C.ApplyAdditionalStyling
struct UToastWidget_New_C_ApplyAdditionalStyling_Params
{
};

// Function ToastWidget_New.ToastWidget_New_C.SetImage
struct UToastWidget_New_C_SetImage_Params
{
};

// Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility
struct UToastWidget_New_C_GetOpenButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ToastWidget_New.ToastWidget_New_C.StartIntro
struct UToastWidget_New_C_StartIntro_Params
{
};

// Function ToastWidget_New.ToastWidget_New_C.ShowText
struct UToastWidget_New_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToastWidget_New.ToastWidget_New_C.SetToast
struct UToastWidget_New_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget_New.ToastWidget_New_C.PlayOutro
struct UToastWidget_New_C_PlayOutro_Params
{
};

// Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter
struct UToastWidget_New_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave
struct UToastWidget_New_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToastWidget_New.ToastWidget_New_C.HandleOutroFinished
struct UToastWidget_New_C_HandleOutroFinished_Params
{
};

// Function ToastWidget_New.ToastWidget_New_C.HandleIntroFinished
struct UToastWidget_New_C_HandleIntroFinished_Params
{
};

// Function ToastWidget_New.ToastWidget_New_C.Construct
struct UToastWidget_New_C_Construct_Params
{
};

// Function ToastWidget_New.ToastWidget_New_C.Destruct
struct UToastWidget_New_C_Destruct_Params
{
};

// Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New
struct UToastWidget_New_C_ExecuteUbergraph_ToastWidget_New_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature
struct UToastWidget_New_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
