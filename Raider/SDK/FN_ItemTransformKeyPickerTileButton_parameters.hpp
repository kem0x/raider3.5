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

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC
struct UItemTransformKeyPickerTileButton_C_Get_Fort_PC_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts
struct UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item As Seen
struct UItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen_Params
{
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable
struct UItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable_Params
{
	bool                                               bConsumedOnConversion;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key
struct UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Params
{
	class UFortAccountItem*                            AsFort_Account_Item;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State
struct UItemTransformKeyPickerTileButton_C_Update_Bang_State_Params
{
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnListItemObjectSet
struct UItemTransformKeyPickerTileButton_C_OnListItemObjectSet_Params
{
	class UObject**                                    ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.BP_OnSelected
struct UItemTransformKeyPickerTileButton_C_BP_OnSelected_Params
{
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.BP_OnHovered
struct UItemTransformKeyPickerTileButton_C_BP_OnHovered_Params
{
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton
struct UItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
