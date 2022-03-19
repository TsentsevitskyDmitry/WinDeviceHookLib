#include <functional>
#include <basetsd.h>

#include "WDHL/EventLoop.h"
#include "KeyCodes.h"

namespace WKHL
{
    enum class EventType
    {
        KEYDOWN,
        KEYUP
    };

    struct EventData
    {
         unsigned long vkCode;
    };

    using CallbackType = std::function<void(EventType, EventData&)>;

    class KeyboardHook
    {
    public:
        explicit KeyboardHook();
        static KeyboardHook* GetInstance();
        static void SetCallback(CallbackType callback);
        static LONG_PTR __stdcall KeyboardProc(int nCode, UINT_PTR wParam, LONG_PTR lParam);

    private:
        static KeyboardHook* m_instance;
        CallbackType m_callback;
    };

    void SetCallback(CallbackType callback);
}
