/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:48:16 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/14 15:33:26 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"



HumanA::HumanA(std::string type, Weapon &wpn)
{
    name = type;
    weapon = &wpn;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " <<  weapon->getType() << std::endl;
}
