/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:24:03 by umosse            #+#    #+#             */
/*   Updated: 2024/11/07 14:14:47 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : _index(0), _totContact(0)
{
	std::cout << "PhoneBook constructor has been called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor has been called" << std::endl;
}

std::size_t	PhoneBook::getIndex()const
{
	return (_index);
}

void	PhoneBook::addContact(Contact	contact)
{
	if (_index > 7)
		_index = 0;
	array[_index] = contact;
	_index++;
	if (_totContact < 8)
		_totContact++;
}

void	PhoneBook::createContact()
{
	std::cout << "Enter the new contact's first name" << std::endl;
	std::string	firstName;
	std::getline(std::cin, firstName);
	if (std::cin.eof())
		return ;
	while (firstName.empty())
	{
		std::cout << "Enter the new contact's first name" << std::endl;
		std::getline(std::cin, firstName);
		if (std::cin.eof())
			return ;
	}
	std::cout << "Enter the new contact's last name" << std::endl;
	std::string	lastName;
	std::getline(std::cin, lastName);
	if (std::cin.eof())
		return ;
	while (lastName.empty())
	{
		std::cout << "Enter the new contact's last name" << std::endl;
		std::getline(std::cin, lastName);
		if (std::cin.eof())
			return ;
	}
	std::cout << "Enter the new contact's nickname" << std::endl;
	std::string	nickname;
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		return ;
	while (firstName.empty())
	{
		std::cout << "Enter the new contact's nickname" << std::endl;
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			return ;
	}
	std::cout << "Enter the new contact's phone number" << std::endl;
	std::string	phoneNumber;
	std::getline(std::cin, phoneNumber);
	if (std::cin.eof())
		return ;
	while (firstName.empty())
	{
		std::cout << "Enter the new contact's phone number" << std::endl;
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
			return ;
	}
	std::cout << "Enter the new contact's darkest secret" << std::endl;
	std::string	darkestSecret;
	std::getline(std::cin, darkestSecret);
	if (std::cin.eof())
		return ;
	while (firstName.empty())
	{
		std::cout << "Enter the new contact's darkest secret" << std::endl;
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof())
			return ;
	}
	Contact	contact;
	contact.setFirstName(firstName);
	contact.setLastName(lastName);
	contact.setNickname(nickname);
	contact.setPhoneNumber(phoneNumber);
	contact.setDarkestSecret(darkestSecret);
	addContact(contact);
}

std::string	PhoneBook::truncate(std::string string)
{
	if (string.size() > 9)
		return (string.substr(0, 9) + ".");
	return (string);
}

void	PhoneBook::getContact()
{
	std::cout << std::setw(10) << "index" << std::setfill(' ');
	std::cout << "|";
	std::cout << std::setw(10) << "First Name" << std::setfill(' ');
	std::cout << "|";
	std::cout << std::setw(10) << "Last Name" << std::setfill(' ');
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname" << std::setfill(' ') << std::endl;
	std::size_t	i;
	for (i = 0; i < _totContact; i++)
	{
		std::cout << std::setw(10) << i << std::setfill(' ');
		std::cout << "|";
		std::cout << std::setw(10) << truncate(array[i].getFirstName()) << std::setfill(' ');
		std::cout << "|";
		std::cout << std::setw(10) << truncate(array[i].getLastName()) << std::setfill(' ');
		std::cout << "|";
		std::cout << std::setw(10) << truncate(array[i].getNickname()) << std::setfill(' ') << std::endl;
	}
	if (i != 0)
	{
		std::cout << "Enter a contact's index" << std::endl;
		std::string	cIndex;
		std::getline(std::cin, cIndex);
		if (std::cin.eof())
			return ;
		while (strtoul(cIndex.c_str(), NULL, 10) >= _totContact || cIndex.empty())
		{
			std::cout << "Enter a contact's index" << std::endl;
			std::getline(std::cin, cIndex);
			if (std::cin.eof())
				return ;
		}
		std::cout << "Contact's first name : " << array[strtoul(cIndex.c_str(), NULL, 10)].getFirstName() << std::endl;
		std::cout << "Contact's last name : " << array[strtoul(cIndex.c_str(), NULL, 10)].getLastName() << std::endl;
		std::cout << "Contact's nickname : " << array[strtoul(cIndex.c_str(), NULL, 10)].getNickname() << std::endl;
		std::cout << "Contact's phone number : " << array[strtoul(cIndex.c_str(), NULL, 10)].getPhoneNumber() << std::endl;
		std::cout << "Contact's darkest secret : " << array[strtoul(cIndex.c_str(), NULL, 10)].getDarkestSecret() << std::endl;
	}
}
