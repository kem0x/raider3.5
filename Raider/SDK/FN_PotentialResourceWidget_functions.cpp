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

// Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               PotentialResource              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeakpointDamage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPotentialResourceWidget_C::ShowPotentialResource(class UFortItem* PotentialResource, bool bWeakpointDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource");

	UPotentialResourceWidget_C_ShowPotentialResource_Params params;
	params.PotentialResource = PotentialResource;
	params.bWeakpointDamage = bWeakpointDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPotentialResourceWidget_C::SetupFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont");

	UPotentialResourceWidget_C_SetupFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UPotentialResourceWidget_C::GetResourceCountAsText(class UFortItem* Resource, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText");

	UPotentialResourceWidget_C_GetResourceCountAsText_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPotentialResourceWidget_C::UpdateResourceCountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText");

	UPotentialResourceWidget_C_UpdateResourceCountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPotentialResourceWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.Construct");

	UPotentialResourceWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.HandleTranslateAndFadeUpFinished
// (BlueprintCallable, BlueprintEvent)

void UPotentialResourceWidget_C::HandleTranslateAndFadeUpFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.HandleTranslateAndFadeUpFinished");

	UPotentialResourceWidget_C_HandleTranslateAndFadeUpFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPotentialResourceWidget_C::ExecuteUbergraph_PotentialResourceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget");

	UPotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.FinishedShowing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPotentialResourceWidget_C::FinishedShowing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PotentialResourceWidget.PotentialResourceWidget_C.FinishedShowing__DelegateSignature");

	UPotentialResourceWidget_C_FinishedShowing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
