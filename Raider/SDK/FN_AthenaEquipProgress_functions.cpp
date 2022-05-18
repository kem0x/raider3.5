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

// Function AthenaEquipProgress.AthenaEquipProgress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquipProgress_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.Tick");

	UAthenaEquipProgress_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEquipProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.Construct");

	UAthenaEquipProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.OnUIGameplayCue_Event_0_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CueName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEquipProgress_C::OnUIGameplayCue_Event_0_1(const struct FName& CueName, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.OnUIGameplayCue_Event_0_1");

	UAthenaEquipProgress_C_OnUIGameplayCue_Event_0_1_Params params;
	params.CueName = CueName;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEquipProgress_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.Destruct");

	UAthenaEquipProgress_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.ExecuteUbergraph_AthenaEquipProgress
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquipProgress_C::ExecuteUbergraph_AthenaEquipProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquipProgress.AthenaEquipProgress_C.ExecuteUbergraph_AthenaEquipProgress");

	UAthenaEquipProgress_C_ExecuteUbergraph_AthenaEquipProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
