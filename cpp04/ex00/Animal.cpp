/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:41:44 by umosse            #+#    #+#             */
/*   Updated: 2024/12/02 15:47:07 by umosse           ###   ########.fr       */
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

void	Animal::makeSound()
{
	if (_type ==  "Cat")
		std::cout << "Meow" << std::endl;
	else if (_type == "Dog")
		std::cout << "Woof" << std::endl;
}

Animal::~Animal()
{
	std::cout << _type << " default destructor called" << std::endl;
}
