/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:29:58 by umosse            #+#    #+#             */
/*   Updated: 2024/11/19 18:34:54 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Default contructor called" << std::endl;
}


Point::Point(const float cfloat1, const float cfloat2) : _x(Fixed(cfloat1)), _y(Fixed(cfloat2))
{
	// std::cout << "THIS SHOULD SET THE RIGHT VALUES" << std::endl;
}

Point::Point(const Point &other)
{
	*this = other;
	// std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &other)
{
	(void) other;
	// std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

Point::~Point()
{
	// std::cout << "Point destructor called" << std::endl;
}

const Fixed	&Point::getPointX() const
{
	return (_x);
}

const Fixed	&Point::getPointY() const
{
	return (_y);
}