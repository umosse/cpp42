/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:37:53 by umosse            #+#    #+#             */
/*   Updated: 2024/11/26 16:15:40 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << _name << " other inheritance constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
{
	_name = name;
	_hitPoints = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " <<_name << " : High five guys !!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap other inheritance destructor called, he had " << _hitPoints << " hitpoints left and " << _energyPoints << " energy points left" << std::endl;
}
