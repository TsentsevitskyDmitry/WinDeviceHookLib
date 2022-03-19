#include <Windows.h>

#include "EventLoop.h"

void WDHL::BeginEventLoop()
{
    while(true)
    {
        MSG msg;
        PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE);
    }
}
