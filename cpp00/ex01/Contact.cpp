/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:07:57 by umosse            #+#    #+#             */
/*   Updated: 2024/11/05 17:12:42 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact constructor has been called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destructor has been called" << std::endl;
}

void	Contact::setFirstName(const std::string& first)
{
	_firstName = first;
}

void	Contact::setLastName(const std::string& last)
{
	_lastName = last;
}

void	Contact::setNickname(const std::string& nick)
{
	_nickName = nick;
}

void	Contact::setPhoneNumber(const std::string& phone)
{
	_phoneNumber = phone;
}

void	Contact::setDarkestSecret(const std::string& secret)
{
	_darkestSecret = secret;
}

std::string	Contact::getFirstName()const
{
	return (_firstName);
}

std::string	Contact::getLastName()const
{
	return (_lastName);
}

std::string	Contact::getNickname()const
{
	return (_nickName);
}

std::string	Contact::getPhoneNumber()const
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret()const
{
	return (_darkestSecret);
}
