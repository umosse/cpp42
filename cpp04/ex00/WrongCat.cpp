/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:10:01 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 14:10:02 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "Wrong cat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	_type = "WrongCat";
	std::cout << _type << " other inheritance constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound()const
{
	std::cout << _type << " : Meow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << _type << " other inheritance destructor called" << std::endl;
}
