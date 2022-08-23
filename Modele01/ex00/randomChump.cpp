/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:21:45 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/13 15:54:29 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void    randomChump( std::string name )
{
    Zombie zomb;

    if (!name.empty())
    {
        zomb.set_name (name);
        zomb.announce(); 
    }

}