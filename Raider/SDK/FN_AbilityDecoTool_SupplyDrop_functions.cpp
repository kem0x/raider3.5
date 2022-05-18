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

// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideMeshAndPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInHide                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_SupplyDrop_C::HideMeshAndPlacement(bool bInHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideMeshAndPlacement");

	AAbilityDecoTool_SupplyDrop_C_HideMeshAndPlacement_Params params;
	params.bInHide = bInHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_SupplyDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.UserConstructionScript");

	AAbilityDecoTool_SupplyDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.BPOnSetDecoObjectPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_SupplyDrop_C::BPOnSetDecoObjectPreview(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.BPOnSetDecoObjectPreview");

	AAbilityDecoTool_SupplyDrop_C_BPOnSetDecoObjectPreview_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.Show
// (BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_SupplyDrop_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.Show");

	AAbilityDecoTool_SupplyDrop_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideFor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_SupplyDrop_C::HideFor(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideFor");

	AAbilityDecoTool_SupplyDrop_C_HideFor_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.ExecuteUbergraph_AbilityDecoTool_SupplyDrop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_SupplyDrop_C::ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.ExecuteUbergraph_AbilityDecoTool_SupplyDrop");

	AAbilityDecoTool_SupplyDrop_C_ExecuteUbergraph_AbilityDecoTool_SupplyDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
