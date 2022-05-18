// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AbilitiesPage.AbilitiesPage_C.HandleInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilitiesPage_C::HandleInventory(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.HandleInventory");

	UAbilitiesPage_C_HandleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AbilitiesPage.AbilitiesPage_C.UpdateAbilityMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGadgetItemDefinition* inGadgetItemDef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitiesPage_C::UpdateAbilityMovie(class UFortGadgetItemDefinition* inGadgetItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.UpdateAbilityMovie");

	UAbilitiesPage_C_UpdateAbilityMovie_Params params;
	params.inGadgetItemDef = inGadgetItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.InitializeAbilityTiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAbilitiesPage_C::InitializeAbilityTiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.InitializeAbilityTiles");

	UAbilitiesPage_C_InitializeAbilityTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.AddTilesToButtonGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            ButtonContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbilitiesPage_C::AddTilesToButtonGroup(class UVerticalBox* ButtonContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.AddTilesToButtonGroup");

	UAbilitiesPage_C_AddTilesToButtonGroup_Params params;
	params.ButtonContainer = ButtonContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.HandleSelectedButtonChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           InSelectedButton               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InSelectedButtonIndex          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitiesPage_C::HandleSelectedButtonChanged(class UCommonButton* InSelectedButton, int InSelectedButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.HandleSelectedButtonChanged");

	UAbilitiesPage_C_HandleSelectedButtonChanged_Params params;
	params.InSelectedButton = InSelectedButton;
	params.InSelectedButtonIndex = InSelectedButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.OnAbilitySelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AbilityButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbilitiesPage_C::OnAbilitySelected(class UCommonButton* AbilityButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.OnAbilitySelected");

	UAbilitiesPage_C_OnAbilitySelected_Params params;
	params.AbilityButton = AbilityButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilitiesPage_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.HandleBack");

	UAbilitiesPage_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AbilitiesPage.AbilitiesPage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbilitiesPage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.OnActivated");

	UAbilitiesPage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.OnQuickbarContentsChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ChangedSlots                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAbilitiesPage_C::OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex, TArray<int> ChangedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.OnQuickbarContentsChanged");

	UAbilitiesPage_C_OnQuickbarContentsChanged_Params params;
	params.QuickbarIndex = QuickbarIndex;
	params.ChangedSlots = ChangedSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAbilitiesPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.Construct");

	UAbilitiesPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbilitiesPage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.OnDeactivated");

	UAbilitiesPage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPage.AbilitiesPage_C.ExecuteUbergraph_AbilitiesPage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitiesPage_C::ExecuteUbergraph_AbilitiesPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPage.AbilitiesPage_C.ExecuteUbergraph_AbilitiesPage");

	UAbilitiesPage_C_ExecuteUbergraph_AbilitiesPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
