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

// WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C
// 0x00E5 (0x03FD - 0x0318)
class UBP_FortExpeditionMasterWidget_C : public UFortExpeditionMasterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UBP_FortExpeditionOverviewWidget_C*          BP_FortExpeditionOverviewWidget;                          // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackInputAction;                                          // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         BuildExpeditionAction;                                    // 0x0338(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         AbandonExpeditionAction;                                  // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CollectExpeditionAction;                                  // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SortInputAction;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bRewardsShowing;                                          // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UFortExpeditionItem*>                 CompletedExpeditions;                                     // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFrontEndRewards_Definition                 RewardsDefinition;                                        // 0x0398(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	EFortExpeditionListSort                            ExpeditionListSortType;                                   // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortExpeditionListSort                            ExpeditionListSortBegin;                                  // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortExpeditionListSort                            ExpeditionListSortEnd;                                    // 0x03FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockedByStorageWarningShown;                             // 0x03FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockedByProfileLockWarningShown;                         // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C");
		return ptr;
	}


	void HandleSortExpeditionListAction(bool* Passthrough);
	void Disable_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void HandleCollectExpeditionAction(bool* Passthrough);
	void HandleAbandonExpeditionAction(bool* Passthrough);
	void HandleBuildExpeditionAction(bool* Passthrough);
	void Present_Reward_UI();
	void Show_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Hide_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Update_Master_Widget();
	void Setup_Bindings();
	void Setup_Input_Action_Handlers();
	void Handle_Back(bool* Passthrough);
	void DialogResult_99152A754621D0E9A8C9C889926A827D(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_67CD2E3A4E1A6780703420B1064D5BD1(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_39A80A89449E8489E8E81EAECC14DE95(EFortDialogResult Result, const struct FName& ResultName);
	void Construct();
	void Destruct();
	void HandleAllCompletedExpeditionsCollected();
	void HACK_OnActivate_UpdateMasterWidget();
	void OnActivated();
	void OnRewardsBlockedByStorage();
	void OnRewardsBlockedByLockedProfile();
	void ExecuteUbergraph_BP_FortExpeditionMasterWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
