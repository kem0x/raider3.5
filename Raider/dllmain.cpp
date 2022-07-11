#pragma once

#include "SDK.hpp"
#include "Logic/Game.h"
#include "hooks.h"
#include "Logger.hpp"
#include "ufunctionhooks.h"
#include "Config.h"
#include "Configuration.h"



DWORD WINAPI Main(LPVOID lpParam)
{
    AllocConsole();

    raider::utils::Logger::Initialize();

    LOG_INFO("Welcome to Raider!");
    LOG_INFO("Initializing hooks!");

    Native::InitializeAll();
    UFunctionHooks::Initialize();

    DETOUR_START
    DetourAttachE(Native::NetDriver::TickFlush, Hooks::TickFlush);
    DetourAttachE(Native::LocalPlayer::SpawnPlayActor, Hooks::LocalPlayerSpawnPlayActor);

    auto Address = Utils::FindPattern(Patterns::NetDebug);
    CheckNullFatal(Address, "Failed to find NetDebug");
    void* (*NetDebug)(void* _this) = nullptr;
    AddressToFunction(Address, NetDebug);

    DetourAttachE(NetDebug, Hooks::NetDebug);
    DetourAttachE(ProcessEvent, Hooks::ProcessEventHook);
    DETOUR_END

    LOG_INFO("Base Address: {:X}", Imagebase);

    //GetKismetSystem()->STATIC_ExecuteConsoleCommand(GetWorld(), L"log LogFortReplicationGraph VeryVerbose", GetPlayerController());
    //GetKismetSystem()->STATIC_ExecuteConsoleCommand(GetWorld(), L"log LogReplicationGraph VeryVerbose", GetPlayerController());

    CreateConsole();
    Configuration::loadConfiguration();
    return 1;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(nullptr, 0, Main, hModule, 0, nullptr);

    return true;
}
