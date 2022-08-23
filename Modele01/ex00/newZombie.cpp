/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:20:53 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/13 16:01:51 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* newZombie(std::string name)
{
    Zombie *zomb;

    if (name.empty())
        return (NULL);
    zomb = new Zombie;
    if (!zomb)
        return (NULL);
    zomb->set_name(name);
    return (zomb);
}