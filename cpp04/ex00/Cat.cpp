/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:40:44 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 13:58:51 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	_type = "Cat";
	std::cout << _type << " other inheritance constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << _type << " : Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << _type << " other inheritance destructor called" << std::endl;
}
