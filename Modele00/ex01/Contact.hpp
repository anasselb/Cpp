/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:49:56 by ael-bach          #+#    #+#             */
/*   Updated: 2022/07/31 17:45:19 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>

class Contact
{
    private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darksecret;

	public:

		void	 	set_fname(std::string name);
		void	 	set_lname(std::string name);
		void	 	set_kname(std::string name);
		void	 	set_phonenbr(std::string nbr);
		void	 	set_darksecret(std::string name);

		std::string	get_fname();
		std::string	get_lname();
		std::string	get_kname();
		std::string	get_phonenbr();
		std::string	get_darksecret();
};

#endif