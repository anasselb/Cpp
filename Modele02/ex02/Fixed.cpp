/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:33:44 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/22 15:25:27 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed()
{
    this->fixe = 0; 
}

Fixed::Fixed(const int v)
{
    this->fixe = roundf(v * (pow(2,fractional)));
}

Fixed::Fixed(float v)
{
    this->fixe = roundf(v * pow(2,fractional));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    this->fixe = copy.fixe;
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

Fixed& Fixed::operator*(const Fixed &f1)
{
    float v = (float)this->fixe / pow(2.0,fractional) * (float)f1.getRawBits() / pow(2.0,fractional);
    this->fixe = roundf(v * pow(2,fractional));
    return *this;
}

Fixed& Fixed::operator/(const Fixed &f1)
{
    float v = (float)this->fixe / pow(2.0,fractional) / (float)f1.getRawBits() / pow(2.0,fractional);
    this->fixe = roundf(v * pow(2,fractional));
    return *this;
}

Fixed& Fixed::operator-(const Fixed &f1)
{
    this->fixe -= f1.fixe;
    return *this;
}

Fixed& Fixed::operator+(const Fixed &f1)
{
    this->fixe += f1.fixe;
    return *this;
}

Fixed& Fixed::operator++( void )
{
    this->fixe++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed copy = *this;
    this->fixe++;
    return copy;
}

Fixed& Fixed::operator--( void )
{
    this->fixe--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed copy = *this;
    this->fixe--;
    return copy;
}


/***  comparison operators  ****/
bool Fixed::operator>(const Fixed &f1)
{
    return (this->fixe > f1.getRawBits());
}

bool Fixed::operator<(const Fixed &f1)
{
    return (this->fixe < f1.getRawBits());
}

bool Fixed::operator>=(const Fixed &f1)
{
    return (this->fixe >= f1.getRawBits());
}

bool Fixed::operator<=(const Fixed &f1)
{
    return (this->fixe <= f1.getRawBits());
}

bool Fixed::operator==(const Fixed &f1)
{
    return (this->fixe == f1.getRawBits());
}

bool Fixed::operator!=(const Fixed &f1)
{
    return (this->fixe != f1.getRawBits());
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
    if (first.fixe > second.fixe)
        return (second);
    else
        return (first);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
    if (first.getRawBits() > second.getRawBits())
        return (second);
    else
        return (first);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
    if (first.fixe < second.fixe)
        return (second);
    else
        return (first);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
    if (first.getRawBits() < second.getRawBits())
        return (second);
    else
        return (first);
}