/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:33:57 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/22 15:25:33 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int fixe;
    static const int  fractional;
public:
    Fixed();
    Fixed(const int v);
    Fixed(float v);
    ~Fixed();
    Fixed& operator=(const Fixed &copy);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    /* comparison operators */
    bool operator>(const Fixed &f1);
    bool operator<(const Fixed &f1);
    bool operator>=(const Fixed &f1);
    bool operator<=(const Fixed &f1);
    bool operator==(const Fixed &f1);
    bool operator!=(const Fixed &f1);

    
    /* 4 arithemetic operator*/
    Fixed& operator*(const Fixed &f1);
    Fixed& operator/(const Fixed &f1);
    Fixed& operator-(const Fixed &f1);
    Fixed& operator+(const Fixed &f1);


    /* 4 increment/decrement */
    Fixed& operator++( void );
    Fixed& operator--( void );
    Fixed  operator++(int);
    Fixed  operator--(int);


    /* min/max */
    static Fixed& min(Fixed& first, Fixed& second);
    static Fixed& max(Fixed& first, Fixed& second);
    static const Fixed& min(const Fixed& first, const Fixed& second);
    static const Fixed& max(const Fixed& first, const Fixed& second);
    

    

};

std::ostream & operator<<(std::ostream & out, const Fixed &f);

#endif