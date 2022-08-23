/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:56:00 by ael-bach          #+#    #+#             */
/*   Updated: 2022/07/28 16:47:21 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        for (int i = 0;av[1][i];i++)
            std::cout << (char)toupper(av[1][i]);
        std::cout << std::endl;
        return (0);
    }
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}