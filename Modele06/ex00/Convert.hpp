//
// Created by Anass El bacha on 9/4/22.
//

#ifndef C_CONVERT_HPP
#define C_CONVERT_HPP
#include <string>
#include <iostream>
#include <ctype.h>
#include <iomanip>

class Convert {
    std::string _str;
public:
    Convert();
    Convert(std::string str);
    Convert(Convert &copy);
    Convert& operator=(Convert &copy);
    ~Convert();

    std::string get_Str( void ) const;
    int ConvertToint( void );
    float ConvertTofloat( void );
    void    print_char( void );
};
int check_digit(std::string str);

#endif //C_CONVERT_HPP
