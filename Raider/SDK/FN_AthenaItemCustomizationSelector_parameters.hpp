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

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite
struct UAthenaItemCustomizationSelector_C_ToggleFavorite_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack
struct UAthenaItemCustomizationSelector_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__ConfirmItemSelection_K2Node_ComponentBoundEvent_127_CommonButtonClicked__DelegateSignature
struct UAthenaItemCustomizationSelector_C_BndEvt__ConfirmItemSelection_K2Node_ComponentBoundEvent_127_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct
struct UAthenaItemCustomizationSelector_C_Construct_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature
struct UAthenaItemCustomizationSelector_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector
struct UAthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
