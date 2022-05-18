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

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdatePageCompletionWidget
struct UCollectionBookPageListWidget_C_UpdatePageCompletionWidget_Params
{
	int                                                FilledSlots;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalSlots;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsWidget
struct UCollectionBookPageListWidget_C_UpdateAvailableSlotsWidget_Params
{
	int                                                NumAvailableSlots;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
struct UCollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors_Params
{
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
struct UCollectionBookPageListWidget_C_SetupAsCategory_Params
{
	class UFortCollectionBookCategory**                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
struct UCollectionBookPageListWidget_C_SetupAsPage_Params
{
	class UFortCollectionBookPage**                    Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
struct UCollectionBookPageListWidget_C_OnExpansionChanged_Params
{
	bool*                                              bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
struct UCollectionBookPageListWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
struct UCollectionBookPageListWidget_C_OnPageDetailsUpdated_Params
{
	int*                                               AvailableSlots;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               FilledSlots;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalSlots;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortCollectionBookState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
struct UCollectionBookPageListWidget_C_OnSelectionChanged_Params
{
	class UCommonButton*                               ThisButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnCategoryDetailsUpdated
struct UCollectionBookPageListWidget_C_OnCategoryDetailsUpdated_Params
{
	int*                                               AvailableSlots;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               FilledSlots;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalSlots;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
struct UCollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
