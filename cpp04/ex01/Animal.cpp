/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:41:44 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 14:17:00 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string name)
{
	_type = name;
	std::cout << _type << " default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	Animal::makeSound()const
{
	std::cout << _type << "*Default animal noise*" << std::endl;
}

std::string	Animal::getType()const
{
	return (_type);
}

Animal::~Animal()
{
	std::cout << "Default destructor called" << std::endl;
}
