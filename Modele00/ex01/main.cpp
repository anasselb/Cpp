/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:54:44 by ael-bach          #+#    #+#             */
/*   Updated: 2022/07/31 17:41:17 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include <cctype>
#include <iomanip>
# include "PhoneBook.hpp"

int main()
{
    std::string line;
    PhoneBook   phonebook;
    int         index;
    int         i;
    int         nbr = 0;

    i = 0;
    while (1)
    {
        index = i % 8;
        std::cout << "command\t: ";
        std::getline(std::cin, line);
        if (std::cin.eof())
            exit(0);
        if (!line.compare("ADD"))
        {
            phonebook.ADD(index, nbr);
            i++;
        }
        if (!line.compare("SEARCH"))
            phonebook.SEARCH();
        if (!line.compare("EXIT"))
            exit (0);
            nbr++;
    }
    
}