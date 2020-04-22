#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

namespace winrt::RuntimeComponent::implementation
{
    Class::Class()
    {
    }

    int32_t Class::MyProperty()
    {
        return 42;
    }

    void Class::MyProperty(int32_t /* value */)
    {
    }
}
