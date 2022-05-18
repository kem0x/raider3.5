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

// Function MiniPartyBar.MiniPartyBar_C.Get Banners Tooltip Widget
struct UMiniPartyBar_C_Get_Banners_Tooltip_Widget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function MiniPartyBar.MiniPartyBar_C.HandlePartybarUIFeatureChanged
struct UMiniPartyBar_C_HandlePartybarUIFeatureChanged_Params
{
	EFortUIFeature                                     Feature;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                FeatureState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniPartyBar.MiniPartyBar_C.Construct
struct UMiniPartyBar_C_Construct_Params
{
};

// Function MiniPartyBar.MiniPartyBar_C.BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
struct UMiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MiniPartyBar.MiniPartyBar_C.ExecuteUbergraph_MiniPartyBar
struct UMiniPartyBar_C_ExecuteUbergraph_MiniPartyBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
