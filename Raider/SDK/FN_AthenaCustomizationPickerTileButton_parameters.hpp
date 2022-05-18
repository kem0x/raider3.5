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

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen
struct UAthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen_Params
{
};

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState
struct UAthenaCustomizationPickerTileButton_C_UpdateBangState_Params
{
};

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.SetData
struct UAthenaCustomizationPickerTileButton_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnSelected
struct UAthenaCustomizationPickerTileButton_C_OnSelected_Params
{
};

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.Construct
struct UAthenaCustomizationPickerTileButton_C_Construct_Params
{
};

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton
struct UAthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
