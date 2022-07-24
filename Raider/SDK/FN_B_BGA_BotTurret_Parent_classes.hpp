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

// BlueprintGeneratedClass B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C
// 0x0080 (0x0728 - 0x06A8)
class AB_BGA_BotTurret_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ExplosionBuildUP_Flashes;                                 // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Bot_Self_Destruct_Beep;                                   // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Bot_Turret;                                            // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    BotFired;                                                 // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AFortAIPawn*                                 Target;                                                   // 0x06E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FFBotTurretData                             BotData;                                                  // 0x06E8(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                Left_Right_Gun;                                           // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    BotExplosionWarning;                                      // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BotExplode;                                               // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C");
		return ptr;
	}


	void OnRep_BotData();
	void LeftOrRightGunFired(int A);
	void SetGunSpawnRotFromSocket(const struct FName& SocketName, const struct FVector& InVect);
	void UserConstructionScript();
	void PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade);
	void SetTarget(class AFortAIPawn* Target);
	void Ready();
	void ExecuteUbergraph_B_BGA_BotTurret_Parent(int EntryPoint);
	void BotExplode__DelegateSignature();
	void BotExplosionWarning__DelegateSignature();
	void BotFired__DelegateSignature(int Left);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
