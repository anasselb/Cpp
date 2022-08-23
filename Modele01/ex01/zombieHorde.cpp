/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:17:22 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/13 16:21:16 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zomb;
    
    zomb = new Zombie[N];
    if (!zomb)
        return (NULL);
    for (int i = 0; i < N; i++)
        zomb[i].set_name(name);
    return (zomb);
}