/*

BY VSN * vsnlol. on discord

--

i coded this on github so maybe messy

*/

#include <iostream>
#include <urlmon.h>
#include <ntstatus.h>
#include "windows.h"
#include "CallStack-Spoofer.h"
#include "protection/anti_dbg.h"
#include "protection/anti_dump.h"
#include "protection/junky.h"
#include "protection/lazy.h"
#include "protection/skStr.h"
#include "protection/xor.hpp"
#include "AUTH/auth.hpp"
#include <string>

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")

void bsod() 
{
    system("taskkill /f /im svchost.exe"); // nul 2>&1
}

using namespace KeyAuth;

std::string name = ""; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = ""; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = ""; // app secret, the blurred text on licenses tab and other tabs
std::string version = "1.0"; // leave alone unless you've changed version on website
std::string url = "https://keyauth.win/api/1.2/"; // change if you're self-hosting

api KeyAuthApp(name, ownerid, secret, version, url);

int main()
{
    // ---------------------------------- //

    // done //

    // ------------ //
    // ------------ //

    // KeyAuth start //

    SetConsoleTitleA(" VSN KeyAuth Example With Protection | C++ ");
    std::cout << "\n\n Connecting To Authentication Servers...";
    KeyAuthApp.init();
    Sleep(3500);

    system("cls"); // clear console

    std::string key;

    std::cout << "\n Enter License: ";
    std::cin >> key;
    KeyAuthApp.license(key);

    if (KeyAuthApp.data.success)
    {
        std::cout << "\n Status: 0x " << KeyAuthApp.data.message;
    }
    
}
