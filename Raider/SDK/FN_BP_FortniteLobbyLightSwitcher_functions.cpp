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

// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FortniteLobbyLightSwitcher_C::SetVisiblityofSceneLighting(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting");

	ABP_FortniteLobbyLightSwitcher_C_SetVisiblityofSceneLighting_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript");

	ABP_FortniteLobbyLightSwitcher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay");

	ABP_FortniteLobbyLightSwitcher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::EnableLobbySetLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting");

	ABP_FortniteLobbyLightSwitcher_C_EnableLobbySetLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::DisableLobbySetLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting");

	ABP_FortniteLobbyLightSwitcher_C_DisableLobbySetLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::UpdateSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings");

	ABP_FortniteLobbyLightSwitcher_C_UpdateSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FortniteLobbyLightSwitcher_C::ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher");

	ABP_FortniteLobbyLightSwitcher_C_ExecuteUbergraph_BP_FortniteLobbyLightSwitcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
