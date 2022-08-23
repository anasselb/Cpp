/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:56:29 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/13 16:24:58 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H_
#define ZOMBIE_H_
#include <iostream>
#include <string>
#include <new>

class Zombie
{
    private:
        std::string name;
        
    public:
        Zombie();
        ~Zombie();

        std::string get_name( void ) const ;
        
        void set_name( std::string name );
        void announce( void ) ;
};

Zombie* zombieHorde( int N, std::string name );

#endif