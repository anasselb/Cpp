/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:32:01 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/22 17:49:51 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


int main( void )
{
    Point a;
    Point b(10,30);
    Point c(20,0);
    Point point(10,15);
    //Point point(50,15);

    std::cout << bsp( a, b, c, point) << std::endl;
    return 0;
}
