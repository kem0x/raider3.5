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

// Function Results_Summary.Results_Summary_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Summary_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.Focus");

	UResults_Summary_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.InitializeRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InTotalMissionPoints           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Summary_C::InitializeRewards(int InTotalMissionPoints, TArray<class UFortItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.InitializeRewards");

	UResults_Summary_C_InitializeRewards_Params params;
	params.InTotalMissionPoints = InTotalMissionPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function Results_Summary.Results_Summary_C.DoDesignTimeRandomization
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Summary_C::DoDesignTimeRandomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.DoDesignTimeRandomization");

	UResults_Summary_C_DoDesignTimeRandomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UFortItem*>       InRewardItems                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InTotalMissionPoints           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Summary_C::Initialize(class UFortUIScoreReport* InScoreReport, int InTotalMissionPoints, TArray<class UFortItem*>* InRewardItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.Initialize");

	UResults_Summary_C_Initialize_Params params;
	params.InScoreReport = InScoreReport;
	params.InTotalMissionPoints = InTotalMissionPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRewardItems != nullptr)
		*InRewardItems = params.InRewardItems;
}


// Function Results_Summary.Results_Summary_C.InitializeLootChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Summary_C::InitializeLootChest(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.InitializeLootChest");

	UResults_Summary_C_InitializeLootChest_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Summary_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.PreConstruct");

	UResults_Summary_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_Summary_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature");

	UResults_Summary_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.ExecuteUbergraph_Results_Summary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_Summary_C::ExecuteUbergraph_Results_Summary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.ExecuteUbergraph_Results_Summary");

	UResults_Summary_C_ExecuteUbergraph_Results_Summary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Summary.Results_Summary_C.OnReturnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_Summary_C::OnReturnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Summary.Results_Summary_C.OnReturnClicked__DelegateSignature");

	UResults_Summary_C_OnReturnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
