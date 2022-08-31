/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:08:43 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/26 11:39:07 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

std::string DiamondTrap::get_name() const { return name;}

DiamondTrap::DiamondTrap()
{
    std::cout << "Default DIAMOND Constructor called\n";
    name = "";
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;  
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DIAMOND Constructor called\n";
    this->name = name;
    this->Name = name + "_clap_name";
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;    
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    name = copy.get_name();
    HitPoint = copy.get_HitPoint();
    EnergyPoint = copy.get_EnergyPoint();
    AttackDamage = copy.get_AttackDamage();    
    std::cout << "DIAMOND copy Constructor called\n";
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
    ClapTrap::Name = copy.get_Name();
    name = copy.get_name();
    HitPoint = copy.get_HitPoint();
    EnergyPoint = copy.get_EnergyPoint();
    AttackDamage = copy.get_AttackDamage();
    return *this;
}


void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name = " << DiamondTrap::name << "; ClapTrap name = " << Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DIAMOND Destructor called\n";
}