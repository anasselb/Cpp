/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:23:30 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/27 17:26:14 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
    
public:
    Animal();
    Animal(Animal& copy);
    Animal& operator=(Animal& copy);
    ~Animal();

    std::string getType( void ) const;

    virtual void    makeSound() const = 0;
};



#endif