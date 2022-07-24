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

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateDetailVisibility
struct UItemInfoHeaderWidget_C_UpdateDetailVisibility_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetScrollWidget
struct UItemInfoHeaderWidget_C_SetScrollWidget_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateLocked
struct UItemInfoHeaderWidget_C_UpdateLocked_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetLocked
struct UItemInfoHeaderWidget_C_SetLocked_Params
{
	bool                                               ShouldShowLocked;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LockReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetRemainingQuantity
struct UItemInfoHeaderWidget_C_SetRemainingQuantity_Params
{
	bool                                               ShouldShowRemainingQuantity;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewRemainingQuantity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateRemainingQuantity
struct UItemInfoHeaderWidget_C_UpdateRemainingQuantity_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateCard
struct UItemInfoHeaderWidget_C_UpdateCard_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Setup
struct UItemInfoHeaderWidget_C_Setup_Params
{
	bool                                               ShouldShowCard;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  CardSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldShowDetails;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateNameText
struct UItemInfoHeaderWidget_C_UpdateNameText_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Update
struct UItemInfoHeaderWidget_C_Update_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OnItemDefinitionChanged
struct UItemInfoHeaderWidget_C_OnItemDefinitionChanged_Params
{
};

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.ExecuteUbergraph_ItemInfoHeaderWidget
struct UItemInfoHeaderWidget_C_ExecuteUbergraph_ItemInfoHeaderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
