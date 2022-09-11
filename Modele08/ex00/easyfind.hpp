//
// Created by Anass El bacha on 9/10/22.
//

#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP
#include <string>
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

template <typename T>
int easyfind(T &stl, int n)
{
    typename T::iterator f;
    f = std::find(stl.begin(),stl.end(), n);
    if(f == stl.end())
        throw "Element not found";
    return *f;
}

#endif //CPP_EASYFIND_HPP
