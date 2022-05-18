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

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshLevelInfo
struct UItemInspectUpgradeConfirmation_C_RefreshLevelInfo_Params
{
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshEnabledState
struct UItemInspectUpgradeConfirmation_C_RefreshEnabledState_Params
{
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.CanAffordUpgrade
struct UItemInspectUpgradeConfirmation_C_CanAffordUpgrade_Params
{
	bool                                               CanAfford;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.IsUpgradeAvailable
struct UItemInspectUpgradeConfirmation_C_IsUpgradeAvailable_Params
{
	bool                                               UpgradeAvailable;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.RefreshOnUpgrade
struct UItemInspectUpgradeConfirmation_C_RefreshOnUpgrade_Params
{
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnShow
struct UItemInspectUpgradeConfirmation_C_OnShow_Params
{
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.SetItemToRepresent
struct UItemInspectUpgradeConfirmation_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.Refresh
struct UItemInspectUpgradeConfirmation_C_Refresh_Params
{
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UItemInspectUpgradeConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UItemInspectUpgradeConfirmation_C_BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.ExecuteUbergraph_ItemInspectUpgradeConfirmation
struct UItemInspectUpgradeConfirmation_C_ExecuteUbergraph_ItemInspectUpgradeConfirmation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeCancel__DelegateSignature
struct UItemInspectUpgradeConfirmation_C_OnUpgradeCancel__DelegateSignature_Params
{
};

// Function ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C.OnUpgradeConfirm__DelegateSignature
struct UItemInspectUpgradeConfirmation_C_OnUpgradeConfirm__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
