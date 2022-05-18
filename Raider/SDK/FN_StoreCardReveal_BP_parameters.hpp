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

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText
struct AStoreCardReveal_BP_C_RarityEnumToText_Params
{
	EFortRarity                                        InRarity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutRarity;                                                // (Parm, OutParm)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender
struct AStoreCardReveal_BP_C_IsDefender_Params
{
	class UFortAccountItemDefinition*                  Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDefender;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB
struct AStoreCardReveal_BP_C_SetText_CCB_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA
struct AStoreCardReveal_BP_C_SetText_CCA_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript
struct AStoreCardReveal_BP_C_UserConstructionScript_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardExit__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardExit__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc
struct AStoreCardReveal_BP_C_TL_CardExit__Proceed__EventFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardFlipToFront__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardFlipToFront__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardUpgradeFast__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardUpgradeFast__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc
struct AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc
struct AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc
struct AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc
struct AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_FlareFX__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_FlareFX__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CameraFOV__EventFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCA_Reveal__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCA_Reveal__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCB_Reveal__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCB_Reveal__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__ChangeTexture__EventFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardMoveToScreen__FinishedFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardMoveToScreen__UpdateFunc_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990
struct AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7181AC990_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6
struct AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F
struct AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B51198EA0F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379
struct AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7CD6D1379_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_2
struct AStoreCardReveal_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released
struct AStoreCardReveal_BP_C_InpTchEvt_Released_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed
struct AStoreCardReveal_BP_C_InpTchEvt_Pressed_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0_1
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged
struct AStoreCardReveal_BP_C_OnStoreStateChanged_Params
{
	EFortStoreState                                    NewStoreState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen
struct AStoreCardReveal_BP_C_StartPackOpen_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart
struct AStoreCardReveal_BP_C_CardEnterStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart
struct AStoreCardReveal_BP_C_PackDestroyStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart
struct AStoreCardReveal_BP_C_CardFlipStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart
struct AStoreCardReveal_BP_C_CardExitStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward
struct AStoreCardReveal_BP_C_TurnOffFastForward_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart
struct AStoreCardReveal_BP_C_CardBackRevealStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart
struct AStoreCardReveal_BP_C_CardFrontRevealStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward
struct AStoreCardReveal_BP_C_TurnOnFastForward_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor
struct AStoreCardReveal_BP_C_EnableMouseInputOnActor_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay
struct AStoreCardReveal_BP_C_ReceiveBeginPlay_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart
struct AStoreCardReveal_BP_C_CardPackStoreStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort
struct AStoreCardReveal_BP_C_SpecialCardPauseAbort_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart
struct AStoreCardReveal_BP_C_PresentChoiceStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart
struct AStoreCardReveal_BP_C_ChoiceMadeStart_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack
struct AStoreCardReveal_BP_C_SkipBackRevealForChoicePack_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess
struct AStoreCardReveal_BP_C_ContinueFinalChoiceCardProcess_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront
struct AStoreCardReveal_BP_C_ConstructCardFront_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim
struct AStoreCardReveal_BP_C_StopCCA_AmbientAnim_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards
struct AStoreCardReveal_BP_C_GetReadyToShowCards_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims
struct AStoreCardReveal_BP_C_Stop_CC_HoverAnims_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA
struct AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardA_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA
struct AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardA_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A
struct AStoreCardReveal_BP_C_HoverStart_CC_A_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A
struct AStoreCardReveal_BP_C_HoverEnd_CC_A_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB
struct AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardB_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB
struct AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardB_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B
struct AStoreCardReveal_BP_C_HoverStart_CC_B_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B
struct AStoreCardReveal_BP_C_HoverEnd_CC_B_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus
struct AStoreCardReveal_BP_C_CheckHoverStatus_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim
struct AStoreCardReveal_BP_C_RestartCCA_AmbientAnim_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim
struct AStoreCardReveal_BP_C_StopCCB_AmbientAnim_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim
struct AStoreCardReveal_BP_C_RestartCCB_AmbientAnim_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks
struct AStoreCardReveal_BP_C_EnableOpenAllPacks_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace
struct AStoreCardReveal_BP_C_CardInPlace_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity
struct AStoreCardReveal_BP_C_CompareRarity_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim
struct AStoreCardReveal_BP_C_PlayUpgradeAnim_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome
struct AStoreCardReveal_BP_C_ReadyForCardToCome_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0_1
struct AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed
struct AStoreCardReveal_BP_C_Handle_Input_Mode_Changed_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore
struct AStoreCardReveal_BP_C_ExitPackStore_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput
struct AStoreCardReveal_BP_C_ResetGamepadInput_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate
struct AStoreCardReveal_BP_C_OpenGamepadGate_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate
struct AStoreCardReveal_BP_C_CloseGamepadGate_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim
struct AStoreCardReveal_BP_C_EndQuestionMarkAnim_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor
struct AStoreCardReveal_BP_C_SetCCRarityColor_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady
struct AStoreCardReveal_BP_C_CCRarityColorReady_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40_41
struct AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40_41_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata
struct AStoreCardReveal_BP_C_InitiatePinata_Params
{
};

// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP
struct AStoreCardReveal_BP_C_ExecuteUbergraph_StoreCardReveal_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
