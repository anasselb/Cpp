/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:39:36 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/27 16:54:10 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();

    std::cout << "Default Dog Constructor is Called" << std::endl;
}

Dog::Dog(Dog& copy)
{
    type = copy.getType();
    brain = new Brain(*copy.brain);  
    std::cout << "Dog Constructor is Called" << std::endl;
}

Dog& Dog::operator=(Dog& copy)
{
    type = copy.getType();
    delete brain;
    brain = new Brain(*copy.brain);  
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Dog : bark bark" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor is Called" << std::endl;
}