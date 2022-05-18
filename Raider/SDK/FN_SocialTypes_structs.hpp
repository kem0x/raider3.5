#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SocialTypes.ChatChromeColorScheme
// 0x0050
struct FChatChromeColorScheme
{
	struct FLinearColor                                ChatEntryBackgroundColor;                                 // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                NoneActiveTabColor;                                       // 0x0010(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TabFontColor;                                             // 0x0020(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TabFontColorInverted;                                     // 0x0030(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                ChatBackgroundColor;                                      // 0x0040(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.ChatChromeMargins
// 0x0064
struct FChatChromeMargins
{
	float                                              TabWidth;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TabPadding;                                               // 0x0004(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     ChatWindowPadding;                                        // 0x0014(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     ChatWindowToEntryMargin;                                  // 0x0024(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     ChatChannelPadding;                                       // 0x0034(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     UserListButtonPadding;                                    // 0x0044(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     UserListIconPadding;                                      // 0x0054(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.ChatChromeStyle
// 0x07C8
struct FChatChromeStyle
{
	struct FSlateBrush                                 UserListBrush;                                            // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 ChatBackgroundBrush;                                      // 0x0088(0x0088) (Edit)
	struct FSlateBrush                                 ChatEntryBackgroundBrush;                                 // 0x0110(0x0088) (Edit)
	struct FSlateBrush                                 ChannelBackgroundBrush;                                   // 0x0198(0x0088) (Edit)
	struct FSlateBrush                                 TabBackgroundBrush;                                       // 0x0220(0x0088) (Edit)
	struct FButtonStyle                                TabSelectorButtonStyle;                                   // 0x02A8(0x0278) (Edit)
	struct FMargin                                     TabOptionPadding;                                         // 0x0520(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     TabContentPadding;                                        // 0x0530(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     TabClosePadding;                                          // 0x0540(0x0010) (Edit, IsPlainOldData)
	struct FButtonStyle                                UserListButtonStyle;                                      // 0x0550(0x0278) (Edit)
};

// ScriptStruct SocialTypes.ChatColorScheme
// 0x0120
struct FChatColorScheme
{
	struct FLinearColor                                TimeStampColor;                                           // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DefaultChatColor;                                         // 0x0010(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                WhisperChatColor;                                         // 0x0020(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GlobalChatColor;                                          // 0x0030(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FounderChatColor;                                         // 0x0040(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GameChatColor;                                            // 0x0050(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TeamChatColor;                                            // 0x0060(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                PartyChatColor;                                           // 0x0070(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                AdminChatColor;                                           // 0x0080(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GameAdminChatColor;                                       // 0x0090(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                WhisperHyperlinkChatColor;                                // 0x00A0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GlobalHyperlinkChatColor;                                 // 0x00B0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FounderHyperlinkChatColor;                                // 0x00C0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GameHyperlinkChatColor;                                   // 0x00D0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TeamHyperlinkChatColor;                                   // 0x00E0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                PartyHyperlinkChatColor;                                  // 0x00F0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x0100(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FriendlyColor;                                            // 0x0110(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.ChatMarkupStyle
// 0x0610
struct FChatMarkupStyle
{
	struct FButtonStyle                                MarkupButtonStyle;                                        // 0x0000(0x0278) (Edit)
	struct FTextBlockStyle                             MarkupTextStyle;                                          // 0x0278(0x01E8) (Edit)
	struct FSlateBrush                                 MarkupBackground;                                         // 0x0460(0x0088) (Edit)
	struct FSlateColor                                 ButtonColor;                                              // 0x04E8(0x0028) (Edit)
	struct FSlateColor                                 ButtonHoverColor;                                         // 0x0510(0x0028) (Edit)
	struct FSlateColor                                 TipColor;                                                 // 0x0538(0x0028) (Edit)
	struct FSlateBrush                                 SeperatorBrush;                                           // 0x0560(0x0088) (Edit)
	float                                              SeperatorThickness;                                       // 0x05E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MarkupPadding;                                            // 0x05EC(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     ButtonPadding;                                            // 0x05FC(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x060C(0x0004) MISSED OFFSET
};

// ScriptStruct SocialTypes.ChatStyle
// 0x1370
struct FChatStyle
{
	struct FEditableTextBoxStyle                       ChatEntryTextStyle;                                       // 0x0000(0x07F8) (Edit)
	struct FEditableTextBoxStyle                       ChatDisplayTextStyle;                                     // 0x07F8(0x07F8) (Edit)
	struct FScrollBoxStyle                             ScrollBorderStyle;                                        // 0x0FF0(0x0228) (Edit)
	struct FSlateBrush                                 MessageNotificationBrush;                                 // 0x1218(0x0088) (Edit)
	struct FMargin                                     ChatEntryPadding;                                         // 0x12A0(0x0010) (Edit, IsPlainOldData)
	float                                              ChatEntryHeight;                                          // 0x12B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x12B4(0x0004) MISSED OFFSET
	struct FSlateBrush                                 ChatMenuBackgroundBrush;                                  // 0x12B8(0x0088) (Edit)
	struct FMargin                                     FriendActionPadding;                                      // 0x1340(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendActionHeaderPadding;                                // 0x1350(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendActionStatusMargin;                                 // 0x1360(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.SocialFontStyle
// 0x0240
struct FSocialFontStyle
{
	struct FSlateFontInfo                              FontSmall;                                                // 0x0000(0x0058) (Edit)
	struct FSlateFontInfo                              FontSmallBold;                                            // 0x0058(0x0058) (Edit)
	struct FSlateFontInfo                              FontNormal;                                               // 0x00B0(0x0058) (Edit)
	struct FSlateFontInfo                              FontNormalBold;                                           // 0x0108(0x0058) (Edit)
	struct FSlateFontInfo                              FontLarge;                                                // 0x0160(0x0058) (Edit)
	struct FSlateFontInfo                              FontLargeBold;                                            // 0x01B8(0x0058) (Edit)
	struct FLinearColor                                DefaultFontColor;                                         // 0x0210(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                InvertedFontColor;                                        // 0x0220(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DefaultDullFontColor;                                     // 0x0230(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.SocialListMargins
// 0x0200
struct FSocialListMargins
{
	struct FVector2D                                   UserPresenceImageSize;                                    // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FMargin                                     HeaderButtonMargin;                                       // 0x0008(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendsListMargin;                                        // 0x0018(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendsListNoFriendsMargin;                               // 0x0028(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendsListHeaderMargin;                                  // 0x0038(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendsListHeaderCountMargin;                             // 0x0048(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     HeaderButtonContentMargin;                                // 0x0058(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendItemMargin;                                         // 0x0068(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendItemStatusMargin;                                   // 0x0078(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendTipStatusMargin;                                    // 0x0088(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendItemPresenceMargin;                                 // 0x0098(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendItemPlatformMargin;                                 // 0x00A8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendItemTextScrollerMargin;                             // 0x00B8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     ConfirmationBorderMargin;                                 // 0x00C8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     ConfirmationButtonMargin;                                 // 0x00D8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     ConfirmationButtonContentMargin;                          // 0x00E8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     NoneFriendContentMargin;                                  // 0x00F8(0x0010) (Edit, IsPlainOldData)
	float                                              NoneFriendContentHeight;                                  // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoneFriendIconWidth;                                      // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SubMenuBackIconMargin;                                    // 0x0110(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     SubMenuPageIconMargin;                                    // 0x0120(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     RadioSettingTitleMargin;                                  // 0x0130(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     SubMenuSearchIconMargin;                                  // 0x0140(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     SubMenuSearchTextMargin;                                  // 0x0150(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     SubMenuBackButtonMargin;                                  // 0x0160(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     SubMenuSettingButtonMargin;                               // 0x0170(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     SubMenuListMargin;                                        // 0x0180(0x0010) (Edit, IsPlainOldData)
	float                                              SubMenuSeperatorThickness;                                // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PresenceSeperatorThickness;                               // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     FriendTipMargin;                                          // 0x0198(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendTipPresenceMargin;                                  // 0x01A8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     FriendTipSeperatorMargin;                                 // 0x01B8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     ToolTipMargin;                                            // 0x01C8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     TipStatusMargin;                                          // 0x01D8(0x0010) (Edit, IsPlainOldData)
	struct FMargin                                     AddButtonMargin;                                          // 0x01E8(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   AddButtonSpacing;                                         // 0x01F8(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.SocialListStyle
// 0x2700
struct FSocialListStyle
{
	struct FButtonStyle                                GlobalChatButtonStyle;                                    // 0x0000(0x0278) (Edit)
	struct FSlateBrush                                 GlobalChatIcon;                                           // 0x0278(0x0088) (Edit)
	struct FButtonStyle                                FriendItemButtonStyle;                                    // 0x0300(0x0278) (Edit)
	struct FButtonStyle                                ConfirmButtonStyle;                                       // 0x0578(0x0278) (Edit)
	struct FButtonStyle                                CancelButtonStyle;                                        // 0x07F0(0x0278) (Edit)
	struct FSlateColor                                 ButtonContentColor;                                       // 0x0A68(0x0028) (Edit)
	struct FSlateColor                                 ButtonHoverContentColor;                                  // 0x0A90(0x0028) (Edit)
	struct FSlateBrush                                 ActionMenuArrowBrush;                                     // 0x0AB8(0x0088) (Edit)
	struct FSlateBrush                                 ActionMenuArrowRightBrush;                                // 0x0B40(0x0088) (Edit)
	struct FSlateColor                                 ActionMenuBackgroundColor;                                // 0x0BC8(0x0028) (Edit)
	struct FSlateBrush                                 ToolTipArrowBrush;                                        // 0x0BF0(0x0088) (Edit)
	struct FButtonStyle                                BackButtonStyle;                                          // 0x0C78(0x0278) (Edit)
	struct FButtonStyle                                HeaderButtonStyle;                                        // 0x0EF0(0x0278) (Edit)
	struct FButtonStyle                                FriendListActionButtonStyle;                              // 0x1168(0x0278) (Edit)
	struct FSlateBrush                                 AddFriendButtonContentBrush;                              // 0x13E0(0x0088) (Edit)
	struct FSlateBrush                                 StatusIconBrush;                                          // 0x1468(0x0088) (Edit)
	struct FSlateBrush                                 PCIconBrush;                                              // 0x14F0(0x0088) (Edit)
	struct FSlateBrush                                 ConsoleIconBrush;                                         // 0x1578(0x0088) (Edit)
	struct FSlateBrush                                 MobileIconBrush;                                          // 0x1600(0x0088) (Edit)
	struct FSlateBrush                                 FacebookIconBrush;                                        // 0x1688(0x0088) (Edit)
	struct FSlateBrush                                 EpicIconBrush;                                            // 0x1710(0x0088) (Edit)
	struct FSlateBrush                                 FriendImageBrush;                                         // 0x1798(0x0088) (Edit)
	struct FSlateBrush                                 OfflineBrush;                                             // 0x1820(0x0088) (Edit)
	struct FSlateBrush                                 OnlineBrush;                                              // 0x18A8(0x0088) (Edit)
	struct FSlateBrush                                 AwayBrush;                                                // 0x1930(0x0088) (Edit)
	struct FSlateBrush                                 SpectateBrush;                                            // 0x19B8(0x0088) (Edit)
	struct FSlateBrush                                 FriendsContainerBackground;                               // 0x1A40(0x0088) (Edit)
	struct FSlateBrush                                 FriendsListBackground;                                    // 0x1AC8(0x0088) (Edit)
	struct FEditableTextBoxStyle                       AddFriendEditableTextStyle;                               // 0x1B50(0x07F8) (Edit)
	struct FSlateBrush                                 BackBrush;                                                // 0x2348(0x0088) (Edit)
	struct FSlateBrush                                 SelectedOptionBrush;                                      // 0x23D0(0x0088) (Edit)
	struct FSlateBrush                                 SettingsBrush;                                            // 0x2458(0x0088) (Edit)
	struct FSlateBrush                                 SeperatorBrush;                                           // 0x24E0(0x0088) (Edit)
	struct FSlateBrush                                 PresenceSeperatorBrush;                                   // 0x2568(0x0088) (Edit)
	struct FSlateBrush                                 FontSizeBrush;                                            // 0x25F0(0x0088) (Edit)
	struct FSlateBrush                                 SearchBrush;                                              // 0x2678(0x0088) (Edit)
};

// ScriptStruct SocialTypes.ProfanityData
// 0x0038
struct FProfanityData
{
	struct FString                                     CountryCode;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ProfanityList;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     WhiteList;                                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               bAutoAdd;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SocialTypes.SocialSoundSchema
// 0x0048
struct FSocialSoundSchema
{
	struct FSlateSound                                 MessageReceivedSound;                                     // 0x0000(0x0018) (Edit)
	struct FSlateSound                                 PartyInviteReceivedSound;                                 // 0x0018(0x0018) (Edit)
	struct FSlateSound                                 FriendInviteReceivedSound;                                // 0x0030(0x0018) (Edit)
};

// ScriptStruct SocialTypes.SocialStyle
// 0x67B0
struct FSocialStyle
{
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x04D0) (Edit)
	struct FButtonStyle                                ActionButtonStyle;                                        // 0x04D0(0x0278) (Edit)
	struct FSocialFontStyle                            SmallFontStyle;                                           // 0x0748(0x0240) (Edit)
	struct FSocialFontStyle                            NormalFontStyle;                                          // 0x0988(0x0240) (Edit)
	struct FSocialFontStyle                            LargeFontStyle;                                           // 0x0BC8(0x0240) (Edit)
	struct FSocialFontStyle                            ChatFontStyle;                                            // 0x0E08(0x0240) (Edit)
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x1048(0x0580) (Edit)
	struct FCheckBoxStyle                              RadioBoxStyle;                                            // 0x15C8(0x0580) (Edit)
	struct FSocialListStyle                            SocialListStyle;                                          // 0x1B48(0x2700) (Edit)
	struct FSocialListMargins                          SocialListMargins;                                        // 0x4248(0x0200) (Edit)
	struct FChatStyle                                  ChatStyle;                                                // 0x4448(0x1370) (Edit)
	struct FChatColorScheme                            ChatColorScheme;                                          // 0x57B8(0x0120) (Edit)
	struct FChatChromeStyle                            ChatChromeStyle;                                          // 0x58D8(0x07C8) (Edit)
	struct FChatChromeMargins                          ChatChromeMargins;                                        // 0x60A0(0x0064) (Edit)
	struct FChatChromeColorScheme                      ChatChromeColorScheme;                                    // 0x6104(0x0050) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x6154(0x0004) MISSED OFFSET
	struct FChatMarkupStyle                            ChatMarkupStyle;                                          // 0x6158(0x0610) (Edit)
	struct FSocialSoundSchema                          SoundSchema;                                              // 0x6768(0x0048) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
