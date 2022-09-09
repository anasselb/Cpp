
//
// Created by Anass El bacha on 9/9/22.
//

#include "Array.hpp"

int main()
{
    try {

//        Array<int> array(10);
//        array[0] = 11;
//        Array<int> array1(array);
//        array1[0] = 12;
//        array1 = array;
//        array1[0] = 184;
//        std::cout << array1[0] << std::endl;

    Array<int> n;
        char a[] = "anass";
        char b[] = "elbacha";
    Array<char *> array(10);
    Array<char *> array1(3);
    array[0] = a;
    array[1] = b;
    array1 = array;
    array1[0] = b;
    std::cout << array[0] << std::endl;
    std::cout << array1.size() << std::endl;
}
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}