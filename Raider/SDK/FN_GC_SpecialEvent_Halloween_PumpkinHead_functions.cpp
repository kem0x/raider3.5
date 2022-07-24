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

// Function GC_SpecialEvent_Halloween_PumpkinHead.GC_SpecialEvent_Halloween_PumpkinHead_C.OnActive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGC_SpecialEvent_Halloween_PumpkinHead_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_SpecialEvent_Halloween_PumpkinHead.GC_SpecialEvent_Halloween_PumpkinHead_C.OnActive");

	AGC_SpecialEvent_Halloween_PumpkinHead_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GC_SpecialEvent_Halloween_PumpkinHead.GC_SpecialEvent_Halloween_PumpkinHead_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_SpecialEvent_Halloween_PumpkinHead_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_SpecialEvent_Halloween_PumpkinHead.GC_SpecialEvent_Halloween_PumpkinHead_C.UserConstructionScript");

	AGC_SpecialEvent_Halloween_PumpkinHead_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
