//
// Created by Anass El bacha on 9/10/22.
//

#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP
#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include <array>
#include <algorithm>

class Span {
    std::vector<int> nbr;
    unsigned int _N;
    unsigned int _nStored;
public:
    Span();
    Span(const unsigned int N);
    Span(const Span &copy);
    Span& operator=(const Span &copy);
    ~Span();

    void    addNumber( int number );
    int     shortestSpan( void );
    int      longestSpan( void );

    void add_numbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

};


#endif //CPP_SPA