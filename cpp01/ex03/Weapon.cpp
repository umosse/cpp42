/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:10:16 by umosse            #+#    #+#             */
/*   Updated: 2024/11/12 19:37:41 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	_type = name;
	std::cout << "Weapon constructor has been called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor has been called" << std::endl;
}

void	Weapon::setType(const std::string& type)
{
	_type = type;
}

std::string	&Weapon::getType()
{
	return (_type);
}
