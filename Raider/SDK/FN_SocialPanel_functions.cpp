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

// Function SocialPanel.SocialPanel_C.HandleAction_Close
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USocialPanel_C::HandleAction_Close(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.HandleAction_Close");

	USocialPanel_C_HandleAction_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function SocialPanel.SocialPanel_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)

void USocialPanel_C::InitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.InitializeInput");

	USocialPanel_C_InitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USocialPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.Construct");

	USocialPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void USocialPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.OnActivated");

	USocialPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void USocialPanel_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.OnDeactivated");

	USocialPanel_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void USocialPanel_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.OnBeginIntro");

	USocialPanel_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanel_C::ExecuteUbergraph_SocialPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel");

	USocialPanel_C_ExecuteUbergraph_SocialPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
