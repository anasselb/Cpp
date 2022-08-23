/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:56:29 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/13 15:48:02 by ael-bach         ###   ########.fr       */
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
    void randomChump( std::string name );
    Zombie* newZombie( std::string name );

#endif