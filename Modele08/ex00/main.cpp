
#include "easyfind.hpp"

int main()
{
    std::array<int,9> v1 = {1,2,3,5,6,4,7,8,9};
    std::vector<int> v;
    for (int i = 0; i < 10;i++)
        v.push_back(i);
//    for (std::vector<int>::iterator i = v.begin(); i != v.end();i++)
//            std::cout << *i << std::endl;

//    for (std::array<int,10>::iterator i = v1.begin(); i != v1.end();i++)
//            std::cout << *i << std::endl;
    try {
        std::cout << easyfind(v1, 8) << std::endl;
    }
    catch (const char *e){
        std::cout << e << std::endl;
    }
}