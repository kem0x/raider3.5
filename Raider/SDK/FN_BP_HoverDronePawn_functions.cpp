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

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.GetWindVolumeFromAltitude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Altitude                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HoverDronePawn_C::GetWindVolumeFromAltitude(float Altitude, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.GetWindVolumeFromAltitude");

	ABP_HoverDronePawn_C_GetWindVolumeFromAltitude_Params params;
	params.Altitude = Altitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function BP_HoverDronePawn.BP_HoverDronePawn_C.SetWindAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverDronePawn_C::SetWindAudioEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.SetWindAudioEnabled");

	ABP_HoverDronePawn_C_SetWindAudioEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDronePawn.BP_HoverDronePawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HoverDronePawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.UserConstructionScript");

	ABP_HoverDronePawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HoverDronePawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveBeginPlay");

	ABP_HoverDronePawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverDronePawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveTick");

	ABP_HoverDronePawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverDronePawn_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceivePossessed");

	ABP_HoverDronePawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverDronePawn_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveUnpossessed");

	ABP_HoverDronePawn_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDronePawn.BP_HoverDronePawn_C.Update Wind Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_HoverDronePawn_C::Update_Wind_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.Update Wind Audio");

	ABP_HoverDronePawn_C_Update_Wind_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ExecuteUbergraph_BP_HoverDronePawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverDronePawn_C::ExecuteUbergraph_BP_HoverDronePawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDronePawn.BP_HoverDronePawn_C.ExecuteUbergraph_BP_HoverDronePawn");

	ABP_HoverDronePawn_C_ExecuteUbergraph_BP_HoverDronePawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
