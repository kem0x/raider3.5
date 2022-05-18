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

// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BannerEditorTile_C::Mark_Item_As_Seen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen");

	UBP_BannerEditorTile_C_Mark_Item_As_Seen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BannerEditorTile_C::Update_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State");

	UBP_BannerEditorTile_C_Update_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                InData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonListView**        OwningList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BannerEditorTile_C::SetData(class UObject** InData, class UCommonListView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.SetData");

	UBP_BannerEditorTile_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_BannerEditorTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct");

	UBP_BannerEditorTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BannerEditorTile_C::HandleBannerIconLoadGuardFinished(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished");

	UBP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UBP_BannerEditorTile_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnSelected");

	UBP_BannerEditorTile_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UBP_BannerEditorTile_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnHovered");

	UBP_BannerEditorTile_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BannerEditorTile_C::ExecuteUbergraph_BP_BannerEditorTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile");

	UBP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BannerEditorTile_C::BannerTileBangUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature");

	UBP_BannerEditorTile_C_BannerTileBangUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
