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

// Function XpBarXpText.XpBarXpText_C.Get Skill Points For Next Level
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Next_Level_Skill_Points        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UXpBarXpText_C::Get_Skill_Points_For_Next_Level(int* Next_Level_Skill_Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarXpText.XpBarXpText_C.Get Skill Points For Next Level");

	UXpBarXpText_C_Get_Skill_Points_For_Next_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Next_Level_Skill_Points != nullptr)
		*Next_Level_Skill_Points = params.Next_Level_Skill_Points;
}


// Function XpBarXpText.XpBarXpText_C.Update Xp Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  Account_Info                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpBarXpText_C::Update_Xp_Text(const struct FFortPublicAccountInfo& Account_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarXpText.XpBarXpText_C.Update Xp Text");

	UXpBarXpText_C_Update_Xp_Text_Params params;
	params.Account_Info = Account_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBarXpText.XpBarXpText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBarXpText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarXpText.XpBarXpText_C.Construct");

	UXpBarXpText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBarXpText.XpBarXpText_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpBarXpText_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarXpText.XpBarXpText_C.HandleAccountUpdate");

	UXpBarXpText_C_HandleAccountUpdate_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBarXpText.XpBarXpText_C.ExecuteUbergraph_XpBarXpText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBarXpText_C::ExecuteUbergraph_XpBarXpText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarXpText.XpBarXpText_C.ExecuteUbergraph_XpBarXpText");

	UXpBarXpText_C_ExecuteUbergraph_XpBarXpText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
