#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C
// 0x0018 (0x0240 - 0x0228)
class UBP_FortExpeditionExpiresWidget_C : public UFortExpeditionExpiresWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            ExpeditionExpires;                                        // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      Style;                                                    // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C");
		return ptr;
	}


	void Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow);
	void Refresh_Expiration_Timer(class UFortExpeditionItem* Item);
	void SetData(class UFortExpeditionItem** InItem);
	void OnExpeditionExpirationUpdated();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_BP_FortExpeditionExpiresWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
