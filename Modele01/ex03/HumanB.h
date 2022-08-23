/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:49:10 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/14 15:35:07 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

class HumanB
{
private:
    Weapon      *weapon;
    std::string name;
public:
    HumanB(std::string type);
    HumanB();
    ~HumanB();
    
    void    setWeapon(Weapon &wpn);
    void    attack();
};
