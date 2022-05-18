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

// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Is Tranfsorm Button Enabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemTransformResultInfo_C::Is_Tranfsorm_Button_Enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.Is Tranfsorm Button Enabled");

	UItemTransformResultInfo_C_Is_Tranfsorm_Button_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Get Transform Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentSacrificePoints         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTier                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformResultInfo_C::Get_Transform_Data(int* CurrentSacrificePoints, int* CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.Get Transform Data");

	UItemTransformResultInfo_C_Get_Transform_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSacrificePoints != nullptr)
		*CurrentSacrificePoints = params.CurrentSacrificePoints;
	if (CurrentTier != nullptr)
		*CurrentTier = params.CurrentTier;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateNextTier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemTransformResultInfo_C::CalculateNextTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateNextTier");

	UItemTransformResultInfo_C_CalculateNextTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.GetPointsForTier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Points                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformResultInfo_C::GetPointsForTier(int Tier, int* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.GetPointsForTier");

	UItemTransformResultInfo_C_GetPointsForTier_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateTierProgressPercentage
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformResultInfo_C::UpdateTierProgressPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateTierProgressPercentage");

	UItemTransformResultInfo_C_UpdateTierProgressPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateCurrentSacrificePoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TotalSacrificePoints           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformResultInfo_C::CalculateCurrentSacrificePoints(int* TotalSacrificePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateCurrentSacrificePoints");

	UItemTransformResultInfo_C_CalculateCurrentSacrificePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalSacrificePoints != nullptr)
		*TotalSacrificePoints = params.TotalSacrificePoints;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificeInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       SacrificeItems                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemTransformResultInfo_C::UpdateSacrificeInfo(TArray<class UFortItem*>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificeInfo");

	UItemTransformResultInfo_C_UpdateSacrificeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificePointsBar
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformResultInfo_C::UpdateSacrificePointsBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificePointsBar");

	UItemTransformResultInfo_C_UpdateSacrificePointsBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.SetKeyToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformResultInfo_C::SetKeyToRepresent(class UFortItem* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.SetKeyToRepresent");

	UItemTransformResultInfo_C_SetKeyToRepresent_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemTransformResultInfo_C::BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	UItemTransformResultInfo_C_BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemTransformResultInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.Construct");

	UItemTransformResultInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.ExecuteUbergraph_ItemTransformResultInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformResultInfo_C::ExecuteUbergraph_ItemTransformResultInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.ExecuteUbergraph_ItemTransformResultInfo");

	UItemTransformResultInfo_C_ExecuteUbergraph_ItemTransformResultInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnUpdateSacrificeInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TransformActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformResultInfo_C::OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnUpdateSacrificeInfo__DelegateSignature");

	UItemTransformResultInfo_C_OnUpdateSacrificeInfo__DelegateSignature_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnTransformConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SacrificePoints                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformResultInfo_C::OnTransformConfirmed__DelegateSignature(int SacrificePoints, int CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnTransformConfirmed__DelegateSignature");

	UItemTransformResultInfo_C_OnTransformConfirmed__DelegateSignature_Params params;
	params.SacrificePoints = SacrificePoints;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
