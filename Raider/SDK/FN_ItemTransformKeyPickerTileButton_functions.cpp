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

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*   FortPC                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::Get_Fort_PC(class AFortPlayerController** FortPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC");

	UItemTransformKeyPickerTileButton_C_Get_Fort_PC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPC != nullptr)
		*FortPC = params.FortPC;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UItemTransformKeyPickerTileButton_C::Get_Transform_Key_Catalysts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts");

	UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item As Seen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::Mark_Item_As_Seen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item As Seen");

	UItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConsumedOnConversion          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::Is_Transform_Key_Consumable(bool* bConsumedOnConversion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable");

	UItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bConsumedOnConversion != nullptr)
		*bConsumedOnConversion = params.bConsumedOnConversion;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAccountItem*        AsFort_Account_Item            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::Get_Transform_Key(class UFortAccountItem** AsFort_Account_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key");

	UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Account_Item != nullptr)
		*AsFort_Account_Item = params.AsFort_Account_Item;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::Update_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State");

	UItemTransformKeyPickerTileButton_C_Update_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                InData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonListView**        OwningList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::SetData(class UObject** InData, class UCommonListView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.SetData");

	UItemTransformKeyPickerTileButton_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnSelected");

	UItemTransformKeyPickerTileButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnHovered");

	UItemTransformKeyPickerTileButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::ExecuteUbergraph_ItemTransformKeyPickerTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton");

	UItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
