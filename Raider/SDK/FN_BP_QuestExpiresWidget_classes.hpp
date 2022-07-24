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

// WidgetBlueprintGeneratedClass BP_QuestExpiresWidget.BP_QuestExpiresWidget_C
// 0x001A (0x023A - 0x0220)
class UBP_QuestExpiresWidget_C : public UFortQuestExpiresWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            QuestExpires;                                             // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      Style;                                                    // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBreifText;                                               // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTempDoesExpire;                                          // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_QuestExpiresWidget.BP_QuestExpiresWidget_C");
		return ptr;
	}


	void GetFortPC(class AFortPlayerController** AsFort_Player_Controller);
	void Refresh_Expiration_Timer(class UFortQuestItem* Quest);
	void PreConstruct(bool* IsDesignTime);
	void SetData(class UFortQuestItem** InItem);
	void OnQuestExpirationUpdated();
	void ExecuteUbergraph_BP_QuestExpiresWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
