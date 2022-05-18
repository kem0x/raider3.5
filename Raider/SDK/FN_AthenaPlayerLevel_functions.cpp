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

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerLevel_C::UpdateLevel(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateLevel");

	UAthenaPlayerLevel_C_UpdateLevel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateXp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LevelXp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LevelXpForLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerLevel_C::UpdateXp(int LevelXp, int LevelXpForLevel, int Level, int MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateXp");

	UAthenaPlayerLevel_C_UpdateXp_Params params;
	params.LevelXp = LevelXp;
	params.LevelXpForLevel = LevelXpForLevel;
	params.Level = Level;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.IsReadyForNextXpReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerLevel_C::IsReadyForNextXpReward(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.IsReadyForNextXpReward");

	UAthenaPlayerLevel_C_IsReadyForNextXpReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ready != nullptr)
		*Ready = params.Ready;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromLevelInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaLevelInfo        LevelInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaPlayerLevel_C::InitializeFromLevelInfo(const struct FAthenaLevelInfo& LevelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromLevelInfo");

	UAthenaPlayerLevel_C_InitializeFromLevelInfo_Params params;
	params.LevelInfo = LevelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromAccount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  FortPublicAccountInfo          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerLevel_C::InitializeFromAccount(struct FFortPublicAccountInfo* FortPublicAccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromAccount");

	UAthenaPlayerLevel_C_InitializeFromAccount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPublicAccountInfo != nullptr)
		*FortPublicAccountInfo = params.FortPublicAccountInfo;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play Xp Reward
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaMatchXpReward    Reward                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerLevel_C::Play_Xp_Reward(const struct FAthenaMatchXpReward& Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play Xp Reward");

	UAthenaPlayerLevel_C_Play_Xp_Reward_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerLevel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.Tick");

	UAthenaPlayerLevel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UAthenaPlayerLevel_C::BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UAthenaPlayerLevel_C_BndEvt__AnimateXp_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UAthenaPlayerLevel_C::BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UAthenaPlayerLevel_C_BndEvt__AnimateXpAndLevel_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play XP Reward Directly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            XpToAdd                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerLevel_C::Play_XP_Reward_Directly(int XpToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play XP Reward Directly");

	UAthenaPlayerLevel_C_Play_XP_Reward_Directly_Params params;
	params.XpToAdd = XpToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.EventTrack_Leveled
// (BlueprintCallable, BlueprintEvent)

void UAthenaPlayerLevel_C::EventTrack_Leveled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.EventTrack_Leveled");

	UAthenaPlayerLevel_C_EventTrack_Leveled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPlayerLevel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.Destruct");

	UAthenaPlayerLevel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerLevel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.PreConstruct");

	UAthenaPlayerLevel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.ExecuteUbergraph_AthenaPlayerLevel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerLevel_C::ExecuteUbergraph_AthenaPlayerLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.ExecuteUbergraph_AthenaPlayerLevel");

	UAthenaPlayerLevel_C_ExecuteUbergraph_AthenaPlayerLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.LevelChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerLevel_C::LevelChanged__DelegateSignature(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerLevel.AthenaPlayerLevel_C.LevelChanged__DelegateSignature");

	UAthenaPlayerLevel_C_LevelChanged__DelegateSignature_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
