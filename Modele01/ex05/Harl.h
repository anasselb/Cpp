/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:39:25 by ael-bach          #+#    #+#             */
/*   Updated: 2022/08/15 13:55:47 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H
#include <iostream>
#include <string>

class Harl
{
    typedef struct s_harl
    {
        std::string level;
        void (Harl::*p)();
    } t_harl;
    
    private:
        
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        t_harl  v[4];
    public:
        Harl( void );
        void complain( std::string level );
};

#endif