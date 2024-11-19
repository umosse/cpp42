/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:18 by umosse            #+#    #+#             */
/*   Updated: 2024/11/19 16:09:35 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default contructor called" << std::endl;
}

Fixed::Fixed(const int cint)
{
	_value = cint << _bits;
	std::cout << "Const int constructor called" << std::endl;
}

Fixed::Fixed(const float cfloat)
{
	_value = static_cast<int>(roundf(cfloat * (1 <<_bits)));
	std::cout << "Const int constructor called" << std::endl;
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

bool Fixed::operator>(const Fixed &other) const
{
	return (_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (_value <= other._value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (_value != other._value);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed	res;
	res.setRawBits(_value + other._value);
	return (res);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed	res;
	res.setRawBits(_value - other._value);
	return (res);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed	res;
	res.setRawBits(_value * (other._value >> _bits));
	return (res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed	res;
	if (other._value == 0)
	{
		std::cerr << "Error : dividing by zero" << std::endl;
		return (0);
	}
	res.setRawBits((_value << _bits) / other._value);
	return (res);
}

Fixed Fixed::operator++()
{
	_value++;
	return (_value);
}

Fixed Fixed::operator++(int)
{
	Fixed	old = *this;
	operator++();
	return (old);
}

Fixed Fixed::operator--()
{
	_value--;
	return (_value);
}

Fixed Fixed::operator--(int)
{
	Fixed	old = *this;
	operator--();
	return (old);
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1._value < n2._value)
		return (n1);
	return (n2);
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1._value < n2._value)
		return (n1);
	return (n2);
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1._value > n2._value)
		return (n1);
	return (n2);
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1._value > n2._value)
		return (n1);
	return (n2);
}

std::ostream &operator<<(std::ostream &oss, const Fixed &fixed)
{
	oss << fixed.toFloat();
	return (oss);
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

float	Fixed::toFloat() const
{
	return (_value / static_cast<float>(1 << _bits));
}

int	Fixed::toInt() const
{
	return (_value >> _bits);
}
