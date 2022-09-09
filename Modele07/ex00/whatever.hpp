//
// Created by Anass El bacha on 9/8/22.
//

#ifndef CPP_WHATEVER_HPP
#define CPP_WHATEVER_HPP
#include <string>
#include <iostream>

template <typename T>
T min(T const & n1, T const & n2)
{
    return ((n1 > n2) ? n2 : n1);
}

template <typename T>
T max(T const & n1, T const & n2)
{
    return ((n1 < n2) ? n2 : n1);
}

template <typename T>
void swap(T &n1, T &n2)
{
    T tmp = n1;
    n1 = n2;
    n2 = tmp;

}
#endif //CPP_WHATEVER_HPP
