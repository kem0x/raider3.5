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

// Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.OnAccountInfoChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemReceivedAccountWidget_C::OnAccountInfoChanged(struct FFortPublicAccountInfo* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.OnAccountInfoChanged");

	UItemReceivedAccountWidget_C_OnAccountInfoChanged_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.ExecuteUbergraph_ItemReceivedAccountWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedAccountWidget_C::ExecuteUbergraph_ItemReceivedAccountWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.ExecuteUbergraph_ItemReceivedAccountWidget");

	UItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
