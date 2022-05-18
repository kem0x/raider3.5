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

// Function ImpactNumbers.ImpactNumbers_C.Set Material Pararmeters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDamageNumberInfo   NewDamageHitInfoStruct         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform              CameraTransform                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NumberLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AImpactNumbers_C::Set_Material_Pararmeters(const struct FTransform& CameraTransform, const struct FVector& NumberLocation, struct FFortDamageNumberInfo* NewDamageHitInfoStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactNumbers.ImpactNumbers_C.Set Material Pararmeters");

	AImpactNumbers_C_Set_Material_Pararmeters_Params params;
	params.CameraTransform = CameraTransform;
	params.NumberLocation = NumberLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDamageHitInfoStruct != nullptr)
		*NewDamageHitInfoStruct = params.NewDamageHitInfoStruct;
}


// Function ImpactNumbers.ImpactNumbers_C.init a new number set
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDamageNumberInfo   NewDamageHitInfoStruct         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform              OutCameraTransform             (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutNumberLocation              (Parm, OutParm, IsPlainOldData)

void AImpactNumbers_C::init_a_new_number_set(struct FFortDamageNumberInfo* NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactNumbers.ImpactNumbers_C.init a new number set");

	AImpactNumbers_C_init_a_new_number_set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDamageHitInfoStruct != nullptr)
		*NewDamageHitInfoStruct = params.NewDamageHitInfoStruct;
	if (OutCameraTransform != nullptr)
		*OutCameraTransform = params.OutCameraTransform;
	if (OutNumberLocation != nullptr)
		*OutNumberLocation = params.OutNumberLocation;
}


// Function ImpactNumbers.ImpactNumbers_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AImpactNumbers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactNumbers.ImpactNumbers_C.UserConstructionScript");

	AImpactNumbers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImpactNumbers.ImpactNumbers_C.OnNewDamageNumber
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDamageNumberInfo*  NewDamageNumberInfo            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AImpactNumbers_C::OnNewDamageNumber(struct FFortDamageNumberInfo* NewDamageNumberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactNumbers.ImpactNumbers_C.OnNewDamageNumber");

	AImpactNumbers_C_OnNewDamageNumber_Params params;
	params.NewDamageNumberInfo = NewDamageNumberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImpactNumbers.ImpactNumbers_C.ExecuteUbergraph_ImpactNumbers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AImpactNumbers_C::ExecuteUbergraph_ImpactNumbers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactNumbers.ImpactNumbers_C.ExecuteUbergraph_ImpactNumbers");

	AImpactNumbers_C_ExecuteUbergraph_ImpactNumbers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
