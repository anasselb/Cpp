/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:05:00 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/22 17:51:23 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    
    return abs((x1 * (y2-y3) + x2 * (y3-y1) + x3 * (y1-y2)) / 2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a.get_x(),a.get_y(),b.get_x(),b.get_y(),c.get_x(),c.get_y());
    float A1 = area(point.get_x(),point.get_y(),b.get_x(),b.get_y(),c.get_x(),c.get_y());
    float A2 = area(a.get_x(),a.get_y(),point.get_x(),point.get_y(),c.get_x(),c.get_y());
    float A3 = area(a.get_x(),a.get_y(),b.get_x(),b.get_y(),point.get_x(),point.get_y());
    
    return (A == A1 + A2 + A3);
}