/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:40:33 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 17:55:26 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << _type << " other inheritance constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	_brain = new Brain(*other._brain);
	std::cout << "Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain);
		_type = other._type;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound()const
{
	std::cout << _type << " : Woof" << std::endl;
}

void	Dog::printIdea()
{
	_brain->printIdea();
}

void	Dog::setIdea(const std::string &idea)
{
	_brain->setIdea(idea);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << _type << " other inheritance destructor called" << std::endl;
}
