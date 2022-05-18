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

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.UpdateTypeIconOffset
struct USimpleSquadSlotButton_C_UpdateTypeIconOffset_Params
{
	float                                              VerticalOffset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Glow
struct USimpleSquadSlotButton_C_Update_SubType_Icon_Glow_Params
{
	bool                                               GlowIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Image
struct USimpleSquadSlotButton_C_Update_SubType_Icon_Image_Params
{
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.IsSlotEmpty
struct USimpleSquadSlotButton_C_IsSlotEmpty_Params
{
	bool                                               isEmpty;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Mark Squad Slot Seen State
struct USimpleSquadSlotButton_C_Mark_Squad_Slot_Seen_State_Params
{
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update Bang State
struct USimpleSquadSlotButton_C_Update_Bang_State_Params
{
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.GetSimpleSquadButtonTooltipWidget
struct USimpleSquadSlotButton_C_GetSimpleSquadButtonTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.PreConstruct
struct USimpleSquadSlotButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Construct
struct USimpleSquadSlotButton_C_Construct_Params
{
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
struct USimpleSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params
{
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.SquadSlotWidgetUpdated
struct USimpleSquadSlotButton_C_SquadSlotWidgetUpdated_Params
{
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.OnSelected
struct USimpleSquadSlotButton_C_OnSelected_Params
{
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
struct USimpleSquadSlotButton_C_BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.ExecuteUbergraph_SimpleSquadSlotButton
struct USimpleSquadSlotButton_C_ExecuteUbergraph_SimpleSquadSlotButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
