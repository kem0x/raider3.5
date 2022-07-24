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

// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
// 0x0031 (0x0239 - 0x0208)
class UItemReceivedHeaderSubWidgetBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UFortGiftBoxItem*                            GiftBoxItem_BP;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     FromUserName_BP;                                          // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FFortReceivedItemLootInfo>           ItemDefs;                                                 // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsBattlePassUpgrade;                                     // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C");
		return ptr;
	}


	void InitFromGiftBoxItem_BP();
	void Construct();
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
