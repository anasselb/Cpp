/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:39:36 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/27 14:48:29 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Default Dog Constructor is Called" << std::endl;
}

Dog::Dog(Dog& copy)
{
    type = copy.getType();
    std::cout << "Dog Constructor is Called" << std::endl;
}

Dog& Dog::operator=(Dog& copy)
{
    type = copy.getType();
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Dog : bark bark" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor is Called" << std::endl;
}