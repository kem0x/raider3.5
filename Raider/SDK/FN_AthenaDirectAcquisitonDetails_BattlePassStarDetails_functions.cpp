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

// Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.SetNumOfBattlePassStars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumOfBattlePassStars           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::SetNumOfBattlePassStars(int NumOfBattlePassStars)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.SetNumOfBattlePassStars");

	UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C_SetNumOfBattlePassStars_Params params;
	params.NumOfBattlePassStars = NumOfBattlePassStars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails");

	UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C_ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
