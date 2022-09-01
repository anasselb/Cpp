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

#include "Form.hpp"

int main()
{


    try
    {
        std::string name = "anass";
//        Bureaucrat ls(name,150);
        Bureaucrat anass(name,3);
//        anass.increment();
        anass.decrement();
        std::cout << anass << std::endl;
        Form p("DOCX",0,10,10);
        p.beSigned(anass);
        anass.signedForm(p);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}