/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:36:43 by ael-bach          #+#    #+#             */
/*   Updated: 2022/07/31 17:43:23 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Contact.hpp"

void    Contact::set_fname(std::string name)
{
    firstname = name;
}

void    Contact::set_lname(std::string name)
{
    lastname = name;
}

void    Contact::set_kname(std::string name)
{
    nickname = name;
}

void    Contact::set_phonenbr(std::string nbr)
{
    Contact::phonenumber = nbr;
}

void    Contact::set_darksecret(std::string name)
{
    Contact::darksecret = name;
}

std::string Contact::get_fname( void )
{
    return (firstname);
}

std::string Contact::get_lname( void )
{
    return (lastname);
}

std::string Contact::get_kname( void )
{
    return (nickname);
}

std::string Contact::get_phonenbr( void )
{
    return (phonenumber);
}

std::string Contact::get_darksecret( void )
{
    return (darksecret);
}