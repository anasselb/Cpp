//
// Created by Anass El bacha on 9/10/22.
//

#include "Span.hpp"


Span::Span() {
}

Span::Span(const unsigned int N) {
    _N = N;
    _nStored = 0;
}

Span::Span(const Span &copy) {
    _N = copy._N;
    _nStored = copy._nStored;

    std::vector<int>::const_iterator it;

    it = copy.nbr.cbegin();
    while(it != copy.nbr.cend())
    {
        nbr.push_back(*it);
        ++it;
    }
}

Span &Span::operator=(const Span &copy) {

    _N = copy._N;
    _nStored = copy._nStored;

    std::vector<int>::const_iterator it;

    it = copy.nbr.cbegin();
    while(it != copy.nbr.cend())
    {
        nbr.push_back(*it);
        ++it;
    }
    return *this;
}

Span::~Span() {

}

void Span::addNumber(int number) {
    if (_nStored + 1 > _N)
        throw "OUT OF SIZE";
    _nStored += 1;
    nbr.push_back(number);
}


int Span::longestSpan() {
    int max = *std::max_element(nbr.cbegin(),nbr.cend());
    int min = *std::min_element(nbr.cbegin(),nbr.cend());

    return max - min;
}

int Span::shortestSpan() {

    int min;
    std::vector<int> n(nbr);

    std::sort(n.begin(),n.end());
    std::vector<int>::const_iterator it;

    it = n.cbegin() + 1;
    min = *it - *(it - 1);
    it = n.cbegin() + 1;
    while(it != n.cend())
    {
        min = std::min(min, *it - *(it - 1));
        it += 2;
    }
    return min;
}

void Span::add_numbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

    while (begin != end)
    {
        addNumber(*begin);
        ++begin;
    }
}