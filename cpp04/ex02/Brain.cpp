/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:43:12 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 17:43:01 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
	std::cout << "Parameterized constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
		*_ideas = *other._ideas;
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	Brain::setIdea(const std::string idea)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
}

void	Brain::printIdea()const
{
	for (int i = 0; i < 100; i++)
		std::cout << _ideas[i] << std::endl;
}

Brain::~Brain()
{
	std::cout << " other inheritance destructor called" << std::endl;
}
