/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:36:28 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/26 10:58:56 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    Name = "";
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << "Default ScavTrap Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string &name)
{
    Name = name;
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
    Name = copy.get_Name();
    HitPoint = copy.get_HitPoint();
    EnergyPoint = copy.get_EnergyPoint();
    AttackDamage = copy.get_AttackDamage();
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
    Name = copy.get_Name();
    HitPoint = copy.get_HitPoint();
    EnergyPoint = copy.get_EnergyPoint();
    AttackDamage = copy.get_AttackDamage();
    return *this;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0 && this->HitPoint > 0)
    {
        this->EnergyPoint -= 1;
        std::cout << "ScavTrap " << this->Name << " attacks " << target  << ", \n";
    }
    else if (this->EnergyPoint == 0)
        std::cout << "no energy points left.\n";
    else if (this->HitPoint == 0)
        std::cout << "no hit points left.\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap Destructor is called" << std::endl;
}