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

// Function ErrorEntry.ErrorEntry_C.Center On Widget
struct UErrorEntry_C_Center_On_Widget_Params
{
	bool                                               Did_Center;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ErrorEntry.ErrorEntry_C.SetErrorInfo
struct UErrorEntry_C_SetErrorInfo_Params
{
	struct FFortErrorInfo                              ErrorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ErrorEntry.ErrorEntry_C.GetButtonVisibility
struct UErrorEntry_C_GetButtonVisibility_Params
{
	ESlateVisibility                                   NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ErrorEntry.ErrorEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
struct UErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ErrorEntry.ErrorEntry_C.Construct
struct UErrorEntry_C_Construct_Params
{
};

// Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry
struct UErrorEntry_C_ExecuteUbergraph_ErrorEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
