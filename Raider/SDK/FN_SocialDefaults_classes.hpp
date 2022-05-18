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

// Class SocialDefaults.ChatColorSchemeDataAsset
// 0x0120 (0x0150 - 0x0030)
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatColorScheme                            ChatColorData;                                            // 0x0030(0x0120) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.ChatColorSchemeDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialActionButtonStyleDataAsset
// 0x0278 (0x02A8 - 0x0030)
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	struct FButtonStyle                                Style;                                                    // 0x0030(0x0278) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialActionButtonStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeColorSchemeDataAsset
// 0x0050 (0x0080 - 0x0030)
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatChromeColorScheme                      Style;                                                    // 0x0030(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeColorSchemeDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeMarginsDataAsset
// 0x0068 (0x0098 - 0x0030)
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	struct FChatChromeMargins                          Style;                                                    // 0x0030(0x0064) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeMarginsDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeStyleDataAsset
// 0x07C8 (0x07F8 - 0x0030)
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	struct FChatChromeStyle                            Style;                                                    // 0x0030(0x07C8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatMarkupStyleDataAsset
// 0x0610 (0x0640 - 0x0030)
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	struct FChatMarkupStyle                            Style;                                                    // 0x0030(0x0610) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatMarkupStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatStyleDataAsset
// 0x1370 (0x13A0 - 0x0030)
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	struct FChatStyle                                  Style;                                                    // 0x0030(0x1370) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialCheckBoxStyleDataAsset
// 0x0580 (0x05B0 - 0x0030)
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                              Style;                                                    // 0x0030(0x0580) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialCheckBoxStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialFontStyleDataAsset
// 0x0240 (0x0270 - 0x0030)
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	struct FSocialFontStyle                            Style;                                                    // 0x0030(0x0240) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialFontStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialListMarginsDataAsset
// 0x0200 (0x0230 - 0x0030)
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	struct FSocialListMargins                          Style;                                                    // 0x0030(0x0200) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialListMarginsDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialListStyleDataAsset
// 0x2700 (0x2730 - 0x0030)
class USocialListStyleDataAsset : public UDataAsset
{
public:
	struct FSocialListStyle                            Style;                                                    // 0x0030(0x2700) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialListStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialProfanityDataAsset
// 0x0010 (0x0040 - 0x0030)
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                      ProfanityData;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialProfanityDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialRadioBoxStyleDataAsset
// 0x0580 (0x05B0 - 0x0030)
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                              Style;                                                    // 0x0030(0x0580) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialRadioBoxStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialScrollBarStyleDataAsset
// 0x04D0 (0x0500 - 0x0030)
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	struct FScrollBarStyle                             Style;                                                    // 0x0030(0x04D0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialScrollBarStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialSoundSchemaDataAsset
// 0x0048 (0x0078 - 0x0030)
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	struct FSocialSoundSchema                          SoundSchema;                                              // 0x0030(0x0048) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialSoundSchemaDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialStyleDataAsset
// 0x6840 (0x6870 - 0x0030)
class USocialStyleDataAsset : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*                   SmallFontStyle;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialFontStyleDataAsset*                   NormalFontStyle;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialFontStyleDataAsset*                   LargeFontStyle;                                           // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialFontStyleDataAsset*                   ChatFontStyle;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialListStyleDataAsset*                   SocialListStyle;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialListMarginsDataAsset*                 SocialListMargins;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialChatStyleDataAsset*                   ChatStyle;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialChatChromeStyleDataAsset*             ChatChromeStyle;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialChatChromeMarginsDataAsset*           ChatChromeMargins;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialChatChromeColorSchemeDataAsset*       ChatChromeColorScheme;                                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UChatColorSchemeDataAsset*                   ChatColorScheme;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialSoundSchemaDataAsset*                 SoundSchema;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialActionButtonStyleDataAsset*           ActionButtonStyle;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialCheckBoxStyleDataAsset*               CheckBoxStyle;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialRadioBoxStyleDataAsset*               RadioBoxStyle;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialScrollBarStyleDataAsset*              ScrollBoxStyle;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialChatMarkupStyleDataAsset*             MarkupStyle;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialProfanityDataAsset*                   ProfanityDataAsset;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67B0];                                    // 0x00C0(0x67B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialStyleDataAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
