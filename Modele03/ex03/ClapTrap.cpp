/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:42:01 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/26 10:27:45 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "";
    this->HitPoint = 0;
    this->EnergyPoint = 0;
    this->AttackDamage = 0;
    std::cout << "Default Base Constructor is called" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
    std::cout << "Base Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    this->Name = copy.get_Name();
    this->HitPoint = copy.get_HitPoint();
    this->EnergyPoint = copy.get_EnergyPoint();
    this->AttackDamage = copy.get_AttackDamage();
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
    this->Name = copy.get_Name();
    this->HitPoint = copy.get_HitPoint();
    this->EnergyPoint = copy.get_EnergyPoint();
    this->AttackDamage = copy.get_AttackDamage();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Base Destructor is called" << std::endl;
}

std::string  ClapTrap::get_Name( void ) const { return (this->Name); }
unsigned int ClapTrap::get_HitPoint( void ) const { return (this->HitPoint); }
unsigned int ClapTrap::get_EnergyPoint( void ) const { return (this->EnergyPoint); }
unsigned int ClapTrap::get_AttackDamage( void ) const { return (this->AttackDamage); }

void    ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0 && this->HitPoint > 0)
    {
        this->EnergyPoint -= 1;
        std::cout << "ClapTrap " << this->Name << " attacks " << target  << ", ";
    }
    else if (this->EnergyPoint == 0)
        std::cout << "no energy points left.\n";
    else if (this->HitPoint == 0)
        std::cout << "no hit points left.\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->EnergyPoint > 0 && this->HitPoint > 0)
    {
        this->HitPoint -= amount;
        std::cout << "causing " << amount << " points of damage!\n";
    }
    else if (this->EnergyPoint == 0)
        std::cout << "no energy points left.\n";
    else if (this->HitPoint == 0)
        std::cout << "no hit points left.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint > 0 && this->HitPoint > 0)
    {
        this->HitPoint += amount;
        this->EnergyPoint -= 1;
        std::cout <<  "ClapTrap repairs itself\n";
    }
    else if (this->EnergyPoint == 0)
        std::cout << "no energy points left.\n";
    else if (this->HitPoint == 0)
        std::cout << "no hit points left.\n";
}