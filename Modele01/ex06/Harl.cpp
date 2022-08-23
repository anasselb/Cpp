/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:39:44 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/15 15:35:39 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money.\n\
You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free.\n\
I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    v[0].level = "DEBUG";
    v[0].p = &Harl::debug;
    v[1].level = "INFO";
    v[1].p = &Harl::info;
    v[2].level = "WARNING";
    v[2].p = &Harl::warning;
    v[3].level = "ERROR";
    v[3].p = &Harl::error;
}

int    Harl::find_in_table( char *level )
{
    if (level)
    {
        for (int i = 0; i < 4;i++)
            if (level == v[i].level)
            {
               return i;;
            }
    }
    return -1;
}

void Harl::print_by_index(int i)
{
    std::cout << "[" << v[i].level << "]" << std::endl;
    (this->*v[i].p)();
    std::cout << std::endl;
}