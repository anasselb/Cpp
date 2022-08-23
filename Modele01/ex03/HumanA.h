/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:49:13 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/14 15:33:04 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.h"
#include <iostream>

class HumanA
{
private:
    Weapon      *weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon &wpn);
    ~HumanA();

    void    attack();
};

#endif