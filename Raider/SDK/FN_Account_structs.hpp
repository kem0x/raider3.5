#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Account.EExternalAccountType
enum class EExternalAccountType : uint8_t
{
	None                           = 0,
	Facebook                       = 1,
	Google                         = 2,
	Epic_PSN                       = 3,
	Epic_XBL                       = 4,
	EExternalAccountType_MAX       = 5
};


// Enum Account.ECreateAccountResult
enum class ECreateAccountResult : uint8_t
{
	NotStarted                     = 0,
	Pending                        = 1,
	Success                        = 2,
	Console_LoginFailed            = 3,
	Console_DuplicateAuthAssociation = 4,
	DuplicateAccount               = 5,
	GenericError                   = 6,
	ECreateAccountResult_MAX       = 7
};


// Enum Account.ELoginResult
enum class ELoginResult : uint8_t
{
	NotStarted                     = 0,
	Pending                        = 1,
	Success                        = 2,
	Console_LoginFailed            = 3,
	Console_AuthFailed             = 4,
	Console_MissingAuthAssociation = 5,
	Console_DuplicateAuthAssociation = 6,
	Console_AddedAuthAssociation   = 7,
	Console_AuthAssociationFailure = 8,
	Console_NotEntitled            = 9,
	Console_EntitlementCheckFailed = 10,
	Console_PrivilegeCheck         = 11,
	Console_PatchOrUpdateRequired  = 12,
	AuthFailed                     = 13,
	AuthFailed_RefreshInvalid      = 14,
	AuthFailed_InvalidMFA          = 15,
	AuthFailed_RequiresMFA         = 16,
	AuthParentalLock               = 17,
	PlatformNotAllowed             = 18,
	NotEntitled                    = 19,
	Banned                         = 20,
	EULACheckFailed                = 21,
	WaitingRoomFailed              = 22,
	ServiceUnavailable             = 23,
	GenericError                   = 24,
	RejoinCheckFailure             = 25,
	ConnectionFailed               = 26,
	ExternalAuth_AddedAuthAssociation = 27,
	ExternalAuth_ConnectionTimeout = 28,
	ExternalAuth_AuthFailure       = 29,
	ExternalAuth_AssociationFailure = 30,
	ExternalAuth_MissingAuthAssociation = 31,
	FailedToCreateParty            = 32,
	ProfileQueryFailed             = 33,
	ClientSettingsDownloadFailed   = 34,
	ELoginResult_MAX               = 35
};


// Enum Account.EConsoleAuthLinkState
enum class EConsoleAuthLinkState : uint8_t
{
	NotOnConsole                   = 0,
	ConsoleNotLoggedIn             = 1,
	EpicNotLoggedIn                = 2,
	ThisEpicAccountLinked          = 3,
	OtherEpicAccountLinked         = 4,
	NoEpicAccountLinked            = 5,
	EConsoleAuthLinkState_MAX      = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Account.WebEnvUrl
// 0x0030
struct FWebEnvUrl
{
	struct FString                                     URL;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RedirectUrl;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Environment;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Account.ExternalAccountServiceConfig
// 0x0010
struct FExternalAccountServiceConfig
{
	EExternalAccountType                               Type;                                                     // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ExternalServiceName;                                      // 0x0008(0x0008) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Account.GiftMessage
// 0x0030
struct FGiftMessage
{
	struct FString                                     GiftCode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SenderName;                                               // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Account.ExchangeAccessParams
// 0x0040
struct FExchangeAccessParams
{
	struct FString                                     EntitlementId;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ReceiptId;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     VendorReceipt;                                            // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     AppStore;                                                 // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Account.OnlineAccountTexts_FailedLoginConsole
// 0x0138
struct FOnlineAccountTexts_FailedLoginConsole
{
	struct FText                                       AgeRestriction;                                           // 0x0000(0x0018) (Edit)
	struct FText                                       Generic;                                                  // 0x0018(0x0018) (Edit)
	struct FText                                       MissingAuthAssociation;                                   // 0x0030(0x0018) (Edit)
	struct FText                                       NeedPremiumAccount;                                       // 0x0048(0x0018) (Edit)
	struct FText                                       OnlinePlayRestriction;                                    // 0x0060(0x0018) (Edit)
	struct FText                                       PatchAvailable;                                           // 0x0078(0x0018) (Edit)
	struct FText                                       PleaseSignIn;                                             // 0x0090(0x0018) (Edit)
	struct FText                                       SystemUpdateAvailable;                                    // 0x00A8(0x0018) (Edit)
	struct FText                                       UI;                                                       // 0x00C0(0x0018) (Edit)
	struct FText                                       UnableToComplete;                                         // 0x00D8(0x0018) (Edit)
	struct FText                                       UnableToSignIn;                                           // 0x00F0(0x0018) (Edit)
	struct FText                                       UnableToStartPrivCheck;                                   // 0x0108(0x0018) (Edit)
	struct FText                                       UnexpectedError;                                          // 0x0120(0x0018) (Edit)
};

// ScriptStruct Account.OnlineAccountTexts
// 0x0930
struct FOnlineAccountTexts
{
	struct FText                                       AllGiftCodesUsed;                                         // 0x0000(0x0018) (Edit)
	struct FText                                       AssociateConsoleAuth;                                     // 0x0018(0x0018) (Edit)
	struct FText                                       AutoLoginFailed;                                          // 0x0030(0x0018) (Edit)
	struct FText                                       BannedFromGame;                                           // 0x0048(0x0018) (Edit)
	struct FText                                       CheckEntitledToPlay;                                      // 0x0060(0x0018) (Edit)
	struct FText                                       CheckingRejoin;                                           // 0x0078(0x0018) (Edit)
	struct FText                                       CheckServiceAvailability;                                 // 0x0090(0x0018) (Edit)
	struct FText                                       ConsolePrivileges;                                        // 0x00A8(0x0018) (Edit)
	struct FText                                       CreateAccountCompleted;                                   // 0x00C0(0x0018) (Edit)
	struct FText                                       CreateAccountFailure;                                     // 0x00D8(0x0018) (Edit)
	struct FText                                       CreateHeadless;                                           // 0x00F0(0x0018) (Edit)
	struct FText                                       DoQosPingTests;                                           // 0x0108(0x0018) (Edit)
	struct FText                                       DowntimeMinutesWarningText;                               // 0x0120(0x0018) (Edit)
	struct FText                                       DowntimeSecondsWarningText;                               // 0x0138(0x0018) (Edit)
	struct FText                                       DuplicateAuthAssociaton;                                  // 0x0150(0x0018) (Edit)
	struct FText                                       EulaCheck;                                                // 0x0168(0x0018) (Edit)
	struct FText                                       ExchangeConsoleGiftsForAccess;                            // 0x0180(0x0018) (Edit)
	struct FText                                       ExchangeConsolePurchaseForAccess;                         // 0x0198(0x0018) (Edit)
	struct FText                                       FailedAccountCreate;                                      // 0x01B0(0x0018) (Edit)
	struct FText                                       FailedEulaCheck_EulaAcceptanceFailed;                     // 0x01C8(0x0018) (Edit)
	struct FText                                       FailedEulaCheck_MustAcceptEula;                           // 0x01E0(0x0018) (Edit)
	struct FText                                       FailedLoginCredentialsMsg;                                // 0x01F8(0x0018) (Edit)
	struct FText                                       FailedLoginParentalLock;                                  // 0x0210(0x0018) (Edit)
	struct FText                                       FailedLoginNoRealId;                                      // 0x0228(0x0018) (Edit)
	struct FText                                       FailedLoginLockoutMsg;                                    // 0x0240(0x0018) (Edit)
	struct FText                                       FailedLoginRequiresMFA;                                   // 0x0258(0x0018) (Edit)
	struct FText                                       FailedInvalidMFA;                                         // 0x0270(0x0018) (Edit)
	struct FText                                       FailedLoginMsg;                                           // 0x0288(0x0018) (Edit)
	struct FText                                       FailedLoginMsg_InvalidRefreshToken;                       // 0x02A0(0x0018) (Edit)
	struct FText                                       FailedLoginTencent_UnableToSignIn;                        // 0x02B8(0x0018) (Edit)
	struct FText                                       FailedLoginTencent_NotSignedInToWeGame;                   // 0x02D0(0x0018) (Edit)
	struct FText                                       FailedLoginTencent_FailedToInitializeWeGame;              // 0x02E8(0x0018) (Edit)
	struct FText                                       FailedLoginTencent_WeGameSystemOffline;                   // 0x0300(0x0018) (Edit)
	struct FText                                       FailedStartLogin;                                         // 0x0318(0x0018) (Edit)
	struct FText                                       FounderChatExitedText;                                    // 0x0330(0x0018) (Edit)
	struct FText                                       FounderChatJoinedText;                                    // 0x0348(0x0018) (Edit)
	struct FText                                       GameDisplayName;                                          // 0x0360(0x0018) (Edit)
	struct FText                                       GeneralLoginFailure;                                      // 0x0378(0x0018) (Edit)
	struct FText                                       GlobalChatExitedText;                                     // 0x0390(0x0018) (Edit)
	struct FText                                       GlobalChatJoinedText;                                     // 0x03A8(0x0018) (Edit)
	struct FText                                       HeadlessAccountFailed;                                    // 0x03C0(0x0018) (Edit)
	struct FText                                       InMatchShutdownTimeWarningText;                           // 0x03D8(0x0018) (Edit)
	struct FText                                       InvalidUser;                                              // 0x03F0(0x0018) (Edit)
	struct FText                                       LoggedOutofMCP;                                           // 0x0408(0x0018) (Edit)
	struct FText                                       DisconnectedFromMCP;                                      // 0x0420(0x0018) (Edit)
	struct FText                                       LoggedOutReturnedToTitle;                                 // 0x0438(0x0018) (Edit)
	struct FText                                       LoggedOutSwitchedProfile;                                 // 0x0450(0x0018) (Edit)
	struct FText                                       LoggingIn;                                                // 0x0468(0x0018) (Edit)
	struct FText                                       LoggingInConsoleAuth;                                     // 0x0480(0x0018) (Edit)
	struct FText                                       LoggingOut;                                               // 0x0498(0x0018) (Edit)
	struct FText                                       LoginConsole;                                             // 0x04B0(0x0018) (Edit)
	struct FText                                       LoginFailure;                                             // 0x04C8(0x0018) (Edit)
	struct FText                                       Logout_Unlink;                                            // 0x04E0(0x0018) (Edit)
	struct FText                                       LogoutCompleted;                                          // 0x04F8(0x0018) (Edit)
	struct FText                                       LostConnection;                                           // 0x0510(0x0018) (Edit)
	struct FText                                       MCPTimeout;                                               // 0x0528(0x0018) (Edit)
	struct FText                                       LightswitchCheckNetworkFailureMsg;                        // 0x0540(0x0018) (Edit)
	struct FText                                       NoPlayEntitlement;                                        // 0x0558(0x0018) (Edit)
	struct FText                                       NoServerAccess;                                           // 0x0570(0x0018) (Edit)
	struct FText                                       PlayAccessRevoked;                                        // 0x0588(0x0018) (Edit)
	struct FText                                       PremiumAccountName_Default;                               // 0x05A0(0x0018) (Edit)
	struct FText                                       PremiumAccountName_PS4;                                   // 0x05B8(0x0018) (Edit)
	struct FText                                       PremiumAccountName_Switch;                                // 0x05D0(0x0018) (Edit)
	struct FText                                       PremiumAccountName_XboxOne;                               // 0x05E8(0x0018) (Edit)
	struct FText                                       RedeemOfflinePurchases;                                   // 0x0600(0x0018) (Edit)
	struct FText                                       ServiceDowntime;                                          // 0x0618(0x0018) (Edit)
	struct FText                                       SignInCompleting;                                         // 0x0630(0x0018) (Edit)
	struct FText                                       SignIntoConsoleServices;                                  // 0x0648(0x0018) (Edit)
	struct FText                                       TokenExpired;                                             // 0x0660(0x0018) (Edit)
	struct FText                                       UnableToConnect;                                          // 0x0678(0x0018) (Edit)
	struct FText                                       UnableToJoinWaitingRoomLoginQueue;                        // 0x0690(0x0018) (Edit)
	struct FText                                       UnexpectedConsoleAuthFailure;                             // 0x06A8(0x0018) (Edit)
	struct FText                                       UnlinkConsoleFailed;                                      // 0x06C0(0x0018) (Edit)
	struct FText                                       UserLoginFailed;                                          // 0x06D8(0x0018) (Edit)
	struct FText                                       WaitingRoom;                                              // 0x06F0(0x0018) (Edit)
	struct FText                                       WaitingRoomError;                                         // 0x0708(0x0018) (Edit)
	struct FText                                       WaitingRoomFailure;                                       // 0x0720(0x0018) (Edit)
	struct FText                                       WaitingRoomWaiting;                                       // 0x0738(0x0018) (Edit)
	struct FOnlineAccountTexts_FailedLoginConsole      FailedLoginConsole;                                       // 0x0750(0x0138) (Edit)
	struct FText                                       LoggingInExternalAuth;                                    // 0x0888(0x0018) (Edit)
	struct FText                                       CreateDeviceAuth;                                         // 0x08A0(0x0018) (Edit)
	struct FText                                       ExtAuthCanceled;                                          // 0x08B8(0x0018) (Edit)
	struct FText                                       ExtAuthFailure;                                           // 0x08D0(0x0018) (Edit)
	struct FText                                       ExtAuthAssociationFailure;                                // 0x08E8(0x0018) (Edit)
	struct FText                                       ExtAuthTimeout;                                           // 0x0900(0x0018) (Edit)
	struct FText                                       ExtAuthMissingAuthAssociation;                            // 0x0918(0x0018) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
