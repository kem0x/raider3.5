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

// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.HideMeshAndPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InHide                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_AirStrike_C::HideMeshAndPlacement(bool InHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.HideMeshAndPlacement");

	AAbilityDecoTool_AirStrike_C_HideMeshAndPlacement_Params params;
	params.InHide = InHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.PopulatePositionArrays
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_AirStrike_C::PopulatePositionArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.PopulatePositionArrays");

	AAbilityDecoTool_AirStrike_C_PopulatePositionArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_AirStrike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.UserConstructionScript");

	AAbilityDecoTool_AirStrike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAbilityDecoTool_AirStrike_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.ReceiveBeginPlay");

	AAbilityDecoTool_AirStrike_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.BPOnSetDecoObjectPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_AirStrike_C::BPOnSetDecoObjectPreview(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.BPOnSetDecoObjectPreview");

	AAbilityDecoTool_AirStrike_C_BPOnSetDecoObjectPreview_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_AirStrike_C::BPPressSecondaryFire(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.BPPressSecondaryFire");

	AAbilityDecoTool_AirStrike_C_BPPressSecondaryFire_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.PassInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Power_Level                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_AirStrike_C::PassInfo(int Power_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.PassInfo");

	AAbilityDecoTool_AirStrike_C_PassInfo_Params params;
	params.Power_Level = Power_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.HideFor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_AirStrike_C::HideFor(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.HideFor");

	AAbilityDecoTool_AirStrike_C_HideFor_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.Show
// (BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_AirStrike_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.Show");

	AAbilityDecoTool_AirStrike_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.ExecuteUbergraph_AbilityDecoTool_AirStrike
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_AirStrike_C::ExecuteUbergraph_AbilityDecoTool_AirStrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.ExecuteUbergraph_AbilityDecoTool_AirStrike");

	AAbilityDecoTool_AirStrike_C_ExecuteUbergraph_AbilityDecoTool_AirStrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
