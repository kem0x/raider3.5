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

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Kill Emitters and Start Times
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::Kill_Emitters_and_Start_Times()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Kill Emitters and Start Times");

	AB_Placement_Preview_AirStrike_C_Kill_Emitters_and_Start_Times_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.UserConstructionScript");

	AB_Placement_Preview_AirStrike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__FinishedFunc
// (BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::Spawn_Arrow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__FinishedFunc");

	AB_Placement_Preview_AirStrike_C_Spawn_Arrow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__UpdateFunc
// (BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::Spawn_Arrow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__UpdateFunc");

	AB_Placement_Preview_AirStrike_C_Spawn_Arrow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnBounceMotionUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         VectorScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_AirStrike_C::OnBounceMotionUpdate(float* VectorScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnBounceMotionUpdate");

	AB_Placement_Preview_AirStrike_C_OnBounceMotionUpdate_Params params;
	params.VectorScale = VectorScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnInitializeDecoPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingActor**         NewBuildingActor               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortDecoItemDefinition** NewDecoItemDefinition          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_AirStrike_C::OnInitializeDecoPreview(class ABuildingActor** NewBuildingActor, class UFortDecoItemDefinition** NewDecoItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnInitializeDecoPreview");

	AB_Placement_Preview_AirStrike_C_OnInitializeDecoPreview_Params params;
	params.NewBuildingActor = NewBuildingActor;
	params.NewDecoItemDefinition = NewDecoItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateScale
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InWorldSpacePivot              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Placement_Preview_AirStrike_C::OnUpdateScale(float* Scale, struct FVector* InWorldSpacePivot)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateScale");

	AB_Placement_Preview_AirStrike_C_OnUpdateScale_Params params;
	params.Scale = Scale;
	params.InWorldSpacePivot = InWorldSpacePivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSafeToPlace                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_AirStrike_C::OnUpdateVisuals(float* DeltaSeconds, bool* bSafeToPlace)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateVisuals");

	AB_Placement_Preview_AirStrike_C_OnUpdateVisuals_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bSafeToPlace = bSafeToPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetScalarParameterValueOnAllPreviewMIDs
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_AirStrike_C::SetScalarParameterValueOnAllPreviewMIDs(struct FName* ParamName, float* ParamValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetScalarParameterValueOnAllPreviewMIDs");

	AB_Placement_Preview_AirStrike_C_SetScalarParameterValueOnAllPreviewMIDs_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetVectorParameterValueOnAllPreviewMIDs
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParamValue                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Placement_Preview_AirStrike_C::SetVectorParameterValueOnAllPreviewMIDs(struct FName* ParamName, struct FLinearColor* ParamValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetVectorParameterValueOnAllPreviewMIDs");

	AB_Placement_Preview_AirStrike_C_SetVectorParameterValueOnAllPreviewMIDs_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SwitchType
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Positions_With_Duplicates      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Cleaned_Positions              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Duplicated_Entries             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Placement_Preview_AirStrike_C::SwitchType(TArray<struct FVector> Positions_With_Duplicates, TArray<struct FVector> Cleaned_Positions, TArray<int> Duplicated_Entries)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SwitchType");

	AB_Placement_Preview_AirStrike_C_SwitchType_Params params;
	params.Positions_With_Duplicates = Positions_With_Duplicates;
	params.Cleaned_Positions = Cleaned_Positions;
	params.Duplicated_Entries = Duplicated_Entries;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveBeginPlay");

	AB_Placement_Preview_AirStrike_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.RestartLineReticule
// (BlueprintCallable, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::RestartLineReticule()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.RestartLineReticule");

	AB_Placement_Preview_AirStrike_C_RestartLineReticule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ToggleAirStrikeParticles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInToggle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_AirStrike_C::ToggleAirStrikeParticles(bool bInToggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ToggleAirStrikeParticles");

	AB_Placement_Preview_AirStrike_C_ToggleAirStrikeParticles_Params params;
	params.bInToggle = bInToggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Placement_Preview_AirStrike_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveDestroyed");

	AB_Placement_Preview_AirStrike_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ExecuteUbergraph_B_Placement_Preview_AirStrike
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Preview_AirStrike_C::ExecuteUbergraph_B_Placement_Preview_AirStrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ExecuteUbergraph_B_Placement_Preview_AirStrike");

	AB_Placement_Preview_AirStrike_C_ExecuteUbergraph_B_Placement_Preview_AirStrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
