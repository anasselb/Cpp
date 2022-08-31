/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:00:57 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/26 10:17:49 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::string name = "ANASS";
    std::string name1 = "son";
    // ClapTrap first(name);
    DiamondTrap dervid(name);
    dervid.attack(name);
    dervid.whoAmI();

}