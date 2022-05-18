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

// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ForceHideWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UResourceAggregationWidget_C::ForceHideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceAggregationWidget.ResourceAggregationWidget_C.ForceHideWidget");

	UResourceAggregationWidget_C_ForceHideWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HideWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UResourceAggregationWidget_C::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceAggregationWidget.ResourceAggregationWidget_C.HideWidget");

	UResourceAggregationWidget_C_HideWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.TriggerAggregateAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UResourceAggregationWidget_C::TriggerAggregateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceAggregationWidget.ResourceAggregationWidget_C.TriggerAggregateAnimation");

	UResourceAggregationWidget_C_TriggerAggregateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.UpdateAggregateResourceCollected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               InPotentialResource            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResourceAggregationWidget_C::UpdateAggregateResourceCollected(class UFortItem* InPotentialResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceAggregationWidget.ResourceAggregationWidget_C.UpdateAggregateResourceCollected");

	UResourceAggregationWidget_C_UpdateAggregateResourceCollected_Params params;
	params.InPotentialResource = InPotentialResource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ResetSourceOfResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*        InResourceObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               InPotentialResource            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResourceAggregationWidget_C::ResetSourceOfResource(class ABuildingSMActor* InResourceObject, class UFortItem* InPotentialResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceAggregationWidget.ResourceAggregationWidget_C.ResetSourceOfResource");

	UResourceAggregationWidget_C_ResetSourceOfResource_Params params;
	params.InResourceObject = InResourceObject;
	params.InPotentialResource = InPotentialResource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HandleDamagedResourceObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*        DamagedResourceObject          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               PotentialResource              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroyed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WeakpointDamage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResourceAggregationWidget_C::HandleDamagedResourceObject(class ABuildingSMActor* DamagedResourceObject, class UFortItem* PotentialResource, bool Destroyed, bool WeakpointDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceAggregationWidget.ResourceAggregationWidget_C.HandleDamagedResourceObject");

	UResourceAggregationWidget_C_HandleDamagedResourceObject_Params params;
	params.DamagedResourceObject = DamagedResourceObject;
	params.PotentialResource = PotentialResource;
	params.Destroyed = Destroyed;
	params.WeakpointDamage = WeakpointDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResourceAggregationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceAggregationWidget.ResourceAggregationWidget_C.Construct");

	UResourceAggregationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ExecuteUbergraph_ResourceAggregationWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResourceAggregationWidget_C::ExecuteUbergraph_ResourceAggregationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceAggregationWidget.ResourceAggregationWidget_C.ExecuteUbergraph_ResourceAggregationWidget");

	UResourceAggregationWidget_C_ExecuteUbergraph_ResourceAggregationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
