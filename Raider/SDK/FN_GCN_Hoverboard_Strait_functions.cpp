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

// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Hoverboard_Strait_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActive");

	AGCN_Hoverboard_Strait_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Strait_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.UserConstructionScript");

	AGCN_Hoverboard_Strait_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActivate
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Strait_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActivate");

	AGCN_Hoverboard_Strait_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.ExecuteUbergraph_GCN_Hoverboard_Strait
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Hoverboard_Strait_C::ExecuteUbergraph_GCN_Hoverboard_Strait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.ExecuteUbergraph_GCN_Hoverboard_Strait");

	AGCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
