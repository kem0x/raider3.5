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

// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsCenter
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_SurvivorAnchor_C::GetTetheredBoxBoundsCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsCenter");

	ABP_SurvivorAnchor_C_GetTetheredBoxBoundsCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsEQSGridSize
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SurvivorAnchor_C::GetTetheredBoxBoundsEQSGridSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsEQSGridSize");

	ABP_SurvivorAnchor_C_GetTetheredBoxBoundsEQSGridSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsEQSSpaceBetween
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SurvivorAnchor_C::GetTetheredBoxBoundsEQSSpaceBetween()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsEQSSpaceBetween");

	ABP_SurvivorAnchor_C_GetTetheredBoxBoundsEQSSpaceBetween_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsHeight
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SurvivorAnchor_C::GetTetheredBoxBoundsHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsHeight");

	ABP_SurvivorAnchor_C_GetTetheredBoxBoundsHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsWidth
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SurvivorAnchor_C::GetTetheredBoxBoundsWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.GetTetheredBoxBoundsWidth");

	ABP_SurvivorAnchor_C_GetTetheredBoxBoundsWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.IsActorInsideOfAnchorBounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           InBounds                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SurvivorAnchor_C::IsActorInsideOfAnchorBounds(class AActor** Actor, bool* InBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.IsActorInsideOfAnchorBounds");

	ABP_SurvivorAnchor_C_IsActorInsideOfAnchorBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (InBounds != nullptr)
		*InBounds = params.InBounds;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SurvivorAnchor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.UserConstructionScript");

	ABP_SurvivorAnchor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SurvivorAnchor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ReceiveBeginPlay");

	ABP_SurvivorAnchor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ShowAnchorBounds
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SurvivorAnchor_C::ShowAnchorBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ShowAnchorBounds");

	ABP_SurvivorAnchor_C_ShowAnchorBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ExecuteUbergraph_BP_SurvivorAnchor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SurvivorAnchor_C::ExecuteUbergraph_BP_SurvivorAnchor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SurvivorAnchor.BP_SurvivorAnchor_C.ExecuteUbergraph_BP_SurvivorAnchor");

	ABP_SurvivorAnchor_C_ExecuteUbergraph_BP_SurvivorAnchor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
