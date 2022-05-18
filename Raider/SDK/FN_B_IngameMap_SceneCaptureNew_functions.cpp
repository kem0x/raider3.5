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

// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_IngameMap_SceneCaptureNew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.UserConstructionScript");

	AB_IngameMap_SceneCaptureNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_IngameMap_SceneCaptureNew_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ReceiveBeginPlay");

	AB_IngameMap_SceneCaptureNew_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureNew
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_IngameMap_SceneCaptureNew_C::ExecuteUbergraph_B_IngameMap_SceneCaptureNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureNew");

	AB_IngameMap_SceneCaptureNew_C_ExecuteUbergraph_B_IngameMap_SceneCaptureNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
