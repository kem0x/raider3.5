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

// Function LoginCredentialSelect.LoginCredentialSelect_C.UpdateTextFieldsFromRuntimeOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoginCredentialSelect_C::UpdateTextFieldsFromRuntimeOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCredentialSelect.LoginCredentialSelect_C.UpdateTextFieldsFromRuntimeOptions");

	ULoginCredentialSelect_C_UpdateTextFieldsFromRuntimeOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCredentialSelect.LoginCredentialSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginCredentialSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCredentialSelect.LoginCredentialSelect_C.Construct");

	ULoginCredentialSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCredentialSelect.LoginCredentialSelect_C.OnHotfixApplied
// (BlueprintCallable, BlueprintEvent)

void ULoginCredentialSelect_C::OnHotfixApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCredentialSelect.LoginCredentialSelect_C.OnHotfixApplied");

	ULoginCredentialSelect_C_OnHotfixApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCredentialSelect.LoginCredentialSelect_C.ExecuteUbergraph_LoginCredentialSelect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginCredentialSelect_C::ExecuteUbergraph_LoginCredentialSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCredentialSelect.LoginCredentialSelect_C.ExecuteUbergraph_LoginCredentialSelect");

	ULoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
