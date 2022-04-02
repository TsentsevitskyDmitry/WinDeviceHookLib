#include <Windows.h>

#include "MouseHook.h"

namespace WMHL
{
    MouseHook* MouseHook::GetInstance()
    {
        static MouseHook _instance;
        return &_instance;
    }

    MouseHook::MouseHook()
    {
        HINSTANCE hInstance = GetModuleHandle(nullptr);
        SetWindowsHookEx(WH_MOUSE_LL, MouseProc, hInstance, 0);
    }

    void MouseHook::SetCallback(CallbackType callback)
    {
        auto intance = MouseHook::GetInstance();
        intance->m_callback = callback;
    }

    LRESULT CALLBACK MouseHook::MouseProc(int nCode, WPARAM wParam, LPARAM lParam)
    {
        if (nCode >= 0)
        {
            MOUSEHOOKSTRUCT* pMouseStruct = reinterpret_cast<MOUSEHOOKSTRUCT*>(lParam);
            EventData data = {pMouseStruct->pt.x, pMouseStruct->pt.y};
            auto intance = MouseHook::GetInstance();

            switch (wParam )
            {
            case WM_LBUTTONDOWN:
                intance->m_callback(EventType::LBUTTONDOWN, data);
                break;
            case WM_RBUTTONDOWN:
                intance->m_callback(EventType::RBUTTONDOWN, data);
                break;
            case WM_MOUSEMOVE:
                intance->m_callback(EventType::MOUSEMOVE, data);
                break;
            }
        }

        return CallNextHookEx(nullptr, nCode, wParam, lParam);
    }

    void SetCallback(CallbackType callback)
    {
        MouseHook::SetCallback(callback);
    }
}
