/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:16:23 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/13 16:29:25 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    Zombie *zombs;

    zombs = zombieHorde(5,"test");

    for (int i = 0;i < 5;i++)
        zombs[i].announce();
    delete[] zombs;
    return (0);
}