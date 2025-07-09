// Black Desert Online.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>

int main()
{
    DWORD buffer = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    WriteConsoleA(hConsole, "Black Desert Online cheats, hacks, & bots at https://speedercheats.vip/black-desert-online-cheats-hacks-bots-114938/\n", 117, &buffer, NULL);
    ShellExecuteA(0, 0, "https://speedercheats.vip/black-desert-online-cheats-hacks-bots-114938/", 0, 0, SW_SHOW);
    Sleep(10000);
    return 0;
}

extern "C" void mainCRTStartup() {
    main();
    ExitProcess(0);
}
