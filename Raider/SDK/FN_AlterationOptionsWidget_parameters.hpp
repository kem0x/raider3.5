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

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions
struct UAlterationOptionsWidget_C_ShouldShowNoOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist
struct UAlterationOptionsWidget_C_DoAnyAlterationsExist_Params
{
	bool                                               OptionsExist;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.HandleDetailsClosed
struct UAlterationOptionsWidget_C_HandleDetailsClosed_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.HandleShouldGiveFocus
struct UAlterationOptionsWidget_C_HandleShouldGiveFocus_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GiveFocus;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateIngredientsButtonVisibility
struct UAlterationOptionsWidget_C_UpdateIngredientsButtonVisibility_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateButtonsForConfirmation
struct UAlterationOptionsWidget_C_UpdateButtonsForConfirmation_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateIngredients
struct UAlterationOptionsWidget_C_UpdateIngredients_Params
{
	TArray<struct FFortItemQuantityPair>               Ingredients;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget
struct UAlterationOptionsWidget_C_AddAlterationOptionWidget_Params
{
	EFortAlterationOptionType                          OptionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortAlterationOption*                       OptionWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize
struct UAlterationOptionsWidget_C_ClearOptionsAndInitialize_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged
struct UAlterationOptionsWidget_C_OnItemChanged_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption
struct UAlterationOptionsWidget_C_OnGenerateOption_Params
{
	EFortAlterationOptionType*                         OptionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortAlterationOption**                      OptionWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnIngredientsChanged
struct UAlterationOptionsWidget_C_OnIngredientsChanged_Params
{
	TArray<struct FFortItemQuantityPair>*              RequiredIngredients;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
struct UAlterationOptionsWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
struct UAlterationOptionsWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature
struct UAlterationOptionsWidget_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Construct
struct UAlterationOptionsWidget_C_Construct_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Destruct
struct UAlterationOptionsWidget_C_Destruct_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ConfirmationComplete
struct UAlterationOptionsWidget_C_ConfirmationComplete_Params
{
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnShouldGiveFocus
struct UAlterationOptionsWidget_C_OnShouldGiveFocus_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bGiveFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget
struct UAlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
