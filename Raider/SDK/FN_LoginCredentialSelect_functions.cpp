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
