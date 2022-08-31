/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:42:13 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/25 18:27:29 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string Name;
    unsigned int HitPoint;
    unsigned int EnergyPoint;
    unsigned int AttackDamage;
    
public:
    ClapTrap();
    ClapTrap(std::string &name);
    ClapTrap(ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &copy);
    ~ClapTrap();

    
    std::string  get_Name( void ) const;
    unsigned int get_HitPoint( void ) const;
    unsigned int get_EnergyPoint( void ) const;
    unsigned int get_AttackDamage( void ) const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif