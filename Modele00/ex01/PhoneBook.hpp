/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:19:31 by ael-bach          #+#    #+#             */
/*   Updated: 2022/07/31 16:37:11 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
    public:
        Contact contact[8];
        int     Cnbr;

        void    ADD(int index, int nbr);
        void    SEARCH( void );
        void    print_Contact(int index);

        int     check_nbr(std::string nbr); 
        
        std::string add_data(std::string str);
        std::string add_phonenbr(std::string str);
        std::string get_10(std::string str);

};

# endif