/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:18 by umosse            #+#    #+#             */
/*   Updated: 2024/11/18 16:38:48 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default contructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_value = other._value;
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called" << std::endl;
}

int	Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}
