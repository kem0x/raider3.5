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

// Function SurvivorAnchorWanderContext.SurvivorAnchorWanderContext_C.ProvideLocationsSet
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                QuerierObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 QuerierActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ResultingLocationSet           (Parm, OutParm, ZeroConstructor)

void USurvivorAnchorWanderContext_C::ProvideLocationsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivorAnchorWanderContext.SurvivorAnchorWanderContext_C.ProvideLocationsSet");

	USurvivorAnchorWanderContext_C_ProvideLocationsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = params.ResultingLocationSet;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
