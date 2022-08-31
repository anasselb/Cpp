/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:23:05 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/27 17:26:25 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal Constructor is called" << std::endl;
}

Animal::Animal(Animal& copy)
{
    operator=(copy);
    std::cout << "Animal Copy Constructor is called" << std::endl;
}

Animal& Animal::operator=(Animal& copy)
{
    type = copy.getType();
    return *this;
}

// void    Animal::makeSound() const
// {
//     std::cout << "Animal : \"............\"" << std::endl;
// }


std::string Animal::getType( void ) const { return type;}

Animal::~Animal()
{
    std::cout << "Default Animal Destructor is called" << std::endl;
}