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

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Get Squad Data
struct UExpeditionSquadSlotButton_C_Get_Squad_Data_Params
{
	struct FName                                       OutSquadId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutSquadSlotIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<EFortItemType>                              ItemTypes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.PreConstruct
struct UExpeditionSquadSlotButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.SquadSlotWidgetUpdated
struct UExpeditionSquadSlotButton_C_SquadSlotWidgetUpdated_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
struct UExpeditionSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSelected
struct UExpeditionSquadSlotButton_C_OnSelected_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature
struct UExpeditionSquadSlotButton_C_BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Construct
struct UExpeditionSquadSlotButton_C_Construct_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Destruct
struct UExpeditionSquadSlotButton_C_Destruct_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Open Squad Slot
struct UExpeditionSquadSlotButton_C_Open_Squad_Slot_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.ExecuteUbergraph_ExpeditionSquadSlotButton
struct UExpeditionSquadSlotButton_C_ExecuteUbergraph_ExpeditionSquadSlotButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotOpened__DelegateSignature_Params
{
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotUpdated__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotSelected__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
