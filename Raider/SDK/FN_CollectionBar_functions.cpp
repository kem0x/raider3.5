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

// Function CollectionBar.CollectionBar_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             InIcon                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UCollectionBar_C::SetIcon(const struct FSlateBrush& InIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBar.CollectionBar_C.SetIcon");

	UCollectionBar_C_SetIcon_Params params;
	params.InIcon = InIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBar.CollectionBar_C.IsAchievedCountInRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsInRange                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCollectionBar_C::IsAchievedCountInRange(bool* bIsInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBar.CollectionBar_C.IsAchievedCountInRange");

	UCollectionBar_C_IsAchievedCountInRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInRange != nullptr)
		*bIsInRange = params.bIsInRange;
}


// Function CollectionBar.CollectionBar_C.SetAchievedCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InAchievedCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBar_C::SetAchievedCount(int InAchievedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBar.CollectionBar_C.SetAchievedCount");

	UCollectionBar_C_SetAchievedCount_Params params;
	params.InAchievedCount = InAchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBar.CollectionBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UCollectionBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBar.CollectionBar_C.Update");

	UCollectionBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBar.CollectionBar_C.GetProgressBarPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AchievedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Percentage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCollectionBar_C::GetProgressBarPercentage(int AchievedCount, float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBar.CollectionBar_C.GetProgressBarPercentage");

	UCollectionBar_C_GetProgressBarPercentage_Params params;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
}


// Function CollectionBar.CollectionBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBar.CollectionBar_C.Construct");

	UCollectionBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBar.CollectionBar_C.ExecuteUbergraph_CollectionBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBar_C::ExecuteUbergraph_CollectionBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBar.CollectionBar_C.ExecuteUbergraph_CollectionBar");

	UCollectionBar_C_ExecuteUbergraph_CollectionBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
