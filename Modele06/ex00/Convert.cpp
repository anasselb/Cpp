//
// Created by Anass El bacha on 9/4/22.
//

#include "Convert.hpp"

std::string Convert::get_Str() const { return _str;}

Convert::Convert() {

}

Convert::Convert(std::string str) {
    _str = str;
}

Convert::Convert(Convert &copy) {
    _str = copy.get_Str();
}

Convert &Convert::operator=(Convert &copy) {

    _str = copy.get_Str();
    return  *this;
}

Convert::~Convert() {

}

int check_digit(std::string str)
{
    for (unsigned long i = 0;i < str.length() ;i++)
        if (!isdigit(str[i]))
            return 0;
    return 1;
}

void Convert::print_char() {

    try {
        int   i = stoi(_str);
        if (i > 32 && i < 127)
            std::cout << "char = " << "\'" << static_cast<char>(i) << "\'" << std::endl;
        else if (stoi(_str) < 32 && stoi(_str) >= 0)
            std::cout << "char =  Non displayable" << std::endl;
        else
            std::cout << "char = impossible" << std::endl;
        return;
    }
    catch (...) {
        std::cout << "char = impossible" << std::endl;
    }
}

int Convert::ConvertToint() {

    try {
        stoi(_str);
        std::cout << "int = " << stoi(_str) << std::endl;
    }
    catch (...)
    {
        std::cout << "int = impossible\n";
    }
    return 0;
}

float Convert::ConvertTofloat() {
    try {
        stof(_str);
        std::cout << "float = " << std::fixed << std::setprecision(2) << stof(_str) << "f" << std::endl;
        std::cout << "double = " << stof(_str) << std::endl;
    }
    catch (...)
    {
        std::cout << "float = " << _str << "f" << std::endl;
        std::cout << "double = " << _str << std::endl;
    }
    return 0;
}