/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:27:39 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/16 11:14:29 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac == 4 && strlen(av[2]) > 0)
    {
        std::ifstream   file;
        std::fstream    file_replace;
        std::string     line;
        size_t          pos;

        file.open(av[1], std::ifstream::in);
        if (file.is_open())
        {
            file_replace.open(av[1] + (std::string)".replace", std::ofstream::out | std::ofstream::trunc);
            if (file_replace.is_open())
            {
                
                while (getline(file, line))
                {   
                    pos = line.find(av[2]);
                    if (pos != std::string::npos)
                    {
                        while (pos != std::string::npos)
                        {
                            std::cout << "pos" << pos << std::endl;
                            line = line.erase(pos , strlen(av[2]));
                            line = line.insert(pos, av[3]);
                            pos = line.find(av[2], pos + strlen(av[3]));   
                        }
                        file_replace << line << '\n';
                    }
                    else
                        file_replace << line << '\n';
                }
            }
        }
        else
            std::cout << "Error : permission denied / Unable to open file .\n";
    }
    else
        std::cout << "Error : YOU NEED 3 ARG :: filename  str1 , str2 .\n";
}