#include <Windows.h>

#include "EventLoop.h"

void WDHL::BeginEventLoop(const bool& condition)
{
    while(condition)
    {
        MSG msg;
        PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE);
    }
}

void WDHL::BeginEventLoop()
{
    bool endless = true;
    WDHL::BeginEventLoop(endless);
}
