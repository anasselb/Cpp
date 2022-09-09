//
// Created by Anass El bacha on 9/9/22.
//

#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP
#include <iostream>
#include <string>

template<typename T>
void print_elm(const T &a)
{
    std::cout << a << std::endl;
}

template <typename T>
void iter(T *array,unsigned int len, void (name)(const T &))
{
    for (unsigned int i = 0;i < len;i++)
    {
        name(array[i]);
    }
}

#endif //CPP_ITER_HPP
