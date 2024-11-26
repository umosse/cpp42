/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:31:15 by umosse            #+#    #+#             */
/*   Updated: 2024/11/26 16:30:45 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + " clapName", 100, 50, 30), ScavTrap(name + " clapName", 100, 50, 30), FragTrap(name + " clapName", 100, 50, 30)
{
	_name = name;
	std::cout << _name << " other inheritance constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name is : " << _name << " and its ClapTrap name is : " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << " diamond inheritance destructor called, he had " << _hitPoints << " hitpoints left and " << _energyPoints << " energy points left" << std::endl;
}
