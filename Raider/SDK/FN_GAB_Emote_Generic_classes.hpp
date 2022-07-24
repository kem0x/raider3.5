#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// 0x00BC (0x09CC - 0x0910)
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEventData                          Event_Data;                                               // 0x0920(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PostTriggerCancelDelay;                                   // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C");
		return ptr;
	}


	void GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, TEnumAsByte<EFortCustomBodyType> BodyType, TEnumAsByte<EFortCustomGender> Gender);
	void GetBodyTypeAndGender(TEnumAsByte<EFortCustomBodyType>* BodyType, TEnumAsByte<EFortCustomGender>* Gender);
	void K2_OnEndAbility(bool* bWasCancelled);
	void Completed_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void OnFinish_98AA3C42453EEDB1D4A56BB2002955E1();
	void K2_ActivateAbility();
	void OnMontageStartedPlaying();
	void PlayInitialEmoteMontage();
	void OnAbilityTriggered();
	void ExecuteUbergraph_GAB_Emote_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
