/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:46:53 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/15 15:33:53 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
    Harl    charl;
    int     index;

    if (ac == 2)
    {
        index = charl.find_in_table(av[1]);
        switch (index)
        {
            case 0:
                charl.print_by_index(0);
            case 1:
                charl.print_by_index(1);
            case 2:
                charl.print_by_index(2);
            case 3:
                charl.print_by_index(3);
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]\n";
                break;
        }
                
    }
}