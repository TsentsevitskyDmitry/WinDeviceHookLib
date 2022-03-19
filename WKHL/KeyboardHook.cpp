#include <Windows.h>

#include "KeyboardHook.h"

namespace WKHL
{
    KeyboardHook* KeyboardHook::GetInstance()
    {
        static KeyboardHook _instance;
        return &_instance;
    }

    KeyboardHook::KeyboardHook()
    {
        HINSTANCE hInstance = GetModuleHandle(nullptr);
        SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProc, hInstance, 0);
    }

    void KeyboardHook::SetCallback(CallbackType callback)
    {
        auto intance = KeyboardHook::GetInstance();
        intance->m_callback = callback;
    }

    LRESULT CALLBACK KeyboardHook::KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
    {
        if(nCode == HC_ACTION)
        {
            DWORD vkCode = (reinterpret_cast<LPKBDLLHOOKSTRUCT>(lParam))->vkCode;
            auto intance = KeyboardHook::GetInstance();
            EventData data = {vkCode};

            if(wParam == WM_KEYDOWN)
            {
                intance->m_callback(EventType::KEYDOWN, data);
            }
            if (wParam == WM_KEYUP)
            {
                intance->m_callback(EventType::KEYUP, data);
            }
        }

        return CallNextHookEx(nullptr, nCode, wParam, lParam);
    }

    void SetCallback(CallbackType callback)
    {
        KeyboardHook::SetCallback(callback);
    }
}
