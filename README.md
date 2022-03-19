# WinDevHookLib
Windows Device Hook Library

## Sync Example
````cpp
#include <iostream>
#include <thread>
#include <Windows.h>

#include "WMHL/MouseHook.h"
#include "WKHL/KeyboardHook.h"

void MouseEvent(WMHL::EventType type, WMHL::EventData& data)
{
    if(type == WMHL::EventType::LBUTTONDOWN) std::cout << "LBUTTONDOWN ";
    if(type == WMHL::EventType::RBUTTONDOWN) std::cout << "RBUTTONDOWN ";
    std::cout << data.x << ":" << data.y << std::endl;
}

void KeyboardEvent(WKHL::EventType type, WKHL::EventData& data)
{
    if (data.vkCode == WKHL_VK_SPACE){
        if (type == WKHL::EventType::KEYDOWN)
            std::cout << "IT'S SPACE!" << std::endl;
        return;
    }

    if (data.vkCode >= 'A' && data.vkCode <= 'Z'){
        if (type == WKHL::EventType::KEYDOWN)
            std::cout << static_cast<char>(data.vkCode) << std::endl;
        return;
    }

    if(type == WKHL::EventType::KEYDOWN) std::cout << "KEYDOWN ";
    if(type == WKHL::EventType::KEYUP) std::cout << "KEYUP ";
    std::cout << data.vkCode << std::endl;
}

int main()
{
    WMHL::MouseHook::SetCallback(MouseEvent);
    WKHL::KeyboardHook::SetCallback(KeyboardEvent);

    WDHL::BeginEventLoop();
}

````
