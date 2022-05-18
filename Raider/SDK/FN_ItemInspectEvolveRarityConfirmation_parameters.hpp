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

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.Get Temp Item Based on Current Level
struct UItemInspectEvolveRarityConfirmation_C_Get_Temp_Item_Based_on_Current_Level_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   NewItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetEvolutionRestrictions
struct UItemInspectEvolveRarityConfirmation_C_SetEvolutionRestrictions_Params
{
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.ClearEvolutionRepresented
struct UItemInspectEvolveRarityConfirmation_C_ClearEvolutionRepresented_Params
{
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnShow
struct UItemInspectEvolveRarityConfirmation_C_OnShow_Params
{
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.GetNumEvolutionOptions
struct UItemInspectEvolveRarityConfirmation_C_GetNumEvolutionOptions_Params
{
	int                                                NumRecipes;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetupEvolutionOptions
struct UItemInspectEvolveRarityConfirmation_C_SetupEvolutionOptions_Params
{
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.HandleEvolutionOptionSelected
struct UItemInspectEvolveRarityConfirmation_C_HandleEvolutionOptionSelected_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetEvolutionToRepresent
struct UItemInspectEvolveRarityConfirmation_C_SetEvolutionToRepresent_Params
{
	int                                                EvolutionIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   EvolutionItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetItemToRepresent
struct UItemInspectEvolveRarityConfirmation_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UItemInspectEvolveRarityConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.Construct
struct UItemInspectEvolveRarityConfirmation_C_Construct_Params
{
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.ExecuteUbergraph_ItemInspectEvolveRarityConfirmation
struct UItemInspectEvolveRarityConfirmation_C_ExecuteUbergraph_ItemInspectEvolveRarityConfirmation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionSelected__DelegateSignature
struct UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionSelected__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature
struct UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionUnhovered__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionHovered__DelegateSignature
struct UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionHovered__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionConfirm__DelegateSignature
struct UItemInspectEvolveRarityConfirmation_C_OnEvolutionConfirm__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
