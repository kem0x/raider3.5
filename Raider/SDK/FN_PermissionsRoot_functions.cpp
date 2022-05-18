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

// Function PermissionsRoot.PermissionsRoot_C.Input Handle Back
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPermissionsRoot_C::Input_Handle_Back(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.Input Handle Back");

	UPermissionsRoot_C_Input_Handle_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function PermissionsRoot.PermissionsRoot_C.RefreshOutpostInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPermissionsRoot_C::RefreshOutpostInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.RefreshOutpostInfo");

	UPermissionsRoot_C_RefreshOutpostInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PermissionsRoot.PermissionsRoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPermissionsRoot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.Construct");

	UPermissionsRoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PermissionsRoot.PermissionsRoot_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPermissionsRoot_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.OnActivated");

	UPermissionsRoot_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PermissionsRoot.PermissionsRoot_C.ExecuteUbergraph_PermissionsRoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPermissionsRoot_C::ExecuteUbergraph_PermissionsRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PermissionsRoot.PermissionsRoot_C.ExecuteUbergraph_PermissionsRoot");

	UPermissionsRoot_C_ExecuteUbergraph_PermissionsRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
