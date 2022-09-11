//
// Created by Anass El bacha on 9/10/22.
//

#include "Span.hpp"

int main()
{

    try {
        Span sp = Span(10);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::vector<int> v(4,100);

        sp.add_numbers(v.begin(),v.end());
    }
    catch (const char *e) {
        std::cout << e << std::endl;
    }

    return 0;
}