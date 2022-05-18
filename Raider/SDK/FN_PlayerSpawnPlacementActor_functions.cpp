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

// Function PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerSpawnPlacementActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C.UserConstructionScript");

	APlayerSpawnPlacementActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
