/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:33:57 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/23 11:05:15 by ael-bach         ###   ########.fr       */
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
    Fixed(const Fixed &copy);
    Fixed& operator=(const Fixed &copy);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & out, const Fixed &f);

#endif