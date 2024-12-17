/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:45:32 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 17:16:53 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default constructor called" << std::endl;
}

Ice::Ice(const Ice &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

AMateria	*Ice::clone()const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Default destructor called" << std::endl;
}
