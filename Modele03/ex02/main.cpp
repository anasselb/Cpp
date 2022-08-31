/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:00:57 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/25 15:20:44 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::string name = "anass";
    std::string name1 = "son";
    // ClapTrap first(name);
    FragTrap dervid(name1);
    // first.attack("ANASSS");
    // first.takeDamage(5);
    // first.beRepaired(5);
    dervid.attack(name);
    dervid.takeDamage(10);
    dervid.beRepaired(10);
    dervid.highFivesGuys();
}