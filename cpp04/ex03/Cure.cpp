/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:55:40 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 16:47:26 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default constructor called" << std::endl;
}

Cure::Cure(const Cure &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

AMateria	*Cure::clone()const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Default destructor called" << std::endl;
}
