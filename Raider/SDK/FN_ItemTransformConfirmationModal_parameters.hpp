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

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Cleanup Confirmation Widget
struct UItemTransformConfirmationModal_C_Cleanup_Confirmation_Widget_Params
{
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Setup Transform MCP Binds
struct UItemTransformConfirmationModal_C_Setup_Transform_MCP_Binds_Params
{
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.UpdateTransformInfo
struct UItemTransformConfirmationModal_C_UpdateTransformInfo_Params
{
	class UFortItem*                                   TransformKey;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           SacrificeItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SacrificePoints;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnActivated
struct UItemTransformConfirmationModal_C_OnActivated_Params
{
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.PreConstruct
struct UItemTransformConfirmationModal_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Handle Transform Succeeded
struct UItemTransformConfirmationModal_C_Handle_Transform_Succeeded_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       TransmoggedItems;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>       RecycledItems;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.Handle Transform Failed
struct UItemTransformConfirmationModal_C_Handle_Transform_Failed_Params
{
	struct FText                                       ErrorMessage;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.ExecuteUbergraph_ItemTransformConfirmationModal
struct UItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnConfirm__DelegateSignature
struct UItemTransformConfirmationModal_C_OnConfirm__DelegateSignature_Params
{
};

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.OnCancel__DelegateSignature
struct UItemTransformConfirmationModal_C_OnCancel__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
