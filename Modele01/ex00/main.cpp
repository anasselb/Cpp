/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:25:13 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/16 15:04:52 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie *zomb1;

    zomb1 = newZombie("zombie1");
    randomChump( "zombie2" );
    delete zomb1;
    return (0);
}