#include <functional>
#include <basetsd.h>

#include "WDHL/EventLoop.h"

namespace WMHL
{
    enum class EventType
    {
        RBUTTONDOWN,
        LBUTTONDOWN
    };

    struct EventData
    {
        long x;
        long y;
    };

    using CallbackType = std::function<void(EventType, EventData&)>;

    class MouseHook
    {
    public:
        explicit MouseHook();
        static MouseHook* GetInstance();
        static void SetCallback(CallbackType callback);
        static LONG_PTR __stdcall MouseProc(int nCode, UINT_PTR wParam, LONG_PTR lParam);

    private:
        static MouseHook* m_instance;
        CallbackType m_callback;
    };

    void SetCallback(CallbackType callback);
}
