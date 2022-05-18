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

// Function QuantitySelector.QuantitySelector_C.SetCurrentValue
struct UQuantitySelector_C_SetCurrentValue_Params
{
	int                                                NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.GetCurrentValue
struct UQuantitySelector_C_GetCurrentValue_Params
{
	int                                                CurrentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.SetupForInputMode
struct UQuantitySelector_C_SetupForInputMode_Params
{
	bool                                               IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.SliderValueChanged
struct UQuantitySelector_C_SliderValueChanged_Params
{
};

// Function QuantitySelector.QuantitySelector_C.HandleCancelPressed
struct UQuantitySelector_C_HandleCancelPressed_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.HandleTransferPressed
struct UQuantitySelector_C_HandleTransferPressed_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.HandleMaxPressed
struct UQuantitySelector_C_HandleMaxPressed_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.CloseSelector
struct UQuantitySelector_C_CloseSelector_Params
{
};

// Function QuantitySelector.QuantitySelector_C.SetAdditionalText
struct UQuantitySelector_C_SetAdditionalText_Params
{
	struct FText                                       AdditionalInfoText;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function QuantitySelector.QuantitySelector_C.SetSplitData
struct UQuantitySelector_C_SetSplitData_Params
{
	int                                                StartingCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       AdditionalInfoText;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function QuantitySelector.QuantitySelector_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature
struct UQuantitySelector_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature
struct UQuantitySelector_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature
struct UQuantitySelector_C_BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature
struct UQuantitySelector_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.OnActivated
struct UQuantitySelector_C_OnActivated_Params
{
};

// Function QuantitySelector.QuantitySelector_C.Construct
struct UQuantitySelector_C_Construct_Params
{
};

// Function QuantitySelector.QuantitySelector_C.HandleChangeInputMode
struct UQuantitySelector_C_HandleChangeInputMode_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.Destruct
struct UQuantitySelector_C_Destruct_Params
{
};

// Function QuantitySelector.QuantitySelector_C.ExecuteUbergraph_QuantitySelector
struct UQuantitySelector_C_ExecuteUbergraph_QuantitySelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.OnStackValueChangedDispatcher__DelegateSignature
struct UQuantitySelector_C_OnStackValueChangedDispatcher__DelegateSignature_Params
{
	int                                                NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   FortItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuantitySelector.QuantitySelector_C.OnButtonClickedDispatcher__DelegateSignature
struct UQuantitySelector_C_OnButtonClickedDispatcher__DelegateSignature_Params
{
	int                                                ChosenValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   FortItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
