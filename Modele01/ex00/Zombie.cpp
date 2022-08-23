/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:55:00 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/16 15:07:04 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Destractor message : " << name << std::endl;
}

void Zombie::set_name( std::string name )
{
    Zombie::name = name;
}

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
