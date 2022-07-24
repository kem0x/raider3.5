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

// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.GetAimLocFromDeco
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimLocation                    (Parm, OutParm, IsPlainOldData)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::GetAimLocFromDeco(struct FVector* AimLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.GetAimLocFromDeco");

	AAbilityDecoTool_Athena_MissileBattery_Homing_C_GetAimLocFromDeco_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimLocation != nullptr)
		*AimLocation = params.AimLocation;
}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.HideMeshAndPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInHide                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::HideMeshAndPlacement(bool bInHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.HideMeshAndPlacement");

	AAbilityDecoTool_Athena_MissileBattery_Homing_C_HideMeshAndPlacement_Params params;
	params.bInHide = bInHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.UserConstructionScript");

	AAbilityDecoTool_Athena_MissileBattery_Homing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.HideFor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::HideFor(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.HideFor");

	AAbilityDecoTool_Athena_MissileBattery_Homing_C_HideFor_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.BPOnSetDecoObjectPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::BPOnSetDecoObjectPreview(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.BPOnSetDecoObjectPreview");

	AAbilityDecoTool_Athena_MissileBattery_Homing_C_BPOnSetDecoObjectPreview_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.Show
// (BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.Show");

	AAbilityDecoTool_Athena_MissileBattery_Homing_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.ReceiveBeginPlay");

	AAbilityDecoTool_Athena_MissileBattery_Homing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing");

	AAbilityDecoTool_Athena_MissileBattery_Homing_C_ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
