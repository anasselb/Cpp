/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:56:35 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/26 10:51:20 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    Name = "";
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << "Default FragTrap Constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
    Name = name;
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << "FragTrap Constructor is called" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
    Name = copy.get_Name();
    HitPoint = copy.get_HitPoint();
    EnergyPoint = copy.get_EnergyPoint();
    AttackDamage = copy.get_AttackDamage();
    
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    Name = copy.get_Name();
    HitPoint = copy.get_HitPoint();
    EnergyPoint = copy.get_EnergyPoint();
    AttackDamage = copy.get_AttackDamage();
    return *this;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "**  High * Fives **\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor is called" << std::endl;
}
