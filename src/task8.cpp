#include <type_traits>

template <class A, class B>
struct SameType
{
    static const bool value = std::is_same<A, B>::value;
};