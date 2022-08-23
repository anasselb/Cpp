/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:33:44 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/19 14:22:02 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 0;

Fixed::Fixed()
{
    this->fixe = 0; 
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called\n";
    operator=(copy);
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    this->fixe = copy.fixe;
    std::cout << "Copy assignment operator called\n";
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (this->fixe);
}

void Fixed::setRawBits(int const raw )
{
    this->fixe = raw;
}