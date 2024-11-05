/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:24:29 by umosse            #+#    #+#             */
/*   Updated: 2024/11/05 17:07:36 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		std::size_t	getIndex()const;
		void		createContact();
		void		addContact(Contact	contact);
		void		getContact();
	private:
		Contact array[8];
		std::size_t	_index;
		std::size_t	_totContact;
		std::string		truncate(std::string string);
};

#endif