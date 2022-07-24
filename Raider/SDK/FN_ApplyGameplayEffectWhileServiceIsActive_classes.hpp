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

// BlueprintGeneratedClass ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C
// 0x0010 (0x00A8 - 0x0098)
class UApplyGameplayEffectWhileServiceIsActive_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GameplayEffectToApply;                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
