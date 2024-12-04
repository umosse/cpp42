/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:40:44 by umosse            #+#    #+#             */
/*   Updated: 2024/12/04 14:10:36 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << _type << " other inheritance constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << "Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
		_type = other._type;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << _type << " : Meow" << std::endl;
}

void	Cat::printIdea()
{
	_brain->printIdea();
}

void	Cat::setIdea(const std::string &idea)
{
	_brain->setIdea(idea);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << _type << " other inheritance destructor called" << std::endl;
}
