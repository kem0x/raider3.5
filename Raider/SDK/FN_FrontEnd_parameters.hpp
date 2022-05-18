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

// Function Frontend.FrontEnd_C.UpdateVaultCameraZoom
struct AFrontEnd_C_UpdateVaultCameraZoom_Params
{
	EFrontEndCamera                                    InCameraType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.ProcessTouchInput
struct AFrontEnd_C_ProcessTouchInput_Params
{
};

// Function Frontend.FrontEnd_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4
struct AFrontEnd_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Frontend.FrontEnd_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3
struct AFrontEnd_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Frontend.FrontEnd_C.InpTchEvt_Moved
struct AFrontEnd_C_InpTchEvt_Moved_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.InpTchEvt_Released
struct AFrontEnd_C_InpTchEvt_Released_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.InpTchEvt_Pressed
struct AFrontEnd_C_InpTchEvt_Pressed_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_2
struct AFrontEnd_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Frontend.FrontEnd_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_1
struct AFrontEnd_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Frontend.FrontEnd_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4_5
struct AFrontEnd_C_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4_5_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.ResetRotation
struct AFrontEnd_C_ResetRotation_Params
{
};

// Function Frontend.FrontEnd_C.StoreInitialRotation
struct AFrontEnd_C_StoreInitialRotation_Params
{
};

// Function Frontend.FrontEnd_C.ReceiveTick
struct AFrontEnd_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.OnMatchStarted
struct AFrontEnd_C_OnMatchStarted_Params
{
};

// Function Frontend.FrontEnd_C.EnableTutorial
struct AFrontEnd_C_EnableTutorial_Params
{
};

// Function Frontend.FrontEnd_C.ReceiveBeginPlay
struct AFrontEnd_C_ReceiveBeginPlay_Params
{
};

// Function Frontend.FrontEnd_C.UnlockCameraTargetMovement
struct AFrontEnd_C_UnlockCameraTargetMovement_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.UnlockItemMovement
struct AFrontEnd_C_UnlockItemMovement_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.BindFrontendEvents
struct AFrontEnd_C_BindFrontendEvents_Params
{
};

// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
struct AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
