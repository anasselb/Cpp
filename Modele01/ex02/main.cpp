/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:35:35 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/13 17:08:48 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "memory address : " << &str << std::endl;
    std::cout << "memory address : " << &stringPTR << std::endl;
    std::cout << "memory address : " << &stringREF << std::endl;

    std::cout << "value  : "<< str << std::endl;
    std::cout << "value  : "<< *stringPTR << std::endl;
    std::cout << "value  : "<< stringREF << std::endl;
    
    
}