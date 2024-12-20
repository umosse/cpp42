/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:31:43 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 16:46:19 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & name)
{
	_type = name;
	std::cout << _type << " default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::string	const &AMateria::getType()const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "How did you get here?" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Default destructor called" << std::endl;
}
