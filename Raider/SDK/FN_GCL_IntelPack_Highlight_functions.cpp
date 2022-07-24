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

// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_IntelPack_Highlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.UserConstructionScript");

	AGCL_IntelPack_Highlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_IntelPack_Highlight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ReceiveBeginPlay");

	AGCL_IntelPack_Highlight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_IntelPack_Highlight_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ReceiveEndPlay");

	AGCL_IntelPack_Highlight_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.Set Pawn Location
// (BlueprintCallable, BlueprintEvent)

void AGCL_IntelPack_Highlight_C::Set_Pawn_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.Set Pawn Location");

	AGCL_IntelPack_Highlight_C_Set_Pawn_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ExecuteUbergraph_GCL_IntelPack_Highlight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_IntelPack_Highlight_C::ExecuteUbergraph_GCL_IntelPack_Highlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ExecuteUbergraph_GCL_IntelPack_Highlight");

	AGCL_IntelPack_Highlight_C_ExecuteUbergraph_GCL_IntelPack_Highlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
