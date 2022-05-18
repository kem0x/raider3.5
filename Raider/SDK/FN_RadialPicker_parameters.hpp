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

// Function RadialPicker.RadialPicker_C.On Item Touched
struct URadialPicker_C_On_Item_Touched_Params
{
	class URadialPickerItem_C*                         Touched_Item;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.SetShowMouseCursor
struct URadialPicker_C_SetShowMouseCursor_Params
{
	bool                                               InShowMouseCursor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.SetPointerDirection
struct URadialPicker_C_SetPointerDirection_Params
{
};

// Function RadialPicker.RadialPicker_C.IsGamepadInPickerDeadZone
struct URadialPicker_C_IsGamepadInPickerDeadZone_Params
{
	bool                                               bIsInDeadZone;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.MoveActiveOption
struct URadialPicker_C_MoveActiveOption_Params
{
	int                                                MoveOptionDirection;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.ResetInput
struct URadialPicker_C_ResetInput_Params
{
};

// Function RadialPicker.RadialPicker_C.CanConfirm
struct URadialPicker_C_CanConfirm_Params
{
	bool                                               CanAccept;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.SetInputMode
struct URadialPicker_C_SetInputMode_Params
{
};

// Function RadialPicker.RadialPicker_C.SetActiveOption
struct URadialPicker_C_SetActiveOption_Params
{
	int                                                Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.ClearActiveOption
struct URadialPicker_C_ClearActiveOption_Params
{
};

// Function RadialPicker.RadialPicker_C.GetOptionAngle
struct URadialPicker_C_GetOptionAngle_Params
{
	int                                                Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.GetAngleDifference
struct URadialPicker_C_GetAngleDifference_Params
{
	float                                              AngleA;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleB;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.GetOptionPosition
struct URadialPicker_C_GetOptionPosition_Params
{
	int                                                Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.InitializePicker
struct URadialPicker_C_InitializePicker_Params
{
	EFortPickerMode                                    PickerMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.Event AcceptOption
struct URadialPicker_C_Event_AcceptOption_Params
{
};

// Function RadialPicker.RadialPicker_C.Event CancelPicker
struct URadialPicker_C_Event_CancelPicker_Params
{
};

// Function RadialPicker.RadialPicker_C.Tick
struct URadialPicker_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.Construct
struct URadialPicker_C_Construct_Params
{
};

// Function RadialPicker.RadialPicker_C.ClosePicker
struct URadialPicker_C_ClosePicker_Params
{
};

// Function RadialPicker.RadialPicker_C.AcceptChosenOption
struct URadialPicker_C_AcceptChosenOption_Params
{
	int                                                PickerOption;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.OnPickerRefreshItems
struct URadialPicker_C_OnPickerRefreshItems_Params
{
};

// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On Item Touched__DelegateSignature
struct URadialPicker_C_BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On Item Touched__DelegateSignature
struct URadialPicker_C_BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On Item Touched__DelegateSignature
struct URadialPicker_C_BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On Item Touched__DelegateSignature
struct URadialPicker_C_BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On Item Touched__DelegateSignature
struct URadialPicker_C_BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On Item Touched__DelegateSignature
struct URadialPicker_C_BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On Item Touched__DelegateSignature
struct URadialPicker_C_BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On Item Touched__DelegateSignature
struct URadialPicker_C_BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.ExecuteUbergraph_RadialPicker
struct URadialPicker_C_ExecuteUbergraph_RadialPicker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.Picker Closing__DelegateSignature
struct URadialPicker_C_Picker_Closing__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
