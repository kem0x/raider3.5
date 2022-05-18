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

// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
// (Event, Public, BlueprintEvent)

void USocialImportPanel_C::OnLauncherImportOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened");

	USocialImportPanel_C_OnLauncherImportOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
// (Event, Public, BlueprintEvent)

void USocialImportPanel_C::OnClaimViewRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested");

	USocialImportPanel_C_OnClaimViewRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
// (Event, Public, BlueprintEvent)

void USocialImportPanel_C::OnImportViewRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested");

	USocialImportPanel_C_OnImportViewRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
// (Event, Public, BlueprintEvent)

void USocialImportPanel_C::OnWaitingViewRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested");

	USocialImportPanel_C_OnWaitingViewRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
// (Event, Public, BlueprintEvent)
// Parameters:
// ESocialImportPanelType*        NewType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialImportPanel_C::OnPanelTypeSet(ESocialImportPanelType* NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet");

	USocialImportPanel_C_OnPanelTypeSet_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialImportPanel.SocialImportPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void USocialImportPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportPanel.SocialImportPanel_C.OnActivated");

	USocialImportPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialImportPanel_C::ExecuteUbergraph_SocialImportPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel");

	USocialImportPanel_C_ExecuteUbergraph_SocialImportPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
