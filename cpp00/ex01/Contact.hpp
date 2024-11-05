/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:55:44 by umosse            #+#    #+#             */
/*   Updated: 2024/11/05 17:39:07 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>

class Contact {
	public:
		Contact();
		~Contact();
		void		setFirstName(const std::string& first);
		void		setLastName(const std::string& last);
		void		setNickname(const std::string& nick);
		void		setPhoneNumber(const std::string& phone);
		void		setDarkestSecret(const std::string& secret);
		std::string	getFirstName()const;
		std::string	getLastName()const;
		std::string	getNickname()const;
		std::string	getPhoneNumber()const;
		std::string	getDarkestSecret()const;
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif