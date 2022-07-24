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

// WidgetBlueprintGeneratedClass ScoreMessageNumber.ScoreMessageNumber_C
// 0x0029 (0x0239 - 0x0210)
class UScoreMessageNumber_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            ScoreValue;                                               // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Score;                                                    // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnScoreValueSet;                                          // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EStatCategory                                      ScoreCategory;                                            // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreMessageNumber.ScoreMessageNumber_C");
		return ptr;
	}


	void SetScore(int InScore);
	void UpdateScoreText();
	void Construct();
	void ExecuteUbergraph_ScoreMessageNumber(int EntryPoint);
	void OnScoreValueSet__DelegateSignature(EStatCategory ChangedScoreCategory);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
