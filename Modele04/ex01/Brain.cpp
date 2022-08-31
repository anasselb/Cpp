/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:40:41 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/27 16:05:37 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Default Brain Constructor is called" << std::endl;
}

Brain::Brain(Brain& copy)
{
    operator=(copy);
    std::cout << "Default Brain Constructor is called" << std::endl;
}

Brain& Brain::operator=(Brain& copy)
{
    for(int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Default Brain Destructor is called" << std::endl;
}
