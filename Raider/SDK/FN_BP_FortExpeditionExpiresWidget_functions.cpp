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

// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Get Mcp Relative Utc Now
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime               UtcNow                         (Parm, OutParm)

void UBP_FortExpeditionExpiresWidget_C::Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Get Mcp Relative Utc Now");

	UBP_FortExpeditionExpiresWidget_C_Get_Mcp_Relative_Utc_Now_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UtcNow != nullptr)
		*UtcNow = params.UtcNow;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Refresh Expiration Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionExpiresWidget_C::Refresh_Expiration_Timer(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.Refresh Expiration Timer");

	UBP_FortExpeditionExpiresWidget_C_Refresh_Expiration_Timer_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    InItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionExpiresWidget_C::SetData(class UFortExpeditionItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.SetData");

	UBP_FortExpeditionExpiresWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.OnExpeditionExpirationUpdated
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionExpiresWidget_C::OnExpeditionExpirationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.OnExpeditionExpirationUpdated");

	UBP_FortExpeditionExpiresWidget_C_OnExpeditionExpirationUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionExpiresWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.PreConstruct");

	UBP_FortExpeditionExpiresWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.ExecuteUbergraph_BP_FortExpeditionExpiresWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionExpiresWidget_C::ExecuteUbergraph_BP_FortExpeditionExpiresWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C.ExecuteUbergraph_BP_FortExpeditionExpiresWidget");

	UBP_FortExpeditionExpiresWidget_C_ExecuteUbergraph_BP_FortExpeditionExpiresWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
