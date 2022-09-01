/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:22:57 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/27 14:34:00 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.h"

int main()
{


    try
    {
        std::string name = "anass";
        Bureaucrat ls(name,5);
//        Bureaucrat anass(name,0);
//        ls.increment();
//        ls.decrement();
        std::cout << ls << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}