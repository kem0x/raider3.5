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

// Function BuildWatermark.BuildWatermark_C.Update Watermark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::Update_Watermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Update Watermark");

	UBuildWatermark_C_Update_Watermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Construct");

	UBuildWatermark_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamInfo                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBuildWatermark_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& TeamInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged");

	UBuildWatermark_C_HandlePlayerStateChanged_Params params;
	params.TeamInfo = TeamInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
// (BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::HandlePartyJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.HandlePartyJoined");

	UBuildWatermark_C_HandlePartyJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Destruct");

	UBuildWatermark_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark");

	UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
