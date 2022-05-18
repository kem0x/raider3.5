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

// Function CustomFilterModal.CustomFilterModal_C.Construct
struct UCustomFilterModal_C_Construct_Params
{
};

// Function CustomFilterModal.CustomFilterModal_C.HandleFilterToggled
struct UCustomFilterModal_C_HandleFilterToggled_Params
{
	EFortInventoryCustomFilter                         Filter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomFilterModal.CustomFilterModal_C.Destruct
struct UCustomFilterModal_C_Destruct_Params
{
};

// Function CustomFilterModal.CustomFilterModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature
struct UCustomFilterModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomFilterModal.CustomFilterModal_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UCustomFilterModal_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomFilterModal.CustomFilterModal_C.OnActivated
struct UCustomFilterModal_C_OnActivated_Params
{
};

// Function CustomFilterModal.CustomFilterModal_C.ExecuteUbergraph_CustomFilterModal
struct UCustomFilterModal_C_ExecuteUbergraph_CustomFilterModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
