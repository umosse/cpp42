/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:40:33 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 13:59:57 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	_type = "Dog";
	std::cout << _type << " other inheritance constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound()const
{
	std::cout << _type << " : Woof" << std::endl;
}

Dog::~Dog()
{
	std::cout << _type << " other inheritance destructor called" << std::endl;
}
