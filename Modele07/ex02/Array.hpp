//
// Created by Anass El bacha on 9/9/22.
//

#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP
#include <iostream>
#include <string>

template <typename T>
class Array {
private:
    T *_array;
    unsigned int _size;
public:
    Array()
    {
        _array = new T;
        _size = 0;
    }
    Array(unsigned int n)
    {
        _array = new T[n];
        _size = n;
        for(unsigned int i = 0; i < n;i++)
            _array[i] = 0;
    }
    Array(Array &copy)
    {
        T tmp;

        _array = new T[copy._size];
        _size = copy._size;
        for (unsigned int i = 0;i < copy._size;i++)
        {
            tmp = copy._array[i];
            _array[i] = tmp;
        }

    }
    Array& operator=(Array  &copy)
    {
        T tmp;

        delete[] _array;
        _array = new T[copy._size];
        _size = copy._size;
        for (unsigned int i = 0;i < copy._size;i++)
        {
            tmp = copy._array[i];
            _array[i] = tmp;
        }
        return *this;
    }
    ~Array()
    {
        delete[] _array;
    }

    T& operator[](unsigned int index){
        if (index >= _size)
            throw std::exception();
        return _array[index];
    }

    unsigned int size( void ) const {return _size;}
};


#endif //CPP_ARRAY_HPP
