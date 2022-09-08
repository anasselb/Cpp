
#include "Convert.hpp"

int main(int ac , char **av)
{
    if (ac == 2)
    {
        Convert C(av[1]);
        C.print_char();
        C.ConvertToint();
        C.ConvertTofloat();
    }
    else
        std::cout << "ERROR" << std::endl;
    return (0);
}
