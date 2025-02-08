#pragma once

#include "Class.g.h"

namespace winrt::TestComponent::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        void ShowMessage(const winrt::hstring &message);
        void ShowMessage(const winrt::hstring &message, winrt::Microsoft::UI::WindowId windowId);
    };
}

namespace winrt::TestComponent::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
