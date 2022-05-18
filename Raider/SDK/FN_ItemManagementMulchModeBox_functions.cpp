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

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementMulchModeBox_C::HandleLeaveInventory(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory");

	UItemManagementMulchModeBox_C_HandleLeaveInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementMulchModeBox_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging");

	UItemManagementMulchModeBox_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementMulchModeBox_C::HandleMulchListChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged");

	UItemManagementMulchModeBox_C_HandleMulchListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pass_Through                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementMulchModeBox_C::HandleInfo(bool* Pass_Through)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo");

	UItemManagementMulchModeBox_C_HandleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pass_Through != nullptr)
		*Pass_Through = params.Pass_Through;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementMulchModeBox_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack");

	UItemManagementMulchModeBox_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleDifferentItemToDetailSetBP
// (Event, Protected, BlueprintEvent)

void UItemManagementMulchModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleDifferentItemToDetailSetBP");

	UItemManagementMulchModeBox_C_HandleDifferentItemToDetailSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementMulchModeBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Construct");

	UItemManagementMulchModeBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemManagementMulchModeBox_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.OnActivated");

	UItemManagementMulchModeBox_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementMulchModeBox_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Destruct");

	UItemManagementMulchModeBox_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementMulchModeBox_C::ExecuteUbergraph_ItemManagementMulchModeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox");

	UItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
