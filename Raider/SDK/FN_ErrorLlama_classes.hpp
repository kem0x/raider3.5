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

// WidgetBlueprintGeneratedClass ErrorLlama.ErrorLlama_C
// 0x0030 (0x0238 - 0x0208)
class UErrorLlama_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    MID_Llama;                                                // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFlippedTexture;                                          // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	struct FVector2D                                   CurLookAt2D;                                              // 0x0224(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	ECommonInputType                                   CurInputType;                                             // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              EyeInterpSpeed;                                           // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaterialInputScale;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ErrorLlama.ErrorLlama_C");
		return ptr;
	}


	void HandleInputTypeChanged(ECommonInputType NewInputType);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void RandomizeColor();
	void HandleNormalizedInputDirection(const struct FVector2D& _2DInputVec);
	void ExecuteUbergraph_ErrorLlama(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
