/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:48:28 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/14 15:35:04 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string type)
{
    name = type;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " <<  weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wpn)
{
    weapon = &wpn;
}