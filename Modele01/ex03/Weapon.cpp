/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:40:23 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/14 15:37:49 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(const std::string &typ)
{
    type = typ;
}


Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
    return (type);
}

void Weapon::setType(std::string typ)
{
    type = typ;
}