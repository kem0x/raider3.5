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

// BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
// 0x0024 (0x0F30 - 0x0F0C)
class AB_Assault_LMG_SAW_Athena_C : public AB_Assault_Bulletswarm_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F10(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     LaserScaleUntargeted;                                     // 0x0F18(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LaserScaleTargeted;                                       // 0x0F24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetTargeting(bool* bNewIsTargeting);
	void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
