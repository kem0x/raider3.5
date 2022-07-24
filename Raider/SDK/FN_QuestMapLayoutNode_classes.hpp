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

// WidgetBlueprintGeneratedClass QuestMapLayoutNode.QuestMapLayoutNode_C
// 0x0018 (0x0248 - 0x0230)
class UQuestMapLayoutNode_C : public UFortLayoutQuestNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	bool                                               Quest_Tile_Show_Bottom_Text;                              // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UFortQuestItemDefinition*                    Quest_Tile_Item_Def;                                      // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestMapLayoutNode.QuestMapLayoutNode_C");
		return ptr;
	}


	void SetQuestTileProps();
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void ExecuteUbergraph_QuestMapLayoutNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
