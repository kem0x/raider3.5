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

// BlueprintGeneratedClass VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
// 0x0060 (0x0388 - 0x0328)
class AVaultWeaponPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Sparkle;                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Swirl02;                                      // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Swirl01;                                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CharacterPlacement;                                       // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PlayerID;                                                 // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayerSelected;                                        // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C");
		return ptr;
	}


	void OnLobbyPlayerUnhovered(int PlayerIndex);
	void GetFrontendAnimInstance(class UFrontendAnimInstance** AsFrontend_Anim_Instance);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int TeamMemberInfo);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnLobbyStarted();
	void Initialize();
	void InitializeContextEvents();
	void OnLobbyPlayerSelected(int PlayerIndex);
	void OnLobbyPlayerHovered(int PlayerIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ItemRez();
	void ExecuteUbergraph_VaultWeaponPlacementHelper(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
