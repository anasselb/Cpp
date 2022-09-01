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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{


    try
    {
         std::string an = "PAAPA";
        Bureaucrat B("ANANA", 1);
 /* 1
        ShrubberyCreationForm A(an);
        A.beSigned(B);
        A.execute(B);*/
        RobotomyRequestForm R(an);
        R.beSigned(B);
        R.execute(B);
//        PresidentialPardonForm P(an);
//        P.beSigned(B);
//        P.execute(B);
        B.executeForm(R);

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}