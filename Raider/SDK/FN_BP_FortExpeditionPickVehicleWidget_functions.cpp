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

// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Pre Select for Console
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::Pre_Select_for_Console()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Pre Select for Console");

	UBP_FortExpeditionPickVehicleWidget_C_Pre_Select_for_Console_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Determine Available Expedition Squads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   RequirementTags                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_FortExpeditionPickVehicleWidget_C::Determine_Available_Expedition_Squads(const struct FGameplayTagContainer& RequirementTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Determine Available Expedition Squads");

	UBP_FortExpeditionPickVehicleWidget_C_Determine_Available_Expedition_Squads_Params params;
	params.RequirementTags = RequirementTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Get Expedition Item Definition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               ItemDef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortExpeditionItemDefinition* AsFort_Expedition_Item_Definition (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::Get_Expedition_Item_Definition(class UFortItem* ItemDef, class UFortExpeditionItemDefinition** AsFort_Expedition_Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Get Expedition Item Definition");

	UBP_FortExpeditionPickVehicleWidget_C_Get_Expedition_Item_Definition_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Expedition_Item_Definition != nullptr)
		*AsFort_Expedition_Item_Definition = params.AsFort_Expedition_Item_Definition;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::Setup_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Setup Input Action Handlers");

	UBP_FortExpeditionPickVehicleWidget_C_Setup_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleBack");

	UBP_FortExpeditionPickVehicleWidget_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.Construct");

	UBP_FortExpeditionPickVehicleWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    InItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::SetData(class UFortExpeditionItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.SetData");

	UBP_FortExpeditionPickVehicleWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnActivated");

	UBP_FortExpeditionPickVehicleWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature");

	UBP_FortExpeditionPickVehicleWidget_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehicleSelected(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleSelected");

	UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleSelected_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HACK_GetMeOutOfSelectContext
// (BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionPickVehicleWidget_C::HACK_GetMeOutOfSelectContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HACK_GetMeOutOfSelectContext");

	UBP_FortExpeditionPickVehicleWidget_C_HACK_GetMeOutOfSelectContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehicleButtonHovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehicleButtonHovered");

	UBP_FortExpeditionPickVehicleWidget_C_HandleVehicleButtonHovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehcileButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::HandleVehcileButtonUnhovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.HandleVehcileButtonUnhovered");

	UBP_FortExpeditionPickVehicleWidget_C_HandleVehcileButtonUnhovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget");

	UBP_FortExpeditionPickVehicleWidget_C_ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnVehicleSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionPickVehicleWidget_C::OnVehicleSelected__DelegateSignature(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnVehicleSelected__DelegateSignature");

	UBP_FortExpeditionPickVehicleWidget_C_OnVehicleSelected__DelegateSignature_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
