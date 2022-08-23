/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:33:57 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/19 14:18:34 by ael-bach         ###   ########.fr       */
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
    Fixed(const Fixed &copy);
    ~Fixed();
    Fixed& operator=(const Fixed &copy);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};



#endif