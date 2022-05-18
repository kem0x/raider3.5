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

// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.PlayFlashAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UCollectionMultiProgressBar_C::PlayFlashAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.PlayFlashAnimation");

	UCollectionMultiProgressBar_C_PlayFlashAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.UpdateVisibleBar
// (Public, BlueprintCallable, BlueprintEvent)

void UCollectionMultiProgressBar_C::UpdateVisibleBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.UpdateVisibleBar");

	UCollectionMultiProgressBar_C_UpdateVisibleBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AchievedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionMultiProgressBar_C::Update(int AchievedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Update");

	UCollectionMultiProgressBar_C_Update_Params params;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Setup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCollectionMissionBadgeDisplayInfo> InBarInfos                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            AchievedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionMultiProgressBar_C::Setup(int AchievedCount, TArray<struct FCollectionMissionBadgeDisplayInfo>* InBarInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Setup");

	UCollectionMultiProgressBar_C_Setup_Params params;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBarInfos != nullptr)
		*InBarInfos = params.InBarInfos;
}


// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionMultiProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.Construct");

	UCollectionMultiProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.ExecuteUbergraph_CollectionMultiProgressBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionMultiProgressBar_C::ExecuteUbergraph_CollectionMultiProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionMultiProgressBar.CollectionMultiProgressBar_C.ExecuteUbergraph_CollectionMultiProgressBar");

	UCollectionMultiProgressBar_C_ExecuteUbergraph_CollectionMultiProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
