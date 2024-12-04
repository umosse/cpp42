/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:08:26 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 14:17:33 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
	_type = name;
	std::cout << _type << " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound()const
{
	std::cout << _type << "*Default wrong animal noise*" << std::endl;
}

std::string	WrongAnimal::getType()const
{
	return (_type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default wrong destructor called" << std::endl;
}
