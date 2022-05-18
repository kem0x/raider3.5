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

// Function AthenaToastWidget.AthenaToastWidget_C.StartIntro
struct UAthenaToastWidget_C_StartIntro_Params
{
};

// Function AthenaToastWidget.AthenaToastWidget_C.ShowText
struct UAthenaToastWidget_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaToastWidget.AthenaToastWidget_C.SetToast
struct UAthenaToastWidget_C_SetToast_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaToastWidget.AthenaToastWidget_C.Construct
struct UAthenaToastWidget_C_Construct_Params
{
};

// Function AthenaToastWidget.AthenaToastWidget_C.HandleIntroFinished
struct UAthenaToastWidget_C_HandleIntroFinished_Params
{
};

// Function AthenaToastWidget.AthenaToastWidget_C.HandleOutroFinished
struct UAthenaToastWidget_C_HandleOutroFinished_Params
{
};

// Function AthenaToastWidget.AthenaToastWidget_C.HandleAnimationDelay
struct UAthenaToastWidget_C_HandleAnimationDelay_Params
{
};

// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseEnter
struct UAthenaToastWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseLeave
struct UAthenaToastWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaToastWidget.AthenaToastWidget_C.ExecuteUbergraph_AthenaToastWidget
struct UAthenaToastWidget_C_ExecuteUbergraph_AthenaToastWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaToastWidget.AthenaToastWidget_C.OnFinishedToast__DelegateSignature
struct UAthenaToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
