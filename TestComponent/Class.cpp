#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

#include <winrt/Microsoft.UI.Interop.h>

namespace winrt::TestComponent::implementation
{
    void Class::ShowMessage(const winrt::hstring &message)
    {
        MessageBoxW(nullptr, message.c_str(), L"Message", MB_OK);
    }

    void Class::ShowMessage(const winrt::hstring &message, winrt::Microsoft::UI::WindowId windowId)
    {
        auto window = winrt::Microsoft::UI::GetWindowFromWindowId(windowId);
        MessageBoxW(window, message.c_str(), L"Message", MB_OK);
    }
}
