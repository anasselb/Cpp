/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:44:49 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/27 12:11:04 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default Cat Constructor is Called" << std::endl;
}

Cat::Cat(Cat& copy)
{
    type = copy.getType();
    std::cout << "Cat Constructor is Called" << std::endl;
}

Cat& Cat::operator=(Cat& copy)
{
    type = copy.getType();
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Cat : Meow Meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor is Called" << std::endl;
}