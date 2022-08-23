/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:49:44 by ael-bach          #+#    #+#             */
/*   Updated: 2022/07/31 17:45:24 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>
# include "PhoneBook.hpp"

int PhoneBook::check_nbr(std::string str)
{
    int i = 0;

    while (i < (int)str.length())
    {
        if (!isdigit(str[i]))
            return 1;
        i++;
    }
    return 0;
}

void    PhoneBook::print_Contact(int i)
{
    i -= 1;
    std::cout << "first name\t: " << PhoneBook::contact[i].get_fname() << "\n";
    std::cout << "last name\t: " << PhoneBook::contact[i].get_lname() << "\n";
    std::cout << "Phonenumber\t: " << PhoneBook::contact[i].get_phonenbr() << "\n";
    std::cout << "nickname\t: " << PhoneBook::contact[i].get_kname() << "\n";
    std::cout << "darksecret\t: " << PhoneBook::contact[i].get_darksecret() << "\n";
}

std::string PhoneBook::get_10(std::string str)
{
    if (str.length() > 9)
        return (str.substr(0, 9)) + '.';
    return (str);
}

std::string PhoneBook::add_data(std::string str)
{
    std::string fname;

    while (1)
    {
        std::cout << str;
        std::getline(std::cin, fname);
        if (std::cin.eof())
            exit(0);
        if (fname.size() > 0)
            return (fname);
    }
}

std::string PhoneBook::add_phonenbr(std::string str)
{
    std::string lname;

    while (1)
    {
        std::cout << str;
        std::getline(std::cin, lname);
        if (std::cin.eof())
            exit(0);
        if (lname.size() > 0 && !check_nbr(lname))
            return (lname);
    }
}

/***************************************************************/
void    PhoneBook::ADD(int index, int nbr)
{
    Cnbr = 8;
    if (index <= 7 && nbr < 8)
        Cnbr = index + 1;
    PhoneBook::contact[index].set_fname(add_data("first name\t: "));
    PhoneBook::contact[index].set_lname(add_data("last name\t: "));
    PhoneBook::contact[index].set_kname(add_data("nickname\t: "));
    PhoneBook::contact[index].set_phonenbr(add_phonenbr("Phonenumber\t: "));
    PhoneBook::contact[index].set_darksecret(add_data("darksecret\t: "));
}

void    PhoneBook::SEARCH( void )
{
    int     index;

    for (int i = 0;i < Cnbr;i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << get_10(PhoneBook::contact[i].get_fname())  << "|";
        std::cout << std::setw(10) << get_10(PhoneBook::contact[i].get_lname()) << "|";
        std::cout << std::setw(10) << get_10(PhoneBook::contact[i].get_kname()) << "\n";
    }
    while (1 && Cnbr > 0)
    {
        index = stoi(PhoneBook::add_phonenbr("index\t: "));
        if (index <= Cnbr && index > 0)
        {
            print_Contact(index);
            break;
        }
        std::cout << "ERROR : index Out of range or non numeric number\n";
    }
    if (Cnbr == 0)
        std::cout << "Contact empty\n";
}
/***************************************************************/


