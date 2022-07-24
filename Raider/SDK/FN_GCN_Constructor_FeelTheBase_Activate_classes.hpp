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

// BlueprintGeneratedClass GCN_Constructor_FeelTheBase_Activate.GCN_Constructor_FeelTheBase_Activate_C
// 0x004C (0x00CC - 0x0080)
class UGCN_Constructor_FeelTheBase_Activate_C : public UFortGameplayCueNotify_Simple
{
public:
	struct FVector                                     FeelTheBaseFXScale;                                       // 0x0080(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TurnUpTheBaseFXScale;                                     // 0x008C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FeelTheBaseSound;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TurnUpTheBaseSound;                                       // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x00A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UParticleSystem*                             FeelTheBase_FX;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TurnUpTheBase_FX;                                         // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloatParam;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Constructor_FeelTheBase_Activate.GCN_Constructor_FeelTheBase_Activate_C");
		return ptr;
	}


	bool OnExecute(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
