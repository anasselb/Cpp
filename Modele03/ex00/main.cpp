/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:00:57 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/24 19:07:34 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::string name = "anass";
    ClapTrap first(name);
    first.attack("ANASSS");
    first.takeDamage(5);
    first.beRepaired(5);
}