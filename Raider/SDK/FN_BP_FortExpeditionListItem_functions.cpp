// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Update_Bang_State(class UFortAccountItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State");

	UBP_FortExpeditionListItem_C_Update_Bang_State_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Success_Chance(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance");

	UBP_FortExpeditionListItem_C_Set_Success_Chance_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Expedition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Vehicle_Icon(class UFortExpeditionItem* Expedition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon");

	UBP_FortExpeditionListItem_C_Set_Vehicle_Icon_Params params;
	params.Expedition = Expedition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Expedition_Returns_Data(class UFortExpeditionItem* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data");

	UBP_FortExpeditionListItem_C_Set_Expedition_Returns_Data_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_In_Progress_State(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State");

	UBP_FortExpeditionListItem_C_Set_In_Progress_State_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time");

	UBP_FortExpeditionListItem_C_Set_Remaining_Expiration_Time_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Rarity(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity");

	UBP_FortExpeditionListItem_C_Set_Rarity_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Rating(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating");

	UBP_FortExpeditionListItem_C_Set_Rating_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Rewards(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards");

	UBP_FortExpeditionListItem_C_Set_Rewards_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortExpeditionItemDefinition* Item_Def                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Get_Expedition_Item_Definition(class UFortItem* Item, class UFortExpeditionItemDefinition** Item_Def)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition");

	UBP_FortExpeditionListItem_C_Get_Expedition_Item_Definition_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item_Def != nullptr)
		*Item_Def = params.Item_Def;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Set_Name(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name");

	UBP_FortExpeditionListItem_C_Set_Name_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Expedition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::Setup_Base_Item_Data(class UFortExpeditionItem* Expedition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data");

	UBP_FortExpeditionListItem_C_Setup_Base_Item_Data_Params params;
	params.Expedition = Expedition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnListItemObjectSet");

	UBP_FortExpeditionListItem_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionListItem_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnSelected");

	UBP_FortExpeditionListItem_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged");

	UBP_FortExpeditionListItem_C_OnItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionListItem_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnDeselected");

	UBP_FortExpeditionListItem_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature");

	UBP_FortExpeditionListItem_C_BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionListItem_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnHovered");

	UBP_FortExpeditionListItem_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionListItem_C::ExecuteUbergraph_BP_FortExpeditionListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem");

	UBP_FortExpeditionListItem_C_ExecuteUbergraph_BP_FortExpeditionListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
