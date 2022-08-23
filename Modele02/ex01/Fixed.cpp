/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:33:44 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/22 17:54:39 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed()
{
    this->fixe = 0; 
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int v)
{
    this->fixe = roundf(v * (pow(2,fractional)));
    std::cout << "Copy constructor called\n";
}

Fixed::Fixed(float v)
{
    this->fixe = roundf(v * pow(2,fractional));
    std::cout << "Copy constructor called\n";
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
    return (this->fixe);
}

void Fixed::setRawBits(int const raw )
{
    this->fixe = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixe / pow(2.0,fractional));
}

int Fixed::toInt( void ) const
{
    return (this->fixe / pow(2.0,fractional));
}
std::ostream & operator<<(std::ostream &out, const Fixed &f){
    out << f.toFloat();
    return out;
}