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

// BlueprintGeneratedClass GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C
// 0x0028 (0x0448 - 0x0420)
class AGCNL_Generic_BotTurret_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class AB_BGA_BotTurret_Parent_C*                   BotTurret;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftGunOffset;                                            // 0x0430(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightGunOffset;                                           // 0x043C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C");
		return ptr;
	}


	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void BotFired(int Left);
	void Activated();
	void BindBotFired();
	void BindBotExplosionWarning();
	void BotExplosionWarning();
	void ExecuteUbergraph_GCNL_Generic_BotTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
