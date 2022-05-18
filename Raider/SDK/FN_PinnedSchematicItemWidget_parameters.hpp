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

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleCursorModeChanged
struct UPinnedSchematicItemWidget_C_HandleCursorModeChanged_Params
{
	bool                                               CursorModeEnabled;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentWidget;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.UnbindDelegates
struct UPinnedSchematicItemWidget_C_UnbindDelegates_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ClearPinnedSchematic
struct UPinnedSchematicItemWidget_C_ClearPinnedSchematic_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleItemChanged
struct UPinnedSchematicItemWidget_C_HandleItemChanged_Params
{
	bool                                               ItemChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AmmoChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IngredientsChanged;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetupIngredients
struct UPinnedSchematicItemWidget_C_SetupIngredients_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleWorldItemListChanged
struct UPinnedSchematicItemWidget_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleOnSchematicUnlocked
struct UPinnedSchematicItemWidget_C_HandleOnSchematicUnlocked_Params
{
	class UFortSchematicItem*                          Schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.BindDelegates
struct UPinnedSchematicItemWidget_C_BindDelegates_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetPinnedSchematic
struct UPinnedSchematicItemWidget_C_SetPinnedSchematic_Params
{
	class UFortSchematicItem*                          NewPinnedSchematic;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.Refresh
struct UPinnedSchematicItemWidget_C_Refresh_Params
{
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.PinButton_Clicked
struct UPinnedSchematicItemWidget_C_PinButton_Clicked_Params
{
	class UFortBaseButton*                             NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ExecuteUbergraph_PinnedSchematicItemWidget
struct UPinnedSchematicItemWidget_C_ExecuteUbergraph_PinnedSchematicItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
