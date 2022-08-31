/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:44:49 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/27 16:46:54 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Default Cat Constructor is Called" << std::endl;
}

Cat::Cat(Cat& copy)
{
    type = copy.getType();
    brain = new Brain(*copy.brain);    
    std::cout << "Cat Constructor is Called" << std::endl;
}

Cat& Cat::operator=(Cat& copy)
{
    type = copy.getType();
    delete brain;
    brain = new Brain(*copy.brain);   
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Cat : Meow Meow" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor is Called" << std::endl;
}