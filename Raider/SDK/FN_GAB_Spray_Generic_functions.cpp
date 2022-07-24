// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GAB_Spray_Generic.GAB_Spray_Generic_C.GetMontageToPlay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMontageItemDefinitionBase** EmoteAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortCustomBodyType>* BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortCustomGender>* Gender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Spray_Generic_C::GetMontageToPlay(class UFortMontageItemDefinitionBase** EmoteAsset, TEnumAsByte<EFortCustomBodyType>* BodyType, TEnumAsByte<EFortCustomGender>* Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Spray_Generic.GAB_Spray_Generic_C.GetMontageToPlay");

	UGAB_Spray_Generic_C_GetMontageToPlay_Params params;
	params.EmoteAsset = EmoteAsset;
	params.BodyType = BodyType;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Spray_Generic.GAB_Spray_Generic_C.TargetLineTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               ActivatingPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitSomething                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, IsPlainOldData)

void UGAB_Spray_Generic_C::TargetLineTrace(class AFortPawn* ActivatingPawn, bool* HitSomething, struct FVector* Location, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Spray_Generic.GAB_Spray_Generic_C.TargetLineTrace");

	UGAB_Spray_Generic_C_TargetLineTrace_Params params;
	params.ActivatingPawn = ActivatingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitSomething != nullptr)
		*HitSomething = params.HitSomething;
	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function GAB_Spray_Generic.GAB_Spray_Generic_C.OnMontageStartedPlaying
// (BlueprintCallable, BlueprintEvent)

void UGAB_Spray_Generic_C::OnMontageStartedPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Spray_Generic.GAB_Spray_Generic_C.OnMontageStartedPlaying");

	UGAB_Spray_Generic_C_OnMontageStartedPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Spray_Generic.GAB_Spray_Generic_C.ExecuteUbergraph_GAB_Spray_Generic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Spray_Generic_C::ExecuteUbergraph_GAB_Spray_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Spray_Generic.GAB_Spray_Generic_C.ExecuteUbergraph_GAB_Spray_Generic");

	UGAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
