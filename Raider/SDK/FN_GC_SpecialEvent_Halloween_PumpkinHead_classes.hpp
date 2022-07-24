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

// BlueprintGeneratedClass GC_SpecialEvent_Halloween_PumpkinHead.GC_SpecialEvent_Halloween_PumpkinHead_C
// 0x0018 (0x03B0 - 0x0398)
class AGC_SpecialEvent_Halloween_PumpkinHead_C : public AGameplayCueNotify_Actor
{
public:
	class UParticleSystemComponent*                    Husk_Pumpkin_EyeFX;                                       // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Husk_pumpkin;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_SpecialEvent_Halloween_PumpkinHead.GC_SpecialEvent_Halloween_PumpkinHead_C");
		return ptr;
	}


	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
