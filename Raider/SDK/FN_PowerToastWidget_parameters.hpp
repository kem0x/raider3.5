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

// Function PowerToastWidget.PowerToastWidget_C.UpdatePowerRating
struct UPowerToastWidget_C_UpdatePowerRating_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.StartIntro
struct UPowerToastWidget_C_StartIntro_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.ShowText
struct UPowerToastWidget_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PowerToastWidget.PowerToastWidget_C.SetToast
struct UPowerToastWidget_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerToastWidget.PowerToastWidget_C.Construct
struct UPowerToastWidget_C_Construct_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished
struct UPowerToastWidget_C_HandleIntroFinished_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished
struct UPowerToastWidget_C_HandleOutroFinished_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
struct UPowerToastWidget_C_HandleAnimationDelay_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
struct UPowerToastWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
struct UPowerToastWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UPowerToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged
struct UPowerToastWidget_C_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo*                        NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UPowerToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UPowerToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_0_1
struct UPowerToastWidget_C_OnTeamMemberFinishedSynchronizing_Event_0_1_Params
{
	struct FUniqueNetIdRepl                            NewTeamMemberId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PowerToastWidget.PowerToastWidget_C.HandleSynchronizeTimeout
struct UPowerToastWidget_C_HandleSynchronizeTimeout_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
struct UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature
struct UPowerToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
