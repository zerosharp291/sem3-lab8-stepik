#include <cstddef>

#include <iostream>

template <class U, class T>

void copy_n(T *arrA, U *arrB, size_t e)
{
    for (int q = 0; q != e; q++)
        arrA[q] = (T)arrB[q];
}