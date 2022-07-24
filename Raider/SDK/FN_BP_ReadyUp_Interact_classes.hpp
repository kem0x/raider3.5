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

// BlueprintGeneratedClass BP_ReadyUp_Interact.BP_ReadyUp_Interact_C
// 0x0090 (0x0C40 - 0x0BB0)
class ABP_ReadyUp_Interact_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BB0(0x0008) (Transient, DuplicateTransient)
	struct FText                                       InteractText;                                             // 0x0BB8(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               CanInteract;                                              // 0x0BD0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BD1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0BD1(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.MissionControlWidgetRef
	class UClass*                                      MissionControlWidget;                                     // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       PlayerController;                                         // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       PlayerWhoOpenedMissionControl;                            // 0x0C10(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemToDeposit;                                            // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BluGloMissionActivationQty;                               // 0x0C20(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	class AFortObjectiveBase*                          ReadyUpObjectiveRef;                                      // 0x0C28(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       MissionGuid;                                              // 0x0C30(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReadyUp_Interact.BP_ReadyUp_Interact_C");
		return ptr;
	}


	void ReturnBluGloToPlayer(const TScriptInterface<class UFortInventoryOwnerInterface>& InventoryOwner, int NumberBGtoReturn);
	void TakeBluGloFromPlayer(class AFortPlayerController* PlayerController, int NumberBGtoTake);
	void OnRep_CanInteract();
	bool ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser);
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE(class UClass* Loaded);
	void ReceiveBeginPlay();
	void OpenMissionControl();
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void VoteCalled(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int VoteResult, TArray<struct FVoter> Voters);
	void ExecuteUbergraph_BP_ReadyUp_Interact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
