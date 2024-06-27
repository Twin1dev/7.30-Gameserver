#include <Windows.h>
#include <cstdio>

#include <MinHook.h>
#include "loguru.hpp"

#include "Server.h"

#include "SDK/SDK.hpp"
using namespace SDK;

#define CONSOLE 1

/*
made by vxzty and twin1

refactor by raax

siphon effect btw
*/

void SetupLoguru()
{
    loguru::add_file("730_Gameserver.log", loguru::Append, loguru::Verbosity_MAX);

    LOG_F(INFO, "Setup loguru!");
}

DWORD WINAPI Main(LPVOID)
{
#if CONSOLE
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);
    freopen_s(&fptr, "CONOUT$", "w+", stderr);

    SetConsoleTitleA("7.30 Gameserver");
#endif

    SetupLoguru();

    MH_Initialize();
    InitGObjects();

    Server::StartServer();
    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, Main, nullptr, 0, nullptr);
        break;
    }
    return TRUE;
}