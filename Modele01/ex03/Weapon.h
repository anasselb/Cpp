/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:40:52 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/14 15:37:52 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(const std::string &typ);
        ~Weapon();
    
    std::string getType() const;
    void    setType(std::string type);
};


#endif