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
#include "Intern.hpp"

int main()
{


    try
    {

            Bureaucrat B("1nas",1);
            Intern someRandomIntern;
            Form* rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            rrf->beSigned(B);
            rrf->execute(B);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}