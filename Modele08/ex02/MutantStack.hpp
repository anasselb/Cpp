//
// Created by Anass El bacha on 9/11/22.
//

#ifndef CPP_MUTANTSTACK_HPP
#define CPP_MUTANTSTACK_HPP
#include <stack>
#include <string>
#include <iostream>
#include <deque>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(){
        return std::begin(std::stack<T>::c);
    }
    iterator end(){
        return std::end(std::stack<T>::c);
    }

};


#endif //CPP_MUTANTSTACK_HPP
