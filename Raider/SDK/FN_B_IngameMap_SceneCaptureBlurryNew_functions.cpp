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

// Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_IngameMap_SceneCaptureBlurryNew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.UserConstructionScript");

	AB_IngameMap_SceneCaptureBlurryNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_IngameMap_SceneCaptureBlurryNew_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.ReceiveBeginPlay");

	AB_IngameMap_SceneCaptureBlurryNew_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_IngameMap_SceneCaptureBlurryNew_C::ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew");

	AB_IngameMap_SceneCaptureBlurryNew_C_ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
