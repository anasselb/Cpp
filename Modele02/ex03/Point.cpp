/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:41:53 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/22 17:33:15 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0),y(0) {}


Point::Point(const float x,const float y) : x(x),y(y) {}


Point::Point(Point& point) : x(point.x),y(point.y) {}


Point& Point::operator=(const Point& point)
{
    (void)point;
    return (*this);
}

Point::~Point()
{
    
}

float Point::get_x( void ) const
{
    return (this->x.toFloat());
}

float Point::get_y( void ) const
{
    return (this->y.toFloat());
}