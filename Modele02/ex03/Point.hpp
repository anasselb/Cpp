/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:41:51 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/22 17:50:58 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
    
public:
    Point();
    Point(const float x,const float y);
    Point(Point& point);
    Point& operator=(const Point& point);
    ~Point();

    float get_x( void ) const;
    float get_y( void ) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

