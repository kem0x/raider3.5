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

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDetailsModifierRow_C::PlayIntroAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation");

	UMissionDetailsModifierRow_C_PlayIntroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ModifierName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ModifierDescription            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              ModifierIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TextStyle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Show_Description               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseSmallIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::Init(const struct FText& ModifierName, const struct FText& ModifierDescription, class UTexture2D* ModifierIcon, class UClass* TextStyle, bool Show_Description, bool UseSmallIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init");

	UMissionDetailsModifierRow_C_Init_Params params;
	params.ModifierName = ModifierName;
	params.ModifierDescription = ModifierDescription;
	params.ModifierIcon = ModifierIcon;
	params.TextStyle = TextStyle;
	params.Show_Description = Show_Description;
	params.UseSmallIcon = UseSmallIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionDetailsModifierRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct");

	UMissionDetailsModifierRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::ExecuteUbergraph_MissionDetailsModifierRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow");

	UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
