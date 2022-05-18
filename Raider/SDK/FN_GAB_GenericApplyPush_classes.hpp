#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_GenericApplyPush.GAB_GenericApplyPush_C
// 0x0028 (0x0B18 - 0x0AF0)
class UGAB_GenericApplyPush_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                PushedMontage;                                            // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                PushAsideTag;                                             // 0x0B00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Time;                                                     // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	class UGA_Constructor_BullRush_C*                  GA_BullRush;                                              // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericApplyPush.GAB_GenericApplyPush_C");
		return ptr;
	}


	void OnCancelled_569FFD0446FBE214B15C2B8019481F5F();
	void OnInterrupted_569FFD0446FBE214B15C2B8019481F5F();
	void OnBlendOut_569FFD0446FBE214B15C2B8019481F5F();
	void OnCompleted_569FFD0446FBE214B15C2B8019481F5F();
	void EventReceived_7764EAC14FD514E952F78BA2A0CF9ABE(const struct FGameplayEventData& Payload);
	void OnCancelled_8D429E634F6B70CB0A894484CBF629F1();
	void OnInterrupted_8D429E634F6B70CB0A894484CBF629F1();
	void OnBlendOut_8D429E634F6B70CB0A894484CBF629F1();
	void OnCompleted_8D429E634F6B70CB0A894484CBF629F1();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_GenericApplyPush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
